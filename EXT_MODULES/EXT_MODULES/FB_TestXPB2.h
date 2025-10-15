/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: FB_TestXPB2
 *** Description: Simple FB with one algorithm
 *** Version:
***     1.0: 2024-12-02/sergdebwork -  - 
 *************************************************************************/

#ifndef _FB_TESTXPB2_H_
#define _FB_TESTXPB2_H_

#include "simplefb.h"
#include "forte_wstring.h"
#include "forte_array_at.h"


class FORTE_FB_TestXPB2: public CSimpleFB {
  DECLARE_FIRMWARE_FB(FORTE_FB_TestXPB2)

private:
  static const CStringDictionary::TStringId scm_anDataInputNames[];
  static const CStringDictionary::TStringId scm_anDataInputTypeIds[];
  
  static const CStringDictionary::TStringId scm_anDataOutputNames[];
  static const CStringDictionary::TStringId scm_anDataOutputTypeIds[];
  
  static const TEventID scm_nEventREQID = 0;
  
   static const TDataIOID scm_anEIWith[];
  static const TForteInt16 scm_anEIWithIndexes[];
  static const CStringDictionary::TStringId scm_anEventInputNames[];
  
  static const TEventID scm_nEventCNFID = 0;
  
   static const TDataIOID scm_anEOWith[]; 
  static const TForteInt16 scm_anEOWithIndexes[];
  static const CStringDictionary::TStringId scm_anEventOutputNames[];
  

  static const SFBInterfaceSpec scm_stFBInterfaceSpec;
virtual void setInitialValues();
          CIEC_WSTRING &st_wsIn() {
            return *static_cast<CIEC_WSTRING*>(getDI(0));
          }
          
  CIEC_WSTRING &st_wsOut() {
    return *static_cast<CIEC_WSTRING*>(getDO(0));
  }
  

  void alg_REQ(void);

  FORTE_BASIC_FB_DATA_ARRAY(1, 1, 1, 0, 0);

public:
  FORTE_FB_TestXPB2(CStringDictionary::TStringId pa_nInstanceNameId, CResource *pa_poSrcRes) :
       CSimpleFB(pa_poSrcRes, &scm_stFBInterfaceSpec, pa_nInstanceNameId, nullptr, m_anFBConnData, m_anFBVarsData) {
  };

  virtual ~FORTE_FB_TestXPB2() = default;
};

#endif // _FB_TESTXPB2_H_


