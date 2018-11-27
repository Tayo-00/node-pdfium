// Copyright 2014 PDFium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Original code copyright 2014 Foxit Software Inc. http://www.foxitsoftware.com

#include "fpdfsdk/pdfwindow/PWL_ComboBox.h"

#include "core/fxge/include/cfx_pathdata.h"
#include "core/fxge/include/cfx_renderdevice.h"
#include "fpdfsdk/fxedit/include/fxet_list.h"
#include "fpdfsdk/pdfwindow/PWL_Edit.h"
#include "fpdfsdk/pdfwindow/PWL_EditCtrl.h"
#include "fpdfsdk/pdfwindow/PWL_ListBox.h"
#include "fpdfsdk/pdfwindow/PWL_Utils.h"
#include "fpdfsdk/pdfwindow/PWL_Wnd.h"
#include "public/fpdf_fwlevent.h"

#define PWLCB_DEFAULTFONTSIZE 12.0f

FX_BOOL CPWL_CBListBox::OnLButtonUp(const CFX_FloatPoint& point,
                                    uint32_t nFlag) {
  CPWL_Wnd::OnLButtonUp(point, nFlag);

  if (!m_bMouseDown)
    return TRUE;

  ReleaseCapture();
  m_bMouseDown = FALSE;

  if (!ClientHitTest(point))
    return TRUE;
  if (CPWL_Wnd* pParent = GetParentWindow())
    pParent->OnNotify(this, PNM_LBUTTONUP, 0, PWL_MAKEDWORD(point.x, point.y));

  FX_BOOL bExit = FALSE;
  OnNotifySelChanged(FALSE, bExit, nFlag);

  return !bExit;
}

FX_BOOL CPWL_CBListBox::OnKeyDownWithExit(uint16_t nChar,
                                          FX_BOOL& bExit,
                                          uint32_t nFlag) {
  switch (nChar) {
    case FWL_VKEY_Up:
    case FWL_VKEY_Down:
    case FWL_VKEY_Home:
    case FWL_VKEY_Left:
    case FWL_VKEY_End:
    case FWL_VKEY_Right:
      break;
    default:
      return FALSE;
  }

  switch (nChar) {
    case FWL_VKEY_Up:
      m_pList->OnVK_UP(IsSHIFTpressed(nFlag), IsCTRLpressed(nFlag));
      break;
    case FWL_VKEY_Down:
      m_pList->OnVK_DOWN(IsSHIFTpressed(nFlag), IsCTRLpressed(nFlag));
      break;
    case FWL_VKEY_Home:
      m_pList->OnVK_HOME(IsSHIFTpressed(nFlag), IsCTRLpressed(nFlag));
      break;
    case FWL_VKEY_Left:
      m_pList->OnVK_LEFT(IsSHIFTpressed(nFlag), IsCTRLpressed(nFlag));
      break;
    case FWL_VKEY_End:
      m_pList->OnVK_END(IsSHIFTpressed(nFlag), IsCTRLpressed(nFlag));
      break;
    case FWL_VKEY_Right:
      m_pList->OnVK_RIGHT(IsSHIFTpressed(nFlag), IsCTRLpressed(nFlag));
      break;
    case FWL_VKEY_Delete:
      break;
  }

  OnNotifySelChanged(TRUE, bExit, nFlag);

  return TRUE;
}

FX_BOOL CPWL_CBListBox::OnCharWithExit(uint16_t nChar,
                                       FX_BOOL& bExit,
                                       uint32_t nFlag) {
  if (!m_pList->OnChar(nChar, IsSHIFTpressed(nFlag), IsCTRLpressed(nFlag)))
    return FALSE;
  if (CPWL_ComboBox* pComboBox = (CPWL_ComboBox*)GetParentWindow())
    pComboBox->SetSelectText();

  OnNotifySelChanged(TRUE, bExit, nFlag);

  return TRUE;
}

