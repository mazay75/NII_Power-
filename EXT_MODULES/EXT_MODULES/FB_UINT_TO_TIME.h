/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: FB_UINT_TO_TIME
 *** Description: Конвертор UINT в тип TIME
 *** Version:
***     1.0: 2024-08-29/NPC-IT -  - 
 *************************************************************************/

#ifndef _FB_UINT_TO_TIME_H_
#define _FB_UINT_TO_TIME_H_

#include "cfb.h"
#include "typelib.h"
#include "forte_time.h"
#include "forte_udint.h"
#include "forte_uint.h"
#include "forte_array_at.h"


class FORTE_FB_UINT_TO_TIME: public CCompositeFB {
  DECLARE_FIRMWARE_FB(FORTE_FB_UINT_TO_TIME)

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

  static const SCFB_FBInstanceData scm_astInternalFBs[];
  static const SCFB_FBParameter scm_astParamters[];
  static const SCFB_FBConnectionData scm_astEventConnections[];
  static const SCFB_FBFannedOutConnectionData scm_astFannedOutEventConnections[];
  static const SCFB_FBConnectionData scm_astDataConnections[];
  static const SCFB_FBFannedOutConnectionData scm_astFannedOutDataConnections[];
  static const SCFB_FBNData scm_stFBNData;

  CIEC_UINT &st_InValue() {
    return *static_cast<CIEC_UINT*>(getDI(0));
  }
  
  CIEC_UDINT &st_Multiplier() {
    return *static_cast<CIEC_UDINT*>(getDI(1));
  }
  
  CIEC_TIME &st_Time() {
    return *static_cast<CIEC_TIME*>(getDO(0));
  }
  

  FORTE_FB_DATA_ARRAY(1, 2, 1, 0);

public:
  FORTE_FB_UINT_TO_TIME(const CStringDictionary::TStringId pa_nInstanceNameId, CResource *pa_poSrcRes) :
      CCompositeFB(pa_poSrcRes, &scm_stFBInterfaceSpec, pa_nInstanceNameId, &scm_stFBNData, m_anFBConnData, m_anFBVarsData) {
  };

  virtual ~FORTE_FB_UINT_TO_TIME() = default;
};

#endif // _FB_UINT_TO_TIME_H_


