/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: Sub_Alarm_Sup
 *** Description: Subapplication Type
 *** Version:
***     1.0: 2025-03-12/ivan -  - 
 *************************************************************************/

#ifndef _SUB_ALARM_SUP_H_
#define _SUB_ALARM_SUP_H_

#include "cfb.h"
#include "typelib.h"
#include "forte_bool.h"
#include "forte_uint.h"
#include "forte_array_at.h"


class FORTE_Sub_Alarm_Sup: public CCompositeFB {
  DECLARE_FIRMWARE_FB(FORTE_Sub_Alarm_Sup)

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
  
  CIEC_BOOL &st_xAlarmDamp() {
    return *static_cast<CIEC_BOOL*>(getDI(2));
  }
  
  CIEC_BOOL &st_xAlarmFan() {
    return *static_cast<CIEC_BOOL*>(getDI(3));
  }
  
  CIEC_BOOL &st_xAlarmTEN() {
    return *static_cast<CIEC_BOOL*>(getDI(4));
  }
  
  CIEC_BOOL &st_xAlrmSensTEsup() {
    return *static_cast<CIEC_BOOL*>(getDI(5));
  }
  
  CIEC_BOOL &st_xStatusU() {
    return *static_cast<CIEC_BOOL*>(getDI(6));
  }
  
  CIEC_BOOL &st_xStatusExtLine() {
    return *static_cast<CIEC_BOOL*>(getDI(7));
  }
  
  CIEC_BOOL &st_xFan() {
    return *static_cast<CIEC_BOOL*>(getDI(8));
  }
  
  CIEC_BOOL &st_xBlowing() {
    return *static_cast<CIEC_BOOL*>(getDI(9));
  }
  
  CIEC_BOOL &st_xStatusBlock() {
    return *static_cast<CIEC_BOOL*>(getDI(10));
  }
  
  CIEC_UINT &st_SP_DelAlarmBlock() {
    return *static_cast<CIEC_UINT*>(getDI(11));
  }
  
  CIEC_BOOL &st_xResetAlarm() {
    return *static_cast<CIEC_BOOL*>(getDI(12));
  }
  
  CIEC_BOOL &st_GlobalAlarm() {
    return *static_cast<CIEC_BOOL*>(getDO(0));
  }
  
  CIEC_BOOL &st_AlarmU() {
    return *static_cast<CIEC_BOOL*>(getDO(1));
  }
  
  CIEC_BOOL &st_AlarmExtLine() {
    return *static_cast<CIEC_BOOL*>(getDO(2));
  }
  
  CIEC_BOOL &st_xAlarmSensor() {
    return *static_cast<CIEC_BOOL*>(getDO(3));
  }
  
  CIEC_BOOL &st_xAlarmBlock() {
    return *static_cast<CIEC_BOOL*>(getDO(4));
  }
  
  CIEC_BOOL &st_xAlarmNoTrig() {
    return *static_cast<CIEC_BOOL*>(getDO(5));
  }
  

  FORTE_FB_DATA_ARRAY(1, 13, 6, 0);

public:
  FORTE_Sub_Alarm_Sup(const CStringDictionary::TStringId pa_nInstanceNameId, CResource *pa_poSrcRes) :
      CCompositeFB(pa_poSrcRes, &scm_stFBInterfaceSpec, pa_nInstanceNameId, &scm_stFBNData, m_anFBConnData, m_anFBVarsData) {
  };

  virtual ~FORTE_Sub_Alarm_Sup() = default;
};

#endif // _SUB_ALARM_SUP_H_