void CPWL_CBButton::GetThisAppearanceStream(CFX_ByteTextBuf& sAppStream) {
  CPWL_Wnd::GetThisAppearanceStream(sAppStream);

  CFX_FloatRect rectWnd = CPWL_Wnd::GetWindowRect();

  if (IsVisible() && !rectWnd.IsEmpty()) {
    CFX_ByteTextBuf sButton;

    CFX_FloatPoint ptCenter = GetCenterPoint();

    CFX_FloatPoint pt1(ptCenter.x - PWL_CBBUTTON_TRIANGLE_HALFLEN,
                       ptCenter.y + PWL_CBBUTTON_TRIANGLE_HALFLEN * 0.5f);
    CFX_FloatPoint pt2(ptCenter.x + PWL_CBBUTTON_TRIANGLE_HALFLEN,
                       ptCenter.y + PWL_CBBUTTON_TRIANGLE_HALFLEN * 0.5f);
    CFX_FloatPoint pt3(ptCenter.x,
                       ptCenter.y - PWL_CBBUTTON_TRIANGLE_HALFLEN * 0.5f);

    if (IsFloatBigger(rectWnd.right - rectWnd.left,
                      PWL_CBBUTTON_TRIANGLE_HALFLEN * 2) &&
        IsFloatBigger(rectWnd.top - rectWnd.bottom,
                      PWL_CBBUTTON_TRIANGLE_HALFLEN)) {
      sButton << "0 g\n";
      sButton << pt1.x << " " << pt1.y << " m\n";
      sButton << pt2.x << " " << pt2.y << " l\n";
      sButton << pt3.x << " " << pt3.y << " l\n";
      sButton << pt1.x << " " << pt1.y << " l f\n";

      sAppStream << "q\n" << sButton << "Q\n";
    }
  }
}

void CPWL_CBButton::DrawThisAppearance(CFX_RenderDevice* pDevice,
                                       CFX_Matrix* pUser2Device) {
  CPWL_Wnd::DrawThisAppearance(pDevice, pUser2Device);

  CFX_FloatRect rectWnd = CPWL_Wnd::GetWindowRect();

  if (IsVisible() && !rectWnd.IsEmpty()) {
    CFX_FloatPoint ptCenter = GetCenterPoint();

    CFX_FloatPoint pt1(ptCenter.x - PWL_CBBUTTON_TRIANGLE_HALFLEN,
                       ptCenter.y + PWL_CBBUTTON_TRIANGLE_HALFLEN * 0.5f);
    CFX_FloatPoint pt2(ptCenter.x + PWL_CBBUTTON_TRIANGLE_HALFLEN,
                       ptCenter.y + PWL_CBBUTTON_TRIANGLE_HALFLEN * 0.5f);
    CFX_FloatPoint pt3(ptCenter.x,
                       ptCenter.y - PWL_CBBUTTON_TRIANGLE_HALFLEN * 0.5f);

    if (IsFloatBigger(rectWnd.right - rectWnd.left,
                      PWL_CBBUTTON_TRIANGLE_HALFLEN * 2) &&
        IsFloatBigger(rectWnd.top - rectWnd.bottom,
                      PWL_CBBUTTON_TRIANGLE_HALFLEN)) {
      CFX_PathData path;

      path.SetPointCount(4);
      path.SetPoint(0, pt1.x, pt1.y, FXPT_MOVETO);
      path.SetPoint(1, pt2.x, pt2.y, FXPT_LINETO);
      path.SetPoint(2, pt3.x, pt3.y, FXPT_LINETO);
      path.SetPoint(3, pt1.x, pt1.y, FXPT_LINETO);

      pDevice->DrawPath(&path, pUser2Device, nullptr,
                        CPWL_Utils::PWLColorToFXColor(PWL_DEFAULT_BLACKCOLOR,
                                                      GetTransparency()),
                        0, FXFILL_ALTERNATE);
    }
  }
}

FX_BOOL CPWL_CBButton::OnLButtonDown(const CFX_FloatPoint& point,
                                     uint32_t nFlag) {
  CPWL_Wnd::OnLButtonDown(point, nFlag);

  SetCapture();

  if (CPWL_Wnd* pParent = GetParentWindow()) {
    pParent->OnNotify(this, PNM_LBUTTONDOWN, 0,
                      PWL_MAKEDWORD(point.x, point.y));
  }

  return TRUE;
}

