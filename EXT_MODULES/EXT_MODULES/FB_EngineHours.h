/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: FB_EngineHours
 *** Description: Subapplication Type
 *** Version:
***     1.0: 2024-11-28/sergdebwork -  - 
 *************************************************************************/

#ifndef _FB_ENGINEHOURS_H_
#define _FB_ENGINEHOURS_H_

#include "cfb.h"
#include "typelib.h"
#include "forte_bool.h"
#include "forte_time.h"
#include "forte_udint.h"
#include "forte_array_at.h"


class FORTE_FB_EngineHours: public CCompositeFB {
  DECLARE_FIRMWARE_FB(FORTE_FB_EngineHours)

private:
  static const CStringDictionary::TStringId scm_anDataInputNames[];
  static const CStringDictionary::TStringId scm_anDataInputTypeIds[];
  
  static const CStringDictionary::TStringId scm_anDataOutputNames[];
  static const CStringDictionary::TStringId scm_anDataOutputTypeIds[];
  
  static const TEventID scm_nEventREQID = 0;
  
  static const TForteInt16 scm_anEIWithIndexes[];
  static const CStringDictionary::TStringId scm_anEventInputNames[];
  
  static const TEventID scm_nEventCNFID = 0;
  static const TEventID scm_nEventWRTMID = 1;
  
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

  CIEC_BOOL &st_InFan() {
    return *static_cast<CIEC_BOOL*>(getDI(0));
  }
  
  CIEC_UDINT &st_initEM() {
    return *static_cast<CIEC_UDINT*>(getDI(1));
  }
  
  CIEC_BOOL &st_ResetEM() {
    return *static_cast<CIEC_BOOL*>(getDI(2));
  }
  
  CIEC_TIME &st_cycTime() {
    return *static_cast<CIEC_TIME*>(getDI(3));
  }
  
  CIEC_UDINT &st_outEM() {
    return *static_cast<CIEC_UDINT*>(getDO(0));
  }
  
  CIEC_UDINT &st_outEH() {
    return *static_cast<CIEC_UDINT*>(getDO(1));
  }
  
  CIEC_TIME &st_ET() {
    return *static_cast<CIEC_TIME*>(getDO(2));
  }
  

  FORTE_FB_DATA_ARRAY(2, 4, 3, 0);

public:
  FORTE_FB_EngineHours(const CStringDictionary::TStringId pa_nInstanceNameId, CResource *pa_poSrcRes) :
      CCompositeFB(pa_poSrcRes, &scm_stFBInterfaceSpec, pa_nInstanceNameId, &scm_stFBNData, m_anFBConnData, m_anFBVarsData) {
  };

  virtual ~FORTE_FB_EngineHours() = default;
};

#endif // _FB_ENGINEHOURS_H_


