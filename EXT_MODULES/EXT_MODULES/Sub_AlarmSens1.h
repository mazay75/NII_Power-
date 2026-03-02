/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: Sub_AlarmSens1
 *** Description: Subapplication Type
 *** Version:
***     1.0: 2024-11-11/sergdebwork -  - 
 *************************************************************************/

#ifndef _SUB_ALARMSENS1_H_
#define _SUB_ALARMSENS1_H_

#include "cfb.h"
#include "typelib.h"
#include "forte_bool.h"
#include "forte_time.h"
#include "forte_uint.h"
#include "forte_array_at.h"


class FORTE_Sub_AlarmSens1: public CCompositeFB {
  DECLARE_FIRMWARE_FB(FORTE_Sub_AlarmSens1)

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

  CIEC_BOOL &st_xAuto() {
    return *static_cast<CIEC_BOOL*>(getDI(0));
  }
  
  CIEC_BOOL &st_xStart() {
    return *static_cast<CIEC_BOOL*>(getDI(1));
  }
  
  CIEC_BOOL &st_xAlrmSnsr() {
    return *static_cast<CIEC_BOOL*>(getDI(2));
  }
  
  CIEC_BOOL &st_xReset() {
    return *static_cast<CIEC_BOOL*>(getDI(3));
  }
  
  CIEC_UINT &st_SP_DelAlrmDPD_OnFan() {
    return *static_cast<CIEC_UINT*>(getDI(4));
  }
  
  CIEC_UINT &st_SP_DelAlrmDPD_OffFan() {
    return *static_cast<CIEC_UINT*>(getDI(5));
  }
  
  CIEC_BOOL &st_xAlarmDPD() {
    return *static_cast<CIEC_BOOL*>(getDO(0));
  }
  
  CIEC_TIME &st_ET_On() {
    return *static_cast<CIEC_TIME*>(getDO(1));
  }
  
  CIEC_TIME &st_ET_Off() {
    return *static_cast<CIEC_TIME*>(getDO(2));
  }
  

  FORTE_FB_DATA_ARRAY(1, 6, 3, 0);

public:
  FORTE_Sub_AlarmSens1(const CStringDictionary::TStringId pa_nInstanceNameId, CResource *pa_poSrcRes) :
      CCompositeFB(pa_poSrcRes, &scm_stFBInterfaceSpec, pa_nInstanceNameId, &scm_stFBNData, m_anFBConnData, m_anFBVarsData) {
  };

  virtual ~FORTE_Sub_AlarmSens1() = default;
};

#endif // _SUB_ALARMSENS1_H_