FX_BOOL CPWL_CBButton::OnLButtonUp(const CFX_FloatPoint& point,
                                   uint32_t nFlag) {
  CPWL_Wnd::OnLButtonUp(point, nFlag);

  ReleaseCapture();

  return TRUE;
}

CPWL_ComboBox::CPWL_ComboBox()
    : m_pEdit(nullptr),
      m_pButton(nullptr),
      m_pList(nullptr),
      m_bPopup(FALSE),
      m_nPopupWhere(0),
      m_nSelectItem(-1),
      m_pFillerNotify(nullptr) {}

CFX_ByteString CPWL_ComboBox::GetClassName() const {
  return "CPWL_ComboBox";
}

void CPWL_ComboBox::OnCreate(PWL_CREATEPARAM& cp) {
  cp.dwFlags &= ~PWS_HSCROLL;
  cp.dwFlags &= ~PWS_VSCROLL;
}

void CPWL_ComboBox::SetFocus() {
  if (m_pEdit)
    m_pEdit->SetFocus();
}

void CPWL_ComboBox::KillFocus() {
  SetPopup(FALSE);
  CPWL_Wnd::KillFocus();
}

CFX_WideString CPWL_ComboBox::GetText() const {
  if (m_pEdit) {
    return m_pEdit->GetText();
  }
  return CFX_WideString();
}

void CPWL_ComboBox::SetText(const FX_WCHAR* text) {
  if (m_pEdit)
    m_pEdit->SetText(text);
}

void CPWL_ComboBox::AddString(const FX_WCHAR* str) {
  if (m_pList)
    m_pList->AddString(str);
}

int32_t CPWL_ComboBox::GetSelect() const {
  return m_nSelectItem;
}

void CPWL_ComboBox::SetSelect(int32_t nItemIndex) {
  if (m_pList)
    m_pList->Select(nItemIndex);

  m_pEdit->SetText(m_pList->GetText().c_str());

  m_nSelectItem = nItemIndex;
}

void CPWL_ComboBox::SetEditSel(int32_t nStartChar, int32_t nEndChar) {
  if (m_pEdit) {
    m_pEdit->SetSel(nStartChar, nEndChar);
  }
}

void CPWL_ComboBox::GetEditSel(int32_t& nStartChar, int32_t& nEndChar) const {
  nStartChar = -1;
  nEndChar = -1;

  if (m_pEdit) {
    m_pEdit->GetSel(nStartChar, nEndChar);
  }
}

void CPWL_ComboBox::Clear() {
  if (m_pEdit) {
    m_pEdit->Clear();
  }
}

void CPWL_ComboBox::CreateChildWnd(const PWL_CREATEPARAM& cp) {
  CreateEdit(cp);
  CreateButton(cp);
  CreateListBox(cp);
}

void CPWL_ComboBox::CreateEdit(const PWL_CREATEPARAM& cp) {
  if (!m_pEdit) {
    m_pEdit = new CPWL_CBEdit;
    m_pEdit->AttachFFLData(m_pFormFiller);

    PWL_CREATEPARAM ecp = cp;
    ecp.pParentWnd = this;
    ecp.dwFlags = PWS_VISIBLE | PWS_CHILD | PWS_BORDER | PES_CENTER |
                  PES_AUTOSCROLL | PES_UNDO;

    if (HasFlag(PWS_AUTOFONTSIZE))
      ecp.dwFlags |= PWS_AUTOFONTSIZE;

    if (!HasFlag(PCBS_ALLOWCUSTOMTEXT))
      ecp.dwFlags |= PWS_READONLY;

    ecp.rcRectWnd = CFX_FloatRect(0, 0, 0, 0);
    ecp.dwBorderWidth = 0;
    ecp.nBorderStyle = BorderStyle::SOLID;

    m_pEdit->Create(ecp);
  }
}

