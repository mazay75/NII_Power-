/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: Sub_ControlTTP
 *** Description: Subapplication Type
 *** Version:
***     1.0: 2025-03-10/ivan -  - 
 *************************************************************************/

#ifndef _SUB_CONTROLTTP_H_
#define _SUB_CONTROLTTP_H_

#include "cfb.h"
#include "typelib.h"
#include "forte_bool.h"
#include "forte_uint.h"
#include "forte_array_at.h"


class FORTE_Sub_ControlTTP: public CCompositeFB {
  DECLARE_FIRMWARE_FB(FORTE_Sub_ControlTTP)

private:
  static const CStringDictionary::TStringId scm_anDataInputNames[];
  static const CStringDictionary::TStringId scm_anDataInputTypeIds[];
  
  static const CStringDictionary::TStringId scm_anDataOutputNames[];
  static const CStringDictionary::TStringId scm_anDataOutputTypeIds[];
  
  static const TEventID scm_nEventREQID = 0;
  
  static const TForteInt16 scm_anEIWithIndexes[];
  static const CStringDictionary::TStringId scm_anEventInputNames[];
  
  static const TEventID scm_nEventCNFID = 0;
  
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

  CIEC_BOOL &st_xEnableControl() {
    return *static_cast<CIEC_BOOL*>(getDI(0));
  }
  
  CIEC_BOOL &st_xKM() {
    return *static_cast<CIEC_BOOL*>(getDI(1));
  }
  
  CIEC_BOOL &st_xBreakTTP() {
    return *static_cast<CIEC_BOOL*>(getDI(2));
  }
  
  CIEC_BOOL &st_xReset() {
    return *static_cast<CIEC_BOOL*>(getDI(3));
  }
  
  CIEC_UINT &st_SP_PeriodControl() {
    return *static_cast<CIEC_UINT*>(getDI(4));
  }
  
  CIEC_UINT &st_SP_TimeControl() {
    return *static_cast<CIEC_UINT*>(getDI(5));
  }
  
  CIEC_BOOL &st_outKM() {
    return *static_cast<CIEC_BOOL*>(getDO(0));
  }
  
  CIEC_BOOL &st_cmdControlTTP() {
    return *static_cast<CIEC_BOOL*>(getDO(1));
  }
  
  CIEC_BOOL &st_xAlarmBreakTTP() {
    return *static_cast<CIEC_BOOL*>(getDO(2));
  }
  

  FORTE_FB_DATA_ARRAY(1, 6, 3, 0);

public:
  FORTE_Sub_ControlTTP(const CStringDictionary::TStringId pa_nInstanceNameId, CResource *pa_poSrcRes) :
      CCompositeFB(pa_poSrcRes, &scm_stFBInterfaceSpec, pa_nInstanceNameId, &scm_stFBNData, m_anFBConnData, m_anFBVarsData) {
  };

  virtual ~FORTE_Sub_ControlTTP() = default;
};

#endif // _SUB_CONTROLTTP_H_


