// Copyright 2016 PDFium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Original code copyright 2014 Foxit Software Inc. http://www.foxitsoftware.com

#ifndef CORE_FPDFAPI_FPDF_PARSER_CPDF_HINT_TABLES_H_
#define CORE_FPDFAPI_FPDF_PARSER_CPDF_HINT_TABLES_H_

#include <vector>

#include "core/fpdfapi/fpdf_parser/include/cpdf_data_avail.h"
#include "core/fxcrt/include/fx_basic.h"
#include "core/fxcrt/include/fx_stream.h"

class CFX_BitStream;
class CPDF_Dictionary;
class CPDF_Stream;

class CPDF_HintTables {
 public:
  CPDF_HintTables(CPDF_DataAvail* pDataAvail, CPDF_Dictionary* pLinearized);
  virtual ~CPDF_HintTables();

  bool GetPagePos(int index,
                  FX_FILESIZE* szPageStartPos,
                  FX_FILESIZE* szPageLength,
                  uint32_t* dwObjNum);

  CPDF_DataAvail::DocAvailStatus CheckPage(
      int index,
      CPDF_DataAvail::DownloadHints* pHints);

  bool LoadHintStream(CPDF_Stream* pHintStream);

 protected:
  bool ReadPageHintTable(CFX_BitStream* hStream);
  bool ReadSharedObjHintTable(CFX_BitStream* hStream, uint32_t offset);
  uint32_t GetItemLength(int index, const std::vector<FX_FILESIZE>& szArray);

 private:
  // Tests can override.
  virtual int GetEndOfFirstPageOffset() const;
  virtual int GetNumberOfPages() const;
  virtual int GetFirstPageObjectNumber() const;
  virtual int GetFirstPageNumber() const;
  virtual int ReadPrimaryHintStreamOffset() const;
  virtual int ReadPrimaryHintStreamLength() const;

  // Helper for the ReadPrimaryHintStream methods above.
  int ReadPrimaryHintStream(int index) const;

  // Owner, outlives this object.
  CPDF_DataAvail* const m_pDataAvail;

  // Owned by |m_pDataAvail|.
  CPDF_Dictionary* const m_pLinearizedDict;

  uint32_t m_nFirstPageSharedObjs;
  FX_FILESIZE m_szFirstPageObjOffset;
  std::vector<uint32_t> m_dwDeltaNObjsArray;
  std::vector<uint32_t> m_dwNSharedObjsArray;
  std::vector<uint32_t> m_dwSharedObjNumArray;
  std::vector<uint32_t> m_dwIdentifierArray;
  std::vector<FX_FILESIZE> m_szPageOffsetArray;
  std::vector<FX_FILESIZE> m_szSharedObjOffsetArray;
};

#endif  // CORE_FPDFAPI_FPDF_PARSER_CPDF_HINT_TABLES_H_