void CPWL_ComboBox::CreateButton(const PWL_CREATEPARAM& cp) {
  if (!m_pButton) {
    m_pButton = new CPWL_CBButton;

    PWL_CREATEPARAM bcp = cp;
    bcp.pParentWnd = this;
    bcp.dwFlags = PWS_VISIBLE | PWS_CHILD | PWS_BORDER | PWS_BACKGROUND;
    bcp.sBackgroundColor = PWL_SCROLLBAR_BKCOLOR;
    bcp.sBorderColor = PWL_DEFAULT_BLACKCOLOR;
    bcp.dwBorderWidth = 2;
    bcp.nBorderStyle = BorderStyle::BEVELED;
    bcp.eCursorType = FXCT_ARROW;

    m_pButton->Create(bcp);
  }
}

void CPWL_ComboBox::CreateListBox(const PWL_CREATEPARAM& cp) {
  if (!m_pList) {
    m_pList = new CPWL_CBListBox;
    m_pList->AttachFFLData(m_pFormFiller);
    PWL_CREATEPARAM lcp = cp;
    lcp.pParentWnd = this;
    lcp.dwFlags =
        PWS_CHILD | PWS_BORDER | PWS_BACKGROUND | PLBS_HOVERSEL | PWS_VSCROLL;
    lcp.nBorderStyle = BorderStyle::SOLID;
    lcp.dwBorderWidth = 1;
    lcp.eCursorType = FXCT_ARROW;
    lcp.rcRectWnd = CFX_FloatRect(0, 0, 0, 0);

    if (cp.dwFlags & PWS_AUTOFONTSIZE)
      lcp.fFontSize = PWLCB_DEFAULTFONTSIZE;
    else
      lcp.fFontSize = cp.fFontSize;

    if (cp.sBorderColor.nColorType == COLORTYPE_TRANSPARENT)
      lcp.sBorderColor = PWL_DEFAULT_BLACKCOLOR;

    if (cp.sBackgroundColor.nColorType == COLORTYPE_TRANSPARENT)
      lcp.sBackgroundColor = PWL_DEFAULT_WHITECOLOR;

    m_pList->Create(lcp);
  }
}

void CPWL_ComboBox::RePosChildWnd() {
  CFX_FloatRect rcClient = GetClientRect();

  if (m_bPopup) {
    CFX_FloatRect rclient = GetClientRect();
    CFX_FloatRect rcButton = rclient;
    CFX_FloatRect rcEdit = rcClient;
    CFX_FloatRect rcList = CPWL_Wnd::GetWindowRect();

    FX_FLOAT fOldWindowHeight = m_rcOldWindow.Height();
    FX_FLOAT fOldClientHeight = fOldWindowHeight - GetBorderWidth() * 2;

    switch (m_nPopupWhere) {
      case 0:
        rcButton.left = rcButton.right - PWL_COMBOBOX_BUTTON_WIDTH;

        if (rcButton.left < rclient.left)
          rcButton.left = rclient.left;

        rcButton.bottom = rcButton.top - fOldClientHeight;

        rcEdit.right = rcButton.left - 1.0f;

        if (rcEdit.left < rclient.left)
          rcEdit.left = rclient.left;

        if (rcEdit.right < rcEdit.left)
          rcEdit.right = rcEdit.left;

        rcEdit.bottom = rcEdit.top - fOldClientHeight;

        rcList.top -= fOldWindowHeight;

        break;
      case 1:
        rcButton.left = rcButton.right - PWL_COMBOBOX_BUTTON_WIDTH;

        if (rcButton.left < rclient.left)
          rcButton.left = rclient.left;

        rcButton.top = rcButton.bottom + fOldClientHeight;

        rcEdit.right = rcButton.left - 1.0f;

        if (rcEdit.left < rclient.left)
          rcEdit.left = rclient.left;

        if (rcEdit.right < rcEdit.left)
          rcEdit.right = rcEdit.left;

        rcEdit.top = rcEdit.bottom + fOldClientHeight;

        rcList.bottom += fOldWindowHeight;

        break;
    }

    if (m_pButton)
      m_pButton->Move(rcButton, TRUE, FALSE);

    if (m_pEdit)
      m_pEdit->Move(rcEdit, TRUE, FALSE);

    if (m_pList) {
      m_pList->SetVisible(TRUE);
      m_pList->Move(rcList, TRUE, FALSE);
      m_pList->ScrollToListItem(m_nSelectItem);
    }
  } else {
    CFX_FloatRect rcButton = rcClient;

    rcButton.left = rcButton.right - PWL_COMBOBOX_BUTTON_WIDTH;

    if (rcButton.left < rcClient.left)
      rcButton.left = rcClient.left;

    if (m_pButton)
      m_pButton->Move(rcButton, TRUE, FALSE);

    CFX_FloatRect rcEdit = rcClient;
    rcEdit.right = rcButton.left - 1.0f;

    if (rcEdit.left < rcClient.left)
      rcEdit.left = rcClient.left;

    if (rcEdit.right < rcEdit.left)
      rcEdit.right = rcEdit.left;

    if (m_pEdit)
      m_pEdit->Move(rcEdit, TRUE, FALSE);

    if (m_pList)
      m_pList->SetVisible(FALSE);
  }
}

