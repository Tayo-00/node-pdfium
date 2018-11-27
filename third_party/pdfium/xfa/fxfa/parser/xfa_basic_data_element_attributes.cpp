// Copyright 2016 PDFium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Original code copyright 2014 Foxit Software Inc. http://www.foxitsoftware.com

#include "xfa/fxfa/parser/xfa_basic_data.h"

#include "xfa/fxfa/include/fxfa_basic.h"

const XFA_ELEMENTHIERARCHY g_XFAElementAttributeIndex[] = {
    {0, 3},    {3, 2},    {5, 3},    {8, 10},   {18, 2},   {20, 6},   {26, 2},
    {28, 1},   {29, 13},  {42, 2},   {44, 1},   {45, 2},   {47, 2},   {49, 7},
    {56, 0},   {56, 4},   {60, 2},   {62, 7},   {69, 0},   {69, 0},   {69, 2},
    {71, 2},   {73, 8},   {81, 5},   {86, 8},   {94, 4},   {98, 3},   {101, 3},
    {104, 3},  {107, 6},  {113, 2},  {115, 2},  {117, 2},  {119, 2},  {121, 3},
    {124, 2},  {126, 7},  {133, 13}, {146, 2},  {148, 6},  {154, 2},  {156, 3},
    {159, 1},  {160, 17}, {177, 2},  {179, 2},  {181, 6},  {187, 2},  {189, 2},
    {191, 3},  {194, 7},  {201, 2},  {203, 3},  {206, 0},  {206, 21}, {227, 1},
    {228, 3},  {231, 2},  {233, 0},  {233, 2},  {235, 2},  {237, 6},  {243, 0},
    {243, 4},  {247, 4},  {251, 0},  {251, 2},  {253, 2},  {255, 0},  {255, 0},
    {255, 2},  {257, 2},  {259, 4},  {263, 3},  {266, 7},  {273, 10}, {283, 9},
    {292, 6},  {298, 4},  {302, 2},  {304, 2},  {306, 6},  {312, 4},  {316, 3},
    {319, 2},  {321, 2},  {323, 4},  {327, 4},  {331, 4},  {335, 4},  {339, 2},
    {341, 2},  {343, 2},  {345, 22}, {367, 3},  {370, 2},  {372, 2},  {374, 2},
    {376, 9},  {385, 0},  {385, 4},  {389, 3},  {392, 0},  {392, 2},  {394, 7},
    {401, 4},  {405, 2},  {407, 4},  {411, 0},  {411, 21}, {432, 4},  {436, 3},
    {439, 4},  {443, 6},  {449, 2},  {451, 5},  {456, 2},  {458, 8},  {466, 1},
    {467, 2},  {469, 2},  {471, 5},  {476, 0},  {476, 2},  {478, 2},  {480, 6},
    {486, 26}, {512, 4},  {516, 2},  {518, 2},  {520, 4},  {524, 0},  {524, 2},
    {526, 2},  {528, 2},  {530, 2},  {532, 5},  {537, 2},  {539, 3},  {542, 2},
    {544, 4},  {548, 5},  {553, 2},  {555, 0},  {555, 2},  {557, 4},  {561, 5},
    {566, 3},  {569, 2},  {571, 3},  {574, 0},  {574, 2},  {576, 9},  {585, 2},
    {587, 5},  {592, 6},  {598, 5},  {603, 4},  {607, 4},  {611, 8},  {619, 4},
    {623, 0},  {623, 7},  {630, 4},  {634, 4},  {638, 5},  {643, 2},  {645, 2},
    {647, 4},  {651, 4},  {655, 2},  {657, 2},  {659, 1},  {660, 2},  {662, 5},
    {667, 4},  {671, 3},  {674, 2},  {676, 2},  {678, 4},  {682, 0},  {682, 9},
    {691, 2},  {693, 2},  {695, 5},  {700, 4},  {704, 3},  {707, 2},  {709, 10},
    {719, 2},  {721, 4},  {725, 4},  {729, 2},  {731, 6},  {737, 2},  {739, 2},
    {741, 9},  {750, 1},  {751, 4},  {755, 3},  {758, 5},  {763, 6},  {769, 4},
    {773, 1},  {774, 4},  {778, 0},  {778, 3},  {781, 1},  {782, 5},  {787, 10},
    {797, 7},  {804, 3},  {807, 2},  {809, 5},  {814, 2},  {816, 0},  {816, 2},
    {818, 2},  {820, 2},  {822, 6},  {828, 2},  {830, 1},  {831, 2},  {833, 2},
    {835, 8},  {843, 2},  {845, 4},  {849, 4},  {853, 4},  {857, 2},  {859, 2},
    {861, 2},  {863, 3},  {866, 2},  {868, 2},  {870, 4},  {874, 3},  {877, 5},
    {882, 20}, {902, 2},  {904, 0},  {904, 2},  {906, 6},  {912, 1},  {913, 2},
    {915, 1},  {916, 2},  {918, 4},  {922, 2},  {924, 2},  {926, 4},  {930, 4},
    {934, 20}, {954, 1},  {955, 2},  {957, 4},  {961, 4},  {965, 2},  {967, 2},
    {969, 4},  {973, 2},  {975, 0},  {975, 2},  {977, 5},  {982, 5},  {987, 8},
    {995, 2},  {997, 2},  {999, 4},  {1003, 4}, {1007, 2}, {1009, 4}, {1013, 0},
    {1013, 1}, {1014, 2}, {1016, 9}, {1025, 2}, {1027, 0}, {1027, 8}, {1035, 2},
    {1037, 2}, {1039, 0}, {1039, 4}, {1043, 2}, {1045, 0}, {1045, 2}, {1047, 3},
    {1050, 2}, {1052, 5}, {1057, 2}, {1059, 2}, {1061, 4}, {1065, 3}, {1068, 0},
    {1068, 4}, {1072, 2}, {1074, 2}, {1076, 3}, {1079, 4}, {1083, 8}, {1091, 5},
    {1096, 0}, {1096, 4}, {1100, 6}, {1106, 2}, {1108, 1}, {1109, 2}, {1111, 2},
    {1113, 2}, {1115, 1}, {1116, 2}, {1118, 7},
};
static_assert(FX_ArraySize(g_XFAElementAttributeIndex) ==
                  (static_cast<int32_t>(XFA_Element::Items) + 1),
              "gXFAElementAttributeIndex size does not match XFA_Element");