void CPWL_ComboBox::SelectAll() {
  if (m_pEdit && HasFlag(PCBS_ALLOWCUSTOMTEXT))
    m_pEdit->SelectAll();
}

CFX_FloatRect CPWL_ComboBox::GetFocusRect() const {
  return CFX_FloatRect();
}

void CPWL_ComboBox::SetPopup(FX_BOOL bPopup) {
  if (!m_pList)
    return;
  if (bPopup == m_bPopup)
    return;
  FX_FLOAT fListHeight = m_pList->GetContentRect().Height();
  if (!IsFloatBigger(fListHeight, 0.0f))
    return;

  if (bPopup) {
    if (m_pFillerNotify) {
#ifdef PDF_ENABLE_XFA
      FX_BOOL bExit = FALSE;
      m_pFillerNotify->OnPopupPreOpen(GetAttachedData(), bExit, 0);
      if (bExit)
        return;
#endif  // PDF_ENABLE_XFA
      int32_t nWhere = 0;
      FX_FLOAT fPopupRet = 0.0f;
      FX_FLOAT fPopupMin = 0.0f;
      if (m_pList->GetCount() > 3)
        fPopupMin =
            m_pList->GetFirstHeight() * 3 + m_pList->GetBorderWidth() * 2;
      FX_FLOAT fPopupMax = fListHeight + m_pList->GetBorderWidth() * 2;
      m_pFillerNotify->QueryWherePopup(GetAttachedData(), fPopupMin, fPopupMax,
                                       nWhere, fPopupRet);

      if (IsFloatBigger(fPopupRet, 0.0f)) {
        m_bPopup = bPopup;

        CFX_FloatRect rcWindow = CPWL_Wnd::GetWindowRect();
        m_rcOldWindow = rcWindow;
        switch (nWhere) {
          default:
          case 0:
            rcWindow.bottom -= fPopupRet;
            break;
          case 1:
            rcWindow.top += fPopupRet;
            break;
        }

        m_nPopupWhere = nWhere;
        Move(rcWindow, TRUE, TRUE);
#ifdef PDF_ENABLE_XFA
        bExit = FALSE;
        m_pFillerNotify->OnPopupPostOpen(GetAttachedData(), bExit, 0);
        if (bExit)
          return;
#endif  // PDF_ENABLE_XFA
      }
    }
  } else {
    m_bPopup = bPopup;
    Move(m_rcOldWindow, TRUE, TRUE);
  }
}

FX_BOOL CPWL_ComboBox::OnKeyDown(uint16_t nChar, uint32_t nFlag) {
  if (!m_pList)
    return FALSE;
  if (!m_pEdit)
    return FALSE;

  m_nSelectItem = -1;

  switch (nChar) {
    case FWL_VKEY_Up:
      if (m_pList->GetCurSel() > 0) {
        FX_BOOL bExit = FALSE;
#ifdef PDF_ENABLE_XFA
        if (m_pFillerNotify) {
          m_pFillerNotify->OnPopupPreOpen(GetAttachedData(), bExit, nFlag);
          if (bExit)
            return FALSE;
          bExit = FALSE;
          m_pFillerNotify->OnPopupPostOpen(GetAttachedData(), bExit, nFlag);
          if (bExit)
            return FALSE;
        }
#endif  // PDF_ENABLE_XFA
        if (m_pList->OnKeyDownWithExit(nChar, bExit, nFlag)) {
          if (bExit)
            return FALSE;
          SetSelectText();
        }
      }
      return TRUE;
    case FWL_VKEY_Down:
      if (m_pList->GetCurSel() < m_pList->GetCount() - 1) {
        FX_BOOL bExit = FALSE;
#ifdef PDF_ENABLE_XFA
        if (m_pFillerNotify) {
          m_pFillerNotify->OnPopupPreOpen(GetAttachedData(), bExit, nFlag);
          if (bExit)
            return FALSE;
          bExit = FALSE;
          m_pFillerNotify->OnPopupPostOpen(GetAttachedData(), bExit, nFlag);
          if (bExit)
            return FALSE;
        }
#endif  // PDF_ENABLE_XFA
        if (m_pList->OnKeyDownWithExit(nChar, bExit, nFlag)) {
          if (bExit)
            return FALSE;
          SetSelectText();
        }
      }
      return TRUE;
  }

  if (HasFlag(PCBS_ALLOWCUSTOMTEXT))
    return m_pEdit->OnKeyDown(nChar, nFlag);

  return FALSE;
}

FX_BOOL CPWL_ComboBox::OnChar(uint16_t nChar, uint32_t nFlag) {
  if (!m_pList)
    return FALSE;

  if (!m_pEdit)
    return FALSE;

  m_nSelectItem = -1;
  if (HasFlag(PCBS_ALLOWCUSTOMTEXT))
    return m_pEdit->OnChar(nChar, nFlag);

  FX_BOOL bExit = FALSE;
#ifdef PDF_ENABLE_XFA
  if (m_pFillerNotify) {
    m_pFillerNotify->OnPopupPreOpen(GetAttachedData(), bExit, nFlag);
    if (bExit)
      return FALSE;

    m_pFillerNotify->OnPopupPostOpen(GetAttachedData(), bExit, nFlag);
    if (bExit)
      return FALSE;
  }
#endif  // PDF_ENABLE_XFA
  return m_pList->OnCharWithExit(nChar, bExit, nFlag) ? bExit : FALSE;
}

void CPWL_ComboBox::OnNotify(CPWL_Wnd* pWnd,
                             uint32_t msg,
                             intptr_t wParam,
                             intptr_t lParam) {
  switch (msg) {
    case PNM_LBUTTONDOWN:
      if (pWnd == m_pButton) {
        SetPopup(!m_bPopup);
        return;
      }
      break;
    case PNM_LBUTTONUP:
      if (m_pEdit && m_pList) {
        if (pWnd == m_pList) {
          SetSelectText();
          SelectAll();
          m_pEdit->SetFocus();
          SetPopup(FALSE);
          return;
        }
      }
  }

  CPWL_Wnd::OnNotify(pWnd, msg, wParam, lParam);
}

FX_BOOL CPWL_ComboBox::IsPopup() const {
  return m_bPopup;
}

void CPWL_ComboBox::SetSelectText() {
  CFX_WideString swText = m_pList->GetText();
  m_pEdit->SelectAll();
  m_pEdit->ReplaceSel(m_pList->GetText().c_str());
  m_pEdit->SelectAll();

  m_nSelectItem = m_pList->GetCurSel();
}

void CPWL_ComboBox::SetFillerNotify(IPWL_Filler_Notify* pNotify) {
  m_pFillerNotify = pNotify;

  if (m_pEdit)
    m_pEdit->SetFillerNotify(pNotify);

  if (m_pList)
    m_pList->SetFillerNotify(pNotify);
}