const uint8_t g_XFAElementAttributeData[] = {
    XFA_ATTRIBUTE_Name,
    XFA_ATTRIBUTE_Desc,
    XFA_ATTRIBUTE_Lock,
    XFA_ATTRIBUTE_Desc,
    XFA_ATTRIBUTE_Lock,
    XFA_ATTRIBUTE_Id,
    XFA_ATTRIBUTE_Use,
    XFA_ATTRIBUTE_Usehref,
    XFA_ATTRIBUTE_Id,
    XFA_ATTRIBUTE_Name,
    XFA_ATTRIBUTE_Max,
    XFA_ATTRIBUTE_Use,
    XFA_ATTRIBUTE_EofAction,
    XFA_ATTRIBUTE_CursorType,
    XFA_ATTRIBUTE_LockType,
    XFA_ATTRIBUTE_BofAction,
    XFA_ATTRIBUTE_Usehref,
    XFA_ATTRIBUTE_CursorLocation,
    XFA_ATTRIBUTE_Desc,
    XFA_ATTRIBUTE_Lock,
    XFA_ATTRIBUTE_Id,
    XFA_ATTRIBUTE_Name,
    XFA_ATTRIBUTE_Use,
    XFA_ATTRIBUTE_Relation,
    XFA_ATTRIBUTE_Relevant,
    XFA_ATTRIBUTE_Usehref,
    XFA_ATTRIBUTE_Desc,
    XFA_ATTRIBUTE_Lock,
    XFA_ATTRIBUTE_Name,
    XFA_ATTRIBUTE_Id,
    XFA_ATTRIBUTE_BeforeTarget,
    XFA_ATTRIBUTE_Use,
    XFA_ATTRIBUTE_OverflowTarget,
    XFA_ATTRIBUTE_OverflowLeader,
    XFA_ATTRIBUTE_OverflowTrailer,
    XFA_ATTRIBUTE_StartNew,
    XFA_ATTRIBUTE_BookendTrailer,
    XFA_ATTRIBUTE_After,
    XFA_ATTRIBUTE_Usehref,
    XFA_ATTRIBUTE_BookendLeader,
    XFA_ATTRIBUTE_AfterTarget,
    XFA_ATTRIBUTE_Before,
    XFA_ATTRIBUTE_Desc,
    XFA_ATTRIBUTE_Lock,
    XFA_ATTRIBUTE_Name,
    XFA_ATTRIBUTE_Desc,
    XFA_ATTRIBUTE_Lock,
    XFA_ATTRIBUTE_Desc,
    XFA_ATTRIBUTE_Lock,
    XFA_ATTRIBUTE_Id,
    XFA_ATTRIBUTE_Use,
    XFA_ATTRIBUTE_AllowNeutral,
    XFA_ATTRIBUTE_Mark,
    XFA_ATTRIBUTE_Shape,
    XFA_ATTRIBUTE_Size,
    XFA_ATTRIBUTE_Usehref,
    XFA_ATTRIBUTE_Id,
    XFA_ATTRIBUTE_Name,
    XFA_ATTRIBUTE_Use,
    XFA_ATTRIBUTE_Usehref,
    XFA_ATTRIBUTE_Desc,
    XFA_ATTRIBUTE_Lock,
    XFA_ATTRIBUTE_Id,
    XFA_ATTRIBUTE_Use,
    XFA_ATTRIBUTE_StartAngle,
    XFA_ATTRIBUTE_SweepAngle,
    XFA_ATTRIBUTE_Circular,
    XFA_ATTRIBUTE_Usehref,
    XFA_ATTRIBUTE_Hand,
    XFA_ATTRIBUTE_Desc,
    XFA_ATTRIBUTE_Lock,
    XFA_ATTRIBUTE_Desc,
    XFA_ATTRIBUTE_Lock,
    XFA_ATTRIBUTE_Id,
    XFA_ATTRIBUTE_Name,
    XFA_ATTRIBUTE_Use,
    XFA_ATTRIBUTE_Bind,
    XFA_ATTRIBUTE_Usehref,
    XFA_ATTRIBUTE_Desc,
    XFA_ATTRIBUTE_From,
    XFA_ATTRIBUTE_Lock,
    XFA_ATTRIBUTE_Id,
    XFA_ATTRIBUTE_Use,
    XFA_ATTRIBUTE_SignatureType,
    XFA_ATTRIBUTE_Usehref,
    XFA_ATTRIBUTE_Permissions,
    XFA_ATTRIBUTE_Id,
    XFA_ATTRIBUTE_Use,
    XFA_ATTRIBUTE_StartNew,
    XFA_ATTRIBUTE_Trailer,
    XFA_ATTRIBUTE_TargetType,
    XFA_ATTRIBUTE_Usehref,
    XFA_ATTRIBUTE_Target,
    XFA_ATTRIBUTE_Leader,
    XFA_ATTRIBUTE_Id,
    XFA_ATTRIBUTE_Name,
    XFA_ATTRIBUTE_Use,
    XFA_ATTRIBUTE_Usehref,
    XFA_ATTRIBUTE_Name,
    XFA_ATTRIBUTE_Desc,
    XFA_ATTRIBUTE_Lock,
    XFA_ATTRIBUTE_Name,
    XFA_ATTRIBUTE_Desc,
    XFA_ATTRIBUTE_Lock,
    XFA_ATTRIBUTE_Id,
    XFA_ATTRIBUTE_Use,
    XFA_ATTRIBUTE_Usehref,
    XFA_ATTRIBUTE_Id,
    XFA_ATTRIBUTE_Name,
    XFA_ATTRIBUTE_Use,
    XFA_ATTRIBUTE_Usehref,
    XFA_ATTRIBUTE_Desc,
    XFA_ATTRIBUTE_Lock,
    XFA_ATTRIBUTE_Desc,
    XFA_ATTRIBUTE_Lock,
    XFA_ATTRIBUTE_Desc,
    XFA_ATTRIBUTE_Lock,
    XFA_ATTRIBUTE_TimeStamp,
    XFA_ATTRIBUTE_Uuid,
    XFA_ATTRIBUTE_Desc,
    XFA_ATTRIBUTE_Lock,
    XFA_ATTRIBUTE_Name,
    XFA_ATTRIBUTE_Desc,
    XFA_ATTRIBUTE_Lock,
    XFA_ATTRIBUTE_Desc,
    XFA_ATTRIBUTE_Lock,
    XFA_ATTRIBUTE_Id,
    XFA_ATTRIBUTE_Use,
    XFA_ATTRIBUTE_LeftInset,
    XFA_ATTRIBUTE_BottomInset,
    XFA_ATTRIBUTE_TopInset,
    XFA_ATTRIBUTE_RightInset,
    XFA_ATTRIBUTE_Usehref,
    XFA_ATTRIBUTE_Id,
    XFA_ATTRIBUTE_Use,
    XFA_ATTRIBUTE_NonRepudiation,
    XFA_ATTRIBUTE_EncipherOnly,
    XFA_ATTRIBUTE_Type,
    XFA_ATTRIBUTE_DigitalSignature,
    XFA_ATTRIBUTE_CrlSign,
    XFA_ATTRIBUTE_KeyAgreement,
    XFA_ATTRIBUTE_KeyEncipherment,
    XFA_ATTRIBUTE_Usehref,
    XFA_ATTRIBUTE_DataEncipherment,
    XFA_ATTRIBUTE_KeyCertSign,
    XFA_ATTRIBUTE_DecipherOnly,
    XFA_ATTRIBUTE_Desc,
    XFA_ATTRIBUTE_Lock,
    XFA_ATTRIBUTE_Id,
    XFA_ATTRIBUTE_Use,
    XFA_ATTRIBUTE_Open,
    XFA_ATTRIBUTE_CommitOn,
    XFA_ATTRIBUTE_TextEntry,
    XFA_ATTRIBUTE_Usehref,
    XFA_ATTRIBUTE_Desc,
    XFA_ATTRIBUTE_Lock,
    XFA_ATTRIBUTE_Name,
    XFA_ATTRIBUTE_Desc,
    XFA_ATTRIBUTE_Lock,
    XFA_ATTRIBUTE_Name,
    XFA_ATTRIBUTE_Id,
    XFA_ATTRIBUTE_HAlign,
    XFA_ATTRIBUTE_TextIndent,
    XFA_ATTRIBUTE_Use,
    XFA_ATTRIBUTE_Widows,
    XFA_ATTRIBUTE_MarginRight,
    XFA_ATTRIBUTE_MarginLeft,
    XFA_ATTRIBUTE_RadixOffset,
    XFA_ATTRIBUTE_Preserve,
    XFA_ATTRIBUTE_SpaceBelow,
    XFA_ATTRIBUTE_VAlign,
    XFA_ATTRIBUTE_TabDefault,
    XFA_ATTRIBUTE_TabStops,
    XFA_ATTRIBUTE_Orphans,
    XFA_ATTRIBUTE_Usehref,
    XFA_ATTRIBUTE_LineHeight,
    XFA_ATTRIBUTE_SpaceAbove,
    XFA_ATTRIBUTE_Desc,
    XFA_ATTRIBUTE_Lock,
    XFA_ATTRIBUTE_Desc,
    XFA_ATTRIBUTE_Lock,
    XFA_ATTRIBUTE_Id,
    XFA_ATTRIBUTE_Name,
    XFA_ATTRIBUTE_Use,
    XFA_ATTRIBUTE_Version,
    XFA_ATTRIBUTE_Usehref,
    XFA_ATTRIBUTE_AddRevocationInfo,
    XFA_ATTRIBUTE_Desc,
    XFA_ATTRIBUTE_Lock,
    XFA_ATTRIBUTE_Desc,
    XFA_ATTRIBUTE_Lock,
    XFA_ATTRIBUTE_Id,
    XFA_ATTRIBUTE_Use,
    XFA_ATTRIBUTE_Usehref,
    XFA_ATTRIBUTE_Id,
    XFA_ATTRIBUTE_Name,
    XFA_ATTRIBUTE_Ref,
    XFA_ATTRIBUTE_Use,
    XFA_ATTRIBUTE_Listen,
    XFA_ATTRIBUTE_Usehref,
    XFA_ATTRIBUTE_Activity,
    XFA_ATTRIBUTE_Desc,
    XFA_ATTRIBUTE_Lock,
    XFA_ATTRIBUTE_Id,
    XFA_ATTRIBUTE_Use,
    XFA_ATTRIBUTE_Usehref,
    XFA_ATTRIBUTE_Id,
    XFA_ATTRIBUTE_DataRowCount,
    XFA_ATTRIBUTE_Use,
    XFA_ATTRIBUTE_DataPrep,
    XFA_ATTRIBUTE_Type,
    XFA_ATTRIBUTE_TextLocation,
    XFA_ATTRIBUTE_ModuleWidth,
    XFA_ATTRIBUTE_PrintCheckDigit,
    XFA_ATTRIBUTE_ModuleHeight,
    XFA_ATTRIBUTE_StartChar,
    XFA_ATTRIBUTE_Truncate,
    XFA_ATTRIBUTE_WideNarrowRatio,
    XFA_ATTRIBUTE_ErrorCorrectionLevel,
    XFA_ATTRIBUTE_UpsMode,
    XFA_ATTRIBUTE_Checksum,
    XFA_ATTRIBUTE_CharEncoding,
    XFA_ATTRIBUTE_Usehref,
    XFA_ATTRIBUTE_DataColumnCount,
    XFA_ATTRIBUTE_RowColumnRatio,
    XFA_ATTRIBUTE_DataLength,
    XFA_ATTRIBUTE_EndChar,
    XFA_ATTRIBUTE_Name,
    XFA_ATTRIBUTE_Format,
    XFA_ATTRIBUTE_Desc,
    XFA_ATTRIBUTE_Lock,
    XFA_ATTRIBUTE_Desc,
    XFA_ATTRIBUTE_Lock,
    XFA_ATTRIBUTE_Desc,
    XFA_ATTRIBUTE_Lock,
    XFA_ATTRIBUTE_Desc,
    XFA_ATTRIBUTE_Lock,
    XFA_ATTRIBUTE_Id,
    XFA_ATTRIBUTE_Name,
    XFA_ATTRIBUTE_Use,
    XFA_ATTRIBUTE_Output,
    XFA_ATTRIBUTE_Usehref,
    XFA_ATTRIBUTE_Input,
    XFA_ATTRIBUTE_Id,
    XFA_ATTRIBUTE_Use,
    XFA_ATTRIBUTE_Type,
    XFA_ATTRIBUTE_Usehref,
    XFA_ATTRIBUTE_Id,
    XFA_ATTRIBUTE_Use,
    XFA_ATTRIBUTE_Type,
    XFA_ATTRIBUTE_Usehref,
    XFA_ATTRIBUTE_Name,
    XFA_ATTRIBUTE_DataDescription,
    XFA_ATTRIBUTE_Desc,
    XFA_ATTRIBUTE_Lock,
    XFA_ATTRIBUTE_Desc,
    XFA_ATTRIBUTE_Lock,
    XFA_ATTRIBUTE_Desc,
    XFA_ATTRIBUTE_Lock,
    XFA_ATTRIBUTE_Id,
    XFA_ATTRIBUTE_Use,
    XFA_ATTRIBUTE_Usehref,
    XFA_ATTRIBUTE_Highlight,
    XFA_ATTRIBUTE_Id,
    XFA_ATTRIBUTE_Use,
    XFA_ATTRIBUTE_Usehref,
    XFA_ATTRIBUTE_Id,
    XFA_ATTRIBUTE_Break,
    XFA_ATTRIBUTE_Use,
    XFA_ATTRIBUTE_Presence,
    XFA_ATTRIBUTE_Relevant,
    XFA_ATTRIBUTE_Usehref,
    XFA_ATTRIBUTE_Hand,
    XFA_ATTRIBUTE_X,
    XFA_ATTRIBUTE_Y,
    XFA_ATTRIBUTE_Id,
    XFA_ATTRIBUTE_Name,
    XFA_ATTRIBUTE_Use,
    XFA_ATTRIBUTE_Level,
    XFA_ATTRIBUTE_Relevant,
    XFA_ATTRIBUTE_ColSpan,
    XFA_ATTRIBUTE_Usehref,
    XFA_ATTRIBUTE_Lock,
    XFA_ATTRIBUTE_Id,
    XFA_ATTRIBUTE_Use,
    XFA_ATTRIBUTE_WordCharacterCount,
    XFA_ATTRIBUTE_Hyphenate,
    XFA_ATTRIBUTE_ExcludeInitialCap,
    XFA_ATTRIBUTE_PushCharacterCount,
    XFA_ATTRIBUTE_RemainCharacterCount,
    XFA_ATTRIBUTE_Usehref,
    XFA_ATTRIBUTE_ExcludeAllCaps,
    XFA_ATTRIBUTE_Id,
    XFA_ATTRIBUTE_Name,
    XFA_ATTRIBUTE_Rid,
    XFA_ATTRIBUTE_Use,
    XFA_ATTRIBUTE_MaxChars,
    XFA_ATTRIBUTE_Usehref,
    XFA_ATTRIBUTE_Id,
    XFA_ATTRIBUTE_Name,
    XFA_ATTRIBUTE_Use,
    XFA_ATTRIBUTE_Usehref,
    XFA_ATTRIBUTE_Desc,
    XFA_ATTRIBUTE_Lock,
    XFA_ATTRIBUTE_Desc,
    XFA_ATTRIBUTE_Lock,
    XFA_ATTRIBUTE_Id,
    XFA_ATTRIBUTE_Url,
    XFA_ATTRIBUTE_Use,
    XFA_ATTRIBUTE_CredentialServerPolicy,
    XFA_ATTRIBUTE_Usehref,
    XFA_ATTRIBUTE_UrlPolicy,
    XFA_ATTRIBUTE_Id,
    XFA_ATTRIBUTE_Use,
    XFA_ATTRIBUTE_Type,
    XFA_ATTRIBUTE_Usehref,
    XFA_ATTRIBUTE_Ref,
    XFA_ATTRIBUTE_Connection,
    XFA_ATTRIBUTE_Target,
    XFA_ATTRIBUTE_Desc,
    XFA_ATTRIBUTE_Lock,
    XFA_ATTRIBUTE_Desc,
    XFA_ATTRIBUTE_Lock,
    XFA_ATTRIBUTE_X,
    XFA_ATTRIBUTE_Y,
    XFA_ATTRIBUTE_Desc,
    XFA_ATTRIBUTE_Lock,
    XFA_ATTRIBUTE_Id,
    XFA_ATTRIBUTE_Name,
    XFA_ATTRIBUTE_Use,
    XFA_ATTRIBUTE_Usehref,
    XFA_ATTRIBUTE_Id,
    XFA_ATTRIBUTE_Use,
    XFA_ATTRIBUTE_NumberOfCells,
    XFA_ATTRIBUTE_Usehref,
    XFA_ATTRIBUTE_Id,
    XFA_ATTRIBUTE_Use,
    XFA_ATTRIBUTE_Type,
    XFA_ATTRIBUTE_Usehref,
    XFA_ATTRIBUTE_Desc,
    XFA_ATTRIBUTE_Lock,
    XFA_ATTRIBUTE_Desc,
    XFA_ATTRIBUTE_Lock,
    XFA_ATTRIBUTE_Desc,
    XFA_ATTRIBUTE_Lock,
    XFA_ATTRIBUTE_H,
    XFA_ATTRIBUTE_W,
    XFA_ATTRIBUTE_X,
    XFA_ATTRIBUTE_Y,
    XFA_ATTRIBUTE_Id,
    XFA_ATTRIBUTE_HAlign,
    XFA_ATTRIBUTE_Name,
    XFA_ATTRIBUTE_Use,
    XFA_ATTRIBUTE_Access,
    XFA_ATTRIBUTE_Rotate,
    XFA_ATTRIBUTE_Presence,
    XFA_ATTRIBUTE_VAlign,
    XFA_ATTRIBUTE_MaxH,
    XFA_ATTRIBUTE_MaxW,
    XFA_ATTRIBUTE_MinH,
    XFA_ATTRIBUTE_MinW,
    XFA_ATTRIBUTE_Relevant,
    XFA_ATTRIBUTE_ColSpan,
    XFA_ATTRIBUTE_Usehref,
    XFA_ATTRIBUTE_Locale,
    XFA_ATTRIBUTE_AnchorType,
    XFA_ATTRIBUTE_AccessKey,
    XFA_ATTRIBUTE_Name,
    XFA_ATTRIBUTE_Desc,
    XFA_ATTRIBUTE_Lock,
    XFA_ATTRIBUTE_Desc,
    XFA_ATTRIBUTE_Lock,
    XFA_ATTRIBUTE_Desc,
    XFA_ATTRIBUTE_Lock,
    XFA_ATTRIBUTE_Desc,
    XFA_ATTRIBUTE_Lock,
    XFA_ATTRIBUTE_H,
    XFA_ATTRIBUTE_W,
    XFA_ATTRIBUTE_X,
    XFA_ATTRIBUTE_Y,
    XFA_ATTRIBUTE_Id,
    XFA_ATTRIBUTE_Name,
    XFA_ATTRIBUTE_Use,
    XFA_ATTRIBUTE_Relevant,
    XFA_ATTRIBUTE_Usehref,
    XFA_ATTRIBUTE_Id,
    XFA_ATTRIBUTE_Name,
    XFA_ATTRIBUTE_Use,
    XFA_ATTRIBUTE_Usehref,
    XFA_ATTRIBUTE_Id,
    XFA_ATTRIBUTE_Use,
    XFA_ATTRIBUTE_Usehref,
    XFA_ATTRIBUTE_Desc,
    XFA_ATTRIBUTE_Lock,
    XFA_ATTRIBUTE_Id,
    XFA_ATTRIBUTE_Cap,
    XFA_ATTRIBUTE_Use,
    XFA_ATTRIBUTE_Stroke,
    XFA_ATTRIBUTE_Presence,
    XFA_ATTRIBUTE_Thickness,
    XFA_ATTRIBUTE_Usehref,
    XFA_ATTRIBUTE_Id,
    XFA_ATTRIBUTE_Use,
    XFA_ATTRIBUTE_Rate,
    XFA_ATTRIBUTE_Usehref,
    XFA_ATTRIBUTE_Desc,
    XFA_ATTRIBUTE_Lock,
    XFA_ATTRIBUTE_SourceBelow,
    XFA_ATTRIBUTE_OutputBelow,
    XFA_ATTRIBUTE_SourceAbove,
    XFA_ATTRIBUTE_Lock,
    XFA_ATTRIBUTE_H,
    XFA_ATTRIBUTE_W,
    XFA_ATTRIBUTE_X,
    XFA_ATTRIBUTE_Y,
    XFA_ATTRIBUTE_Id,
    XFA_ATTRIBUTE_HAlign,
    XFA_ATTRIBUTE_Name,
    XFA_ATTRIBUTE_Use,
    XFA_ATTRIBUTE_Access,
    XFA_ATTRIBUTE_Presence,
    XFA_ATTRIBUTE_VAlign,
    XFA_ATTRIBUTE_MaxH,
    XFA_ATTRIBUTE_MaxW,
    XFA_ATTRIBUTE_MinH,
    XFA_ATTRIBUTE_MinW,
    XFA_ATTRIBUTE_Layout,
    XFA_ATTRIBUTE_Relevant,
    XFA_ATTRIBUTE_ColSpan,
    XFA_ATTRIBUTE_Usehref,
    XFA_ATTRIBUTE_AnchorType,
    XFA_ATTRIBUTE_AccessKey,
    XFA_ATTRIBUTE_Id,
    XFA_ATTRIBUTE_Rid,
    XFA_ATTRIBUTE_Use,
    XFA_ATTRIBUTE_Usehref,
    XFA_ATTRIBUTE_Desc,
    XFA_ATTRIBUTE_Scope,
    XFA_ATTRIBUTE_Lock,
    XFA_ATTRIBUTE_Id,
    XFA_ATTRIBUTE_Name,
    XFA_ATTRIBUTE_Use,
    XFA_ATTRIBUTE_Usehref,
    XFA_ATTRIBUTE_Id,
    XFA_ATTRIBUTE_Use,
    XFA_ATTRIBUTE_Connection,
    XFA_ATTRIBUTE_RunAt,
    XFA_ATTRIBUTE_ExecuteType,
    XFA_ATTRIBUTE_Usehref,
    XFA_ATTRIBUTE_Desc,
    XFA_ATTRIBUTE_Lock,
    XFA_ATTRIBUTE_Id,
    XFA_ATTRIBUTE_Use,
    XFA_ATTRIBUTE_Usehref,
    XFA_ATTRIBUTE_Picker,
    XFA_ATTRIBUTE_HScrollPolicy,
    XFA_ATTRIBUTE_Desc,
    XFA_ATTRIBUTE_Lock,
    XFA_ATTRIBUTE_Id,
    XFA_ATTRIBUTE_Name,
    XFA_ATTRIBUTE_Use,
    XFA_ATTRIBUTE_ContentType,
    XFA_ATTRIBUTE_TransferEncoding,
    XFA_ATTRIBUTE_Usehref,
    XFA_ATTRIBUTE_Aspect,
    XFA_ATTRIBUTE_Href,
    XFA_ATTRIBUTE_Value,
    XFA_ATTRIBUTE_Desc,
    XFA_ATTRIBUTE_Lock,
    XFA_ATTRIBUTE_Desc,
    XFA_ATTRIBUTE_Lock,
    XFA_ATTRIBUTE_Id,
    XFA_ATTRIBUTE_Use,
    XFA_ATTRIBUTE_Type,
    XFA_ATTRIBUTE_Server,
    XFA_ATTRIBUTE_Usehref,
    XFA_ATTRIBUTE_Desc,
    XFA_ATTRIBUTE_Lock,
    XFA_ATTRIBUTE_Desc,
    XFA_ATTRIBUTE_Lock,
    XFA_ATTRIBUTE_Id,
    XFA_ATTRIBUTE_Name,
    XFA_ATTRIBUTE_Use,
    XFA_ATTRIBUTE_FracDigits,
    XFA_ATTRIBUTE_Usehref,
    XFA_ATTRIBUTE_LeadDigits,
    XFA_ATTRIBUTE_H,
    XFA_ATTRIBUTE_W,
    XFA_ATTRIBUTE_X,
    XFA_ATTRIBUTE_Y,
    XFA_ATTRIBUTE_Id,
    XFA_ATTRIBUTE_HAlign,
    XFA_ATTRIBUTE_Name,
    XFA_ATTRIBUTE_Use,
    XFA_ATTRIBUTE_AllowMacro,
    XFA_ATTRIBUTE_ColumnWidths,
    XFA_ATTRIBUTE_Access,
    XFA_ATTRIBUTE_Presence,
    XFA_ATTRIBUTE_VAlign,
    XFA_ATTRIBUTE_MaxH,
    XFA_ATTRIBUTE_MaxW,
    XFA_ATTRIBUTE_MinH,
    XFA_ATTRIBUTE_MinW,
    XFA_ATTRIBUTE_Layout,
    XFA_ATTRIBUTE_Relevant,
    XFA_ATTRIBUTE_MergeMode,
    XFA_ATTRIBUTE_ColSpan,
    XFA_ATTRIBUTE_Usehref,
    XFA_ATTRIBUTE_Locale,
    XFA_ATTRIBUTE_AnchorType,
    XFA_ATTRIBUTE_RestoreState,
    XFA_ATTRIBUTE_Scope,
    XFA_ATTRIBUTE_Id,
    XFA_ATTRIBUTE_Name,
    XFA_ATTRIBUTE_Use,
    XFA_ATTRIBUTE_Usehref,
    XFA_ATTRIBUTE_Desc,
    XFA_ATTRIBUTE_Lock,
    XFA_ATTRIBUTE_Desc,
    XFA_ATTRIBUTE_Lock,
    XFA_ATTRIBUTE_Id,
    XFA_ATTRIBUTE_Use,
    XFA_ATTRIBUTE_Type,
    XFA_ATTRIBUTE_Usehref,
    XFA_ATTRIBUTE_Desc,
    XFA_ATTRIBUTE_Lock,
    XFA_ATTRIBUTE_Desc,
    XFA_ATTRIBUTE_Lock,
    XFA_ATTRIBUTE_Desc,
    XFA_ATTRIBUTE_Lock,
    XFA_ATTRIBUTE_Desc,
    XFA_ATTRIBUTE_Lock,
    XFA_ATTRIBUTE_Id,
    XFA_ATTRIBUTE_Name,
    XFA_ATTRIBUTE_Use,
    XFA_ATTRIBUTE_Timeout,
    XFA_ATTRIBUTE_Usehref,
    XFA_ATTRIBUTE_Desc,
    XFA_ATTRIBUTE_Lock,
    XFA_ATTRIBUTE_Mode,
    XFA_ATTRIBUTE_Desc,
    XFA_ATTRIBUTE_Lock,
    XFA_ATTRIBUTE_Desc,
    XFA_ATTRIBUTE_Lock,
    XFA_ATTRIBUTE_Id,
    XFA_ATTRIBUTE_Name,
    XFA_ATTRIBUTE_Use,
    XFA_ATTRIBUTE_Usehref,
    XFA_ATTRIBUTE_Id,
    XFA_ATTRIBUTE_Use,
    XFA_ATTRIBUTE_Usehref,
    XFA_ATTRIBUTE_Desc,
    XFA_ATTRIBUTE_Lock,
    XFA_ATTRIBUTE_Desc,
    XFA_ATTRIBUTE_Lock,
    XFA_ATTRIBUTE_Desc,
    XFA_ATTRIBUTE_Lock,
    XFA_ATTRIBUTE_Id,
    XFA_ATTRIBUTE_Use,
    XFA_ATTRIBUTE_Role,
    XFA_ATTRIBUTE_Usehref,
    XFA_ATTRIBUTE_Id,
    XFA_ATTRIBUTE_Use,
    XFA_ATTRIBUTE_Usehref,
    XFA_ATTRIBUTE_Desc,
    XFA_ATTRIBUTE_Lock,
    XFA_ATTRIBUTE_Id,
    XFA_ATTRIBUTE_Use,
    XFA_ATTRIBUTE_Usehref,
    XFA_ATTRIBUTE_Desc,
    XFA_ATTRIBUTE_Lock,
    XFA_ATTRIBUTE_Name,
    XFA_ATTRIBUTE_Desc,
    XFA_ATTRIBUTE_Lock,
    XFA_ATTRIBUTE_Desc,
    XFA_ATTRIBUTE_Lock,
    XFA_ATTRIBUTE_Id,
    XFA_ATTRIBUTE_Use,
    XFA_ATTRIBUTE_Stroke,
    XFA_ATTRIBUTE_Presence,
    XFA_ATTRIBUTE_Inverted,
    XFA_ATTRIBUTE_Thickness,
    XFA_ATTRIBUTE_Usehref,
    XFA_ATTRIBUTE_Join,
    XFA_ATTRIBUTE_Radius,
    XFA_ATTRIBUTE_Desc,
    XFA_ATTRIBUTE_Lock,
    XFA_ATTRIBUTE_Id,
    XFA_ATTRIBUTE_Use,
    XFA_ATTRIBUTE_CSpace,
    XFA_ATTRIBUTE_Usehref,
    XFA_ATTRIBUTE_Value,
    XFA_ATTRIBUTE_Id,
    XFA_ATTRIBUTE_Next,
    XFA_ATTRIBUTE_Use,
    XFA_ATTRIBUTE_Previous,
    XFA_ATTRIBUTE_Usehref,
    XFA_ATTRIBUTE_Intact,
    XFA_ATTRIBUTE_Id,
    XFA_ATTRIBUTE_Name,
    XFA_ATTRIBUTE_Use,
    XFA_ATTRIBUTE_CommandType,
    XFA_ATTRIBUTE_Usehref,
    XFA_ATTRIBUTE_Id,
    XFA_ATTRIBUTE_Name,
    XFA_ATTRIBUTE_Use,
    XFA_ATTRIBUTE_Usehref,
    XFA_ATTRIBUTE_Id,
    XFA_ATTRIBUTE_Use,
    XFA_ATTRIBUTE_Usehref,
    XFA_ATTRIBUTE_Data,
    XFA_ATTRIBUTE_Id,
    XFA_ATTRIBUTE_Use,
    XFA_ATTRIBUTE_ScriptTest,
    XFA_ATTRIBUTE_NullTest,
    XFA_ATTRIBUTE_Usehref,
    XFA_ATTRIBUTE_Desc,
    XFA_ATTRIBUTE_FormatTest,
    XFA_ATTRIBUTE_Lock,
    XFA_ATTRIBUTE_Id,
    XFA_ATTRIBUTE_Use,
    XFA_ATTRIBUTE_Type,
    XFA_ATTRIBUTE_Usehref,
    XFA_ATTRIBUTE_Id,
    XFA_ATTRIBUTE_Name,
    XFA_ATTRIBUTE_Use,
    XFA_ATTRIBUTE_Relation,
    XFA_ATTRIBUTE_Relevant,
    XFA_ATTRIBUTE_DuplexImposition,
    XFA_ATTRIBUTE_Usehref,
    XFA_ATTRIBUTE_Id,
    XFA_ATTRIBUTE_Name,
    XFA_ATTRIBUTE_Use,
    XFA_ATTRIBUTE_Usehref,
    XFA_ATTRIBUTE_Id,
    XFA_ATTRIBUTE_Name,
    XFA_ATTRIBUTE_Use,
    XFA_ATTRIBUTE_Usehref,
    XFA_ATTRIBUTE_To,
    XFA_ATTRIBUTE_Force,
    XFA_ATTRIBUTE_Desc,
    XFA_ATTRIBUTE_From,
    XFA_ATTRIBUTE_Lock,
    XFA_ATTRIBUTE_Desc,
    XFA_ATTRIBUTE_Lock,
    XFA_ATTRIBUTE_Desc,
    XFA_ATTRIBUTE_Lock,
    XFA_ATTRIBUTE_Id,
    XFA_ATTRIBUTE_Name,
    XFA_ATTRIBUTE_Use,
    XFA_ATTRIBUTE_Usehref,
    XFA_ATTRIBUTE_Id,
    XFA_ATTRIBUTE_Name,
    XFA_ATTRIBUTE_Use,
    XFA_ATTRIBUTE_Usehref,
    XFA_ATTRIBUTE_Desc,
    XFA_ATTRIBUTE_Lock,
    XFA_ATTRIBUTE_Desc,
    XFA_ATTRIBUTE_Lock,
    XFA_ATTRIBUTE_Value,
    XFA_ATTRIBUTE_Name,
    XFA_ATTRIBUTE_DataDescription,
    XFA_ATTRIBUTE_Id,
    XFA_ATTRIBUTE_Ref,
    XFA_ATTRIBUTE_Use,
    XFA_ATTRIBUTE_Operation,
    XFA_ATTRIBUTE_Usehref,
    XFA_ATTRIBUTE_Id,
    XFA_ATTRIBUTE_Use,
    XFA_ATTRIBUTE_Type,
    XFA_ATTRIBUTE_Usehref,
    XFA_ATTRIBUTE_Desc,
    XFA_ATTRIBUTE_BaseProfile,
    XFA_ATTRIBUTE_Lock,
    XFA_ATTRIBUTE_Desc,
    XFA_ATTRIBUTE_Lock,
    XFA_ATTRIBUTE_Desc,
    XFA_ATTRIBUTE_Lock,
    XFA_ATTRIBUTE_Id,
    XFA_ATTRIBUTE_Use,
    XFA_ATTRIBUTE_Type,
    XFA_ATTRIBUTE_Usehref,
    XFA_ATTRIBUTE_Id,
    XFA_ATTRIBUTE_Name,
    XFA_ATTRIBUTE_Use,
    XFA_ATTRIBUTE_ContentType,
    XFA_ATTRIBUTE_RunAt,
    XFA_ATTRIBUTE_Binding,
    XFA_ATTRIBUTE_Usehref,
    XFA_ATTRIBUTE_Desc,
    XFA_ATTRIBUTE_Lock,
    XFA_ATTRIBUTE_Desc,
    XFA_ATTRIBUTE_Lock,
    XFA_ATTRIBUTE_Desc,
    XFA_ATTRIBUTE_Lock,
    XFA_ATTRIBUTE_Id,
    XFA_ATTRIBUTE_Use,
    XFA_ATTRIBUTE_PasswordChar,
    XFA_ATTRIBUTE_Usehref,
    XFA_ATTRIBUTE_HScrollPolicy,
    XFA_ATTRIBUTE_Id,
    XFA_ATTRIBUTE_Use,
    XFA_ATTRIBUTE_Usehref,
    XFA_ATTRIBUTE_HScrollPolicy,
    XFA_ATTRIBUTE_Id,
    XFA_ATTRIBUTE_Use,
    XFA_ATTRIBUTE_Usehref,
    XFA_ATTRIBUTE_Desc,
    XFA_ATTRIBUTE_Lock,
    XFA_ATTRIBUTE_Id,
    XFA_ATTRIBUTE_Name,
    XFA_ATTRIBUTE_Use,
    XFA_ATTRIBUTE_PagePosition,
    XFA_ATTRIBUTE_OddOrEven,
    XFA_ATTRIBUTE_Relevant,
    XFA_ATTRIBUTE_InitialNumber,
    XFA_ATTRIBUTE_Usehref,
    XFA_ATTRIBUTE_Numbered,
    XFA_ATTRIBUTE_BlankOrNotBlank,
    XFA_ATTRIBUTE_Desc,
    XFA_ATTRIBUTE_Lock,
    XFA_ATTRIBUTE_Id,
    XFA_ATTRIBUTE_Use,
    XFA_ATTRIBUTE_Type,
    XFA_ATTRIBUTE_Usehref,
    XFA_ATTRIBUTE_Id,
    XFA_ATTRIBUTE_Use,
    XFA_ATTRIBUTE_Type,
    XFA_ATTRIBUTE_Usehref,
    XFA_ATTRIBUTE_Desc,
    XFA_ATTRIBUTE_Lock,
    XFA_ATTRIBUTE_Id,
    XFA_ATTRIBUTE_Use,
    XFA_ATTRIBUTE_Reserve,
    XFA_ATTRIBUTE_Presence,
    XFA_ATTRIBUTE_Usehref,
    XFA_ATTRIBUTE_Placement,
    XFA_ATTRIBUTE_Desc,
    XFA_ATTRIBUTE_Lock,
    XFA_ATTRIBUTE_Desc,
    XFA_ATTRIBUTE_Lock,
    XFA_ATTRIBUTE_Id,
    XFA_ATTRIBUTE_Name,
    XFA_ATTRIBUTE_Rid,
    XFA_ATTRIBUTE_Use,
    XFA_ATTRIBUTE_ContentType,
    XFA_ATTRIBUTE_TransferEncoding,
    XFA_ATTRIBUTE_Usehref,
    XFA_ATTRIBUTE_MaxLength,
    XFA_ATTRIBUTE_Href,
    XFA_ATTRIBUTE_Abbr,
    XFA_ATTRIBUTE_Id,
    XFA_ATTRIBUTE_Name,
    XFA_ATTRIBUTE_Use,
    XFA_ATTRIBUTE_Usehref,
    XFA_ATTRIBUTE_Desc,
    XFA_ATTRIBUTE_WritingScript,
    XFA_ATTRIBUTE_Lock,
    XFA_ATTRIBUTE_Id,
    XFA_ATTRIBUTE_Name,
    XFA_ATTRIBUTE_Use,
    XFA_ATTRIBUTE_Action,
    XFA_ATTRIBUTE_Usehref,
    XFA_ATTRIBUTE_Id,
    XFA_ATTRIBUTE_Use,
    XFA_ATTRIBUTE_Trailer,
    XFA_ATTRIBUTE_Usehref,
    XFA_ATTRIBUTE_Target,
    XFA_ATTRIBUTE_Leader,
    XFA_ATTRIBUTE_Id,
    XFA_ATTRIBUTE_Use,
    XFA_ATTRIBUTE_Type,
    XFA_ATTRIBUTE_Usehref,
    XFA_ATTRIBUTE_Name,
    XFA_ATTRIBUTE_Id,
    XFA_ATTRIBUTE_Name,
    XFA_ATTRIBUTE_Use,
    XFA_ATTRIBUTE_Usehref,
    XFA_ATTRIBUTE_Id,
    XFA_ATTRIBUTE_Use,
    XFA_ATTRIBUTE_Usehref,
    XFA_ATTRIBUTE_Name,
    XFA_ATTRIBUTE_To,
    XFA_ATTRIBUTE_UnicodeRange,
    XFA_ATTRIBUTE_Desc,
    XFA_ATTRIBUTE_From,
    XFA_ATTRIBUTE_Lock,
    XFA_ATTRIBUTE_Id,
    XFA_ATTRIBUTE_TrayOut,
    XFA_ATTRIBUTE_Use,
    XFA_ATTRIBUTE_Orientation,
    XFA_ATTRIBUTE_ImagingBBox,
    XFA_ATTRIBUTE_Short,
    XFA_ATTRIBUTE_TrayIn,
    XFA_ATTRIBUTE_Usehref,
    XFA_ATTRIBUTE_Stock,
    XFA_ATTRIBUTE_Long,
    XFA_ATTRIBUTE_Id,
    XFA_ATTRIBUTE_VScrollPolicy,
    XFA_ATTRIBUTE_Use,
    XFA_ATTRIBUTE_AllowRichText,
    XFA_ATTRIBUTE_MultiLine,
    XFA_ATTRIBUTE_Usehref,
    XFA_ATTRIBUTE_HScrollPolicy,
    XFA_ATTRIBUTE_Desc,
    XFA_ATTRIBUTE_MaxEntries,
    XFA_ATTRIBUTE_Lock,
    XFA_ATTRIBUTE_Desc,
    XFA_ATTRIBUTE_Lock,
    XFA_ATTRIBUTE_Name,
    XFA_ATTRIBUTE_ContentType,
    XFA_ATTRIBUTE_Contains,
    XFA_ATTRIBUTE_Value,
    XFA_ATTRIBUTE_IsNull,
    XFA_ATTRIBUTE_Desc,
    XFA_ATTRIBUTE_Lock,
    XFA_ATTRIBUTE_Desc,
    XFA_ATTRIBUTE_Lock,
    XFA_ATTRIBUTE_Name,
    XFA_ATTRIBUTE_DataDescription,
    XFA_ATTRIBUTE_Desc,
    XFA_ATTRIBUTE_Lock,
    XFA_ATTRIBUTE_Id,
    XFA_ATTRIBUTE_Ref,
    XFA_ATTRIBUTE_Use,
    XFA_ATTRIBUTE_Operation,
    XFA_ATTRIBUTE_Usehref,
    XFA_ATTRIBUTE_Target,
    XFA_ATTRIBUTE_Desc,
    XFA_ATTRIBUTE_Lock,
    XFA_ATTRIBUTE_Name,
    XFA_ATTRIBUTE_Desc,
    XFA_ATTRIBUTE_Lock,
    XFA_ATTRIBUTE_Desc,
    XFA_ATTRIBUTE_Lock,
    XFA_ATTRIBUTE_Id,
    XFA_ATTRIBUTE_Name,
    XFA_ATTRIBUTE_Ref,
    XFA_ATTRIBUTE_Use,
    XFA_ATTRIBUTE_ContentType,
    XFA_ATTRIBUTE_TransferEncoding,
    XFA_ATTRIBUTE_Usehref,
    XFA_ATTRIBUTE_Match,
    XFA_ATTRIBUTE_Desc,
    XFA_ATTRIBUTE_Lock,
    XFA_ATTRIBUTE_Id,
    XFA_ATTRIBUTE_Name,
    XFA_ATTRIBUTE_Use,
    XFA_ATTRIBUTE_Usehref,
    XFA_ATTRIBUTE_Id,
    XFA_ATTRIBUTE_Use,
    XFA_ATTRIBUTE_Usehref,
    XFA_ATTRIBUTE_Hand,
    XFA_ATTRIBUTE_Id,
    XFA_ATTRIBUTE_Name,
    XFA_ATTRIBUTE_Use,
    XFA_ATTRIBUTE_Usehref,
    XFA_ATTRIBUTE_Desc,
    XFA_ATTRIBUTE_Lock,
    XFA_ATTRIBUTE_Desc,
    XFA_ATTRIBUTE_Lock,
    XFA_ATTRIBUTE_Desc,
    XFA_ATTRIBUTE_Lock,
    XFA_ATTRIBUTE_Name,
    XFA_ATTRIBUTE_Desc,
    XFA_ATTRIBUTE_Lock,
    XFA_ATTRIBUTE_Desc,
    XFA_ATTRIBUTE_Lock,
    XFA_ATTRIBUTE_Desc,
    XFA_ATTRIBUTE_Lock,
    XFA_ATTRIBUTE_Id,
    XFA_ATTRIBUTE_Name,
    XFA_ATTRIBUTE_Use,
    XFA_ATTRIBUTE_Usehref,
    XFA_ATTRIBUTE_Id,
    XFA_ATTRIBUTE_Use,
    XFA_ATTRIBUTE_Usehref,
    XFA_ATTRIBUTE_Id,
    XFA_ATTRIBUTE_Use,
    XFA_ATTRIBUTE_Usehref,
    XFA_ATTRIBUTE_Desc,
    XFA_ATTRIBUTE_Lock,
    XFA_ATTRIBUTE_H,
    XFA_ATTRIBUTE_W,
    XFA_ATTRIBUTE_X,
    XFA_ATTRIBUTE_Y,
    XFA_ATTRIBUTE_Id,
    XFA_ATTRIBUTE_HAlign,
    XFA_ATTRIBUTE_Name,
    XFA_ATTRIBUTE_Use,
    XFA_ATTRIBUTE_Rotate,
    XFA_ATTRIBUTE_Presence,
    XFA_ATTRIBUTE_VAlign,
    XFA_ATTRIBUTE_MaxH,
    XFA_ATTRIBUTE_MaxW,
    XFA_ATTRIBUTE_MinH,
    XFA_ATTRIBUTE_MinW,
    XFA_ATTRIBUTE_Relevant,
    XFA_ATTRIBUTE_ColSpan,
    XFA_ATTRIBUTE_Usehref,
    XFA_ATTRIBUTE_Locale,
    XFA_ATTRIBUTE_AnchorType,
    XFA_ATTRIBUTE_Desc,
    XFA_ATTRIBUTE_Lock,
    XFA_ATTRIBUTE_Desc,
    XFA_ATTRIBUTE_Lock,
    XFA_ATTRIBUTE_Id,
    XFA_ATTRIBUTE_Rid,
    XFA_ATTRIBUTE_Use,
    XFA_ATTRIBUTE_Priority,
    XFA_ATTRIBUTE_Usehref,
    XFA_ATTRIBUTE_Disable,
    XFA_ATTRIBUTE_Name,
    XFA_ATTRIBUTE_Desc,
    XFA_ATTRIBUTE_Lock,
    XFA_ATTRIBUTE_Value,
    XFA_ATTRIBUTE_Desc,
    XFA_ATTRIBUTE_Lock,
    XFA_ATTRIBUTE_Id,
    XFA_ATTRIBUTE_Use,
    XFA_ATTRIBUTE_Type,
    XFA_ATTRIBUTE_Usehref,
    XFA_ATTRIBUTE_Use,
    XFA_ATTRIBUTE_Usehref,
    XFA_ATTRIBUTE_Desc,
    XFA_ATTRIBUTE_Lock,
    XFA_ATTRIBUTE_Id,
    XFA_ATTRIBUTE_Use,
    XFA_ATTRIBUTE_Type,
    XFA_ATTRIBUTE_Usehref,
    XFA_ATTRIBUTE_Id,
    XFA_ATTRIBUTE_Use,
    XFA_ATTRIBUTE_Presence,
    XFA_ATTRIBUTE_Usehref,
    XFA_ATTRIBUTE_Id,
    XFA_ATTRIBUTE_LineThrough,
    XFA_ATTRIBUTE_Typeface,
    XFA_ATTRIBUTE_FontHorizontalScale,
    XFA_ATTRIBUTE_Use,
    XFA_ATTRIBUTE_KerningMode,
    XFA_ATTRIBUTE_Underline,
    XFA_ATTRIBUTE_BaselineShift,
    XFA_ATTRIBUTE_OverlinePeriod,
    XFA_ATTRIBUTE_LetterSpacing,
    XFA_ATTRIBUTE_LineThroughPeriod,
    XFA_ATTRIBUTE_FontVerticalScale,
    XFA_ATTRIBUTE_PsName,
    XFA_ATTRIBUTE_Size,
    XFA_ATTRIBUTE_Posture,
    XFA_ATTRIBUTE_Usehref,
    XFA_ATTRIBUTE_Weight,
    XFA_ATTRIBUTE_UnderlinePeriod,
    XFA_ATTRIBUTE_Overline,
    XFA_ATTRIBUTE_GenericFamily,
    XFA_ATTRIBUTE_Checksum,
    XFA_ATTRIBUTE_Desc,
    XFA_ATTRIBUTE_Lock,
    XFA_ATTRIBUTE_Id,
    XFA_ATTRIBUTE_Name,
    XFA_ATTRIBUTE_Use,
    XFA_ATTRIBUTE_Usehref,
    XFA_ATTRIBUTE_Id,
    XFA_ATTRIBUTE_Name,
    XFA_ATTRIBUTE_Use,
    XFA_ATTRIBUTE_Usehref,
    XFA_ATTRIBUTE_Desc,
    XFA_ATTRIBUTE_Lock,
    XFA_ATTRIBUTE_Desc,
    XFA_ATTRIBUTE_Lock,
    XFA_ATTRIBUTE_Id,
    XFA_ATTRIBUTE_Name,
    XFA_ATTRIBUTE_Use,
    XFA_ATTRIBUTE_Usehref,
    XFA_ATTRIBUTE_Desc,
    XFA_ATTRIBUTE_Lock,
    XFA_ATTRIBUTE_Desc,
    XFA_ATTRIBUTE_Lock,
    XFA_ATTRIBUTE_Id,
    XFA_ATTRIBUTE_Use,
    XFA_ATTRIBUTE_Relevant,
    XFA_ATTRIBUTE_Usehref,
    XFA_ATTRIBUTE_Override,
    XFA_ATTRIBUTE_Id,
    XFA_ATTRIBUTE_Use,
    XFA_ATTRIBUTE_Trailer,
    XFA_ATTRIBUTE_Usehref,
    XFA_ATTRIBUTE_Leader,
    XFA_ATTRIBUTE_Id,
    XFA_ATTRIBUTE_Name,
    XFA_ATTRIBUTE_Use,
    XFA_ATTRIBUTE_CodeType,
    XFA_ATTRIBUTE_Archive,
    XFA_ATTRIBUTE_Usehref,
    XFA_ATTRIBUTE_CodeBase,
    XFA_ATTRIBUTE_ClassId,
    XFA_ATTRIBUTE_Desc,
    XFA_ATTRIBUTE_Lock,
    XFA_ATTRIBUTE_Desc,
    XFA_ATTRIBUTE_Lock,
    XFA_ATTRIBUTE_Ref,
    XFA_ATTRIBUTE_Connection,
    XFA_ATTRIBUTE_LabelRef,
    XFA_ATTRIBUTE_ValueRef,
    XFA_ATTRIBUTE_Id,
    XFA_ATTRIBUTE_Use,
    XFA_ATTRIBUTE_Usehref,
    XFA_ATTRIBUTE_Override,
    XFA_ATTRIBUTE_Desc,
    XFA_ATTRIBUTE_Lock,
    XFA_ATTRIBUTE_Id,
    XFA_ATTRIBUTE_Name,
    XFA_ATTRIBUTE_Use,
    XFA_ATTRIBUTE_Usehref,
    XFA_ATTRIBUTE_Value,
    XFA_ATTRIBUTE_Desc,
    XFA_ATTRIBUTE_Lock,
    XFA_ATTRIBUTE_Id,
    XFA_ATTRIBUTE_Name,
    XFA_ATTRIBUTE_Ref,
    XFA_ATTRIBUTE_Use,
    XFA_ATTRIBUTE_Timeout,
    XFA_ATTRIBUTE_Connection,
    XFA_ATTRIBUTE_Usage,
    XFA_ATTRIBUTE_Usehref,
    XFA_ATTRIBUTE_DelayedOpen,
    XFA_ATTRIBUTE_Desc,
    XFA_ATTRIBUTE_Lock,
    XFA_ATTRIBUTE_Id,
    XFA_ATTRIBUTE_Use,
    XFA_ATTRIBUTE_Format,
    XFA_ATTRIBUTE_EmbedPDF,
    XFA_ATTRIBUTE_Usehref,
    XFA_ATTRIBUTE_Target,
    XFA_ATTRIBUTE_TextEncoding,
    XFA_ATTRIBUTE_XdpContent,
    XFA_ATTRIBUTE_Desc,
    XFA_ATTRIBUTE_Lock,
    XFA_ATTRIBUTE_Desc,
    XFA_ATTRIBUTE_Lock,
    XFA_ATTRIBUTE_Id,
    XFA_ATTRIBUTE_Name,
    XFA_ATTRIBUTE_Use,
    XFA_ATTRIBUTE_Usehref,
    XFA_ATTRIBUTE_Desc,
    XFA_ATTRIBUTE_Lock,
    XFA_ATTRIBUTE_Desc,
    XFA_ATTRIBUTE_Lock,
    XFA_ATTRIBUTE_Name,
    XFA_ATTRIBUTE_Desc,
    XFA_ATTRIBUTE_Lock,
    XFA_ATTRIBUTE_Desc,
    XFA_ATTRIBUTE_Lock,
    XFA_ATTRIBUTE_Id,
    XFA_ATTRIBUTE_Name,
    XFA_ATTRIBUTE_Use,
    XFA_ATTRIBUTE_Delimiter,
    XFA_ATTRIBUTE_Usehref,
    XFA_ATTRIBUTE_Desc,
    XFA_ATTRIBUTE_Lock,
    XFA_ATTRIBUTE_Desc,
    XFA_ATTRIBUTE_Lock,
    XFA_ATTRIBUTE_Id,
    XFA_ATTRIBUTE_Use,
    XFA_ATTRIBUTE_Type,
    XFA_ATTRIBUTE_Usehref,
    XFA_ATTRIBUTE_Id,
    XFA_ATTRIBUTE_Use,
    XFA_ATTRIBUTE_Usehref,
    XFA_ATTRIBUTE_Id,
    XFA_ATTRIBUTE_Name,
    XFA_ATTRIBUTE_Use,
    XFA_ATTRIBUTE_Usehref,
    XFA_ATTRIBUTE_Desc,
    XFA_ATTRIBUTE_Lock,
    XFA_ATTRIBUTE_Desc,
    XFA_ATTRIBUTE_Lock,
    XFA_ATTRIBUTE_Ref,
    XFA_ATTRIBUTE_Desc,
    XFA_ATTRIBUTE_Lock,
    XFA_ATTRIBUTE_Id,
    XFA_ATTRIBUTE_Use,
    XFA_ATTRIBUTE_Type,
    XFA_ATTRIBUTE_Usehref,
    XFA_ATTRIBUTE_Id,
    XFA_ATTRIBUTE_Use,
    XFA_ATTRIBUTE_StartNew,
    XFA_ATTRIBUTE_Trailer,
    XFA_ATTRIBUTE_TargetType,
    XFA_ATTRIBUTE_Usehref,
    XFA_ATTRIBUTE_Target,
    XFA_ATTRIBUTE_Leader,
    XFA_ATTRIBUTE_Id,
    XFA_ATTRIBUTE_Use,
    XFA_ATTRIBUTE_Slope,
    XFA_ATTRIBUTE_Usehref,
    XFA_ATTRIBUTE_Hand,
    XFA_ATTRIBUTE_Id,
    XFA_ATTRIBUTE_Name,
    XFA_ATTRIBUTE_Use,
    XFA_ATTRIBUTE_Usehref,
    XFA_ATTRIBUTE_Id,
    XFA_ATTRIBUTE_Max,
    XFA_ATTRIBUTE_Min,
    XFA_ATTRIBUTE_Use,
    XFA_ATTRIBUTE_Initial,
    XFA_ATTRIBUTE_Usehref,
    XFA_ATTRIBUTE_Desc,
    XFA_ATTRIBUTE_Lock,
    XFA_ATTRIBUTE_Abbr,
    XFA_ATTRIBUTE_Desc,
    XFA_ATTRIBUTE_Lock,
    XFA_ATTRIBUTE_Desc,
    XFA_ATTRIBUTE_Lock,
    XFA_ATTRIBUTE_Desc,
    XFA_ATTRIBUTE_Lock,
    XFA_ATTRIBUTE_Name,
    XFA_ATTRIBUTE_Desc,
    XFA_ATTRIBUTE_Lock,
    XFA_ATTRIBUTE_Id,
    XFA_ATTRIBUTE_Name,
    XFA_ATTRIBUTE_Ref,
    XFA_ATTRIBUTE_Use,
    XFA_ATTRIBUTE_Presence,
    XFA_ATTRIBUTE_Save,
    XFA_ATTRIBUTE_Usehref,
};
