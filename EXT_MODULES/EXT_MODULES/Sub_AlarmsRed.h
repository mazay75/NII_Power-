/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: Sub_AlarmsRed
 *** Description: Subapplication Type
 *** Version:
***     1.0: 2025-09-15/korsa -  - 
 *************************************************************************/

#ifndef _SUB_ALARMSRED_H_
#define _SUB_ALARMSRED_H_

#include "cfb.h"
#include "typelib.h"
#include "forte_bool.h"
#include "forte_uint.h"
#include "forte_array_at.h"


class FORTE_Sub_AlarmsRed: public CCompositeFB {
  DECLARE_FIRMWARE_FB(FORTE_Sub_AlarmsRed)

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

  CIEC_BOOL &st_xFan1() {
    return *static_cast<CIEC_BOOL*>(getDI(0));
  }
  
  CIEC_BOOL &st_xFan2() {
    return *static_cast<CIEC_BOOL*>(getDI(1));
  }
  
  CIEC_BOOL &st_xAlarmFan1() {
    return *static_cast<CIEC_BOOL*>(getDI(2));
  }
  
  CIEC_BOOL &st_xAlarmFan2() {
    return *static_cast<CIEC_BOOL*>(getDI(3));
  }
  
  CIEC_BOOL &st_xAlarmDamp1() {
    return *static_cast<CIEC_BOOL*>(getDI(4));
  }
  
  CIEC_BOOL &st_xAlarmDamp2() {
    return *static_cast<CIEC_BOOL*>(getDI(5));
  }
  
  CIEC_BOOL &st_xAlarmTEN1() {
    return *static_cast<CIEC_BOOL*>(getDI(6));
  }
  
  CIEC_BOOL &st_xAlarmTEN2() {
    return *static_cast<CIEC_BOOL*>(getDI(7));
  }
  
  CIEC_BOOL &st_xStatusU() {
    return *static_cast<CIEC_BOOL*>(getDI(8));
  }
  
  CIEC_BOOL &st_xStatusExtLine() {
    return *static_cast<CIEC_BOOL*>(getDI(9));
  }
  
  CIEC_BOOL &st_xBlockStatus() {
    return *static_cast<CIEC_BOOL*>(getDI(10));
  }
  
  CIEC_UINT &st_SP_BlockAlarm() {
    return *static_cast<CIEC_UINT*>(getDI(11));
  }
  
  CIEC_BOOL &st_ResetAlarm() {
    return *static_cast<CIEC_BOOL*>(getDI(12));
  }
  
  CIEC_BOOL &st_xGlobalAlarm() {
    return *static_cast<CIEC_BOOL*>(getDO(0));
  }
  
  CIEC_BOOL &st_xAlarmU() {
    return *static_cast<CIEC_BOOL*>(getDO(1));
  }
  
  CIEC_BOOL &st_xAlarmExtLine() {
    return *static_cast<CIEC_BOOL*>(getDO(2));
  }
  
  CIEC_BOOL &st_xBlockAlarm() {
    return *static_cast<CIEC_BOOL*>(getDO(3));
  }
  

  FORTE_FB_DATA_ARRAY(1, 13, 4, 0);

public:
  FORTE_Sub_AlarmsRed(const CStringDictionary::TStringId pa_nInstanceNameId, CResource *pa_poSrcRes) :
      CCompositeFB(pa_poSrcRes, &scm_stFBInterfaceSpec, pa_nInstanceNameId, &scm_stFBNData, m_anFBConnData, m_anFBVarsData) {
  };

  virtual ~FORTE_Sub_AlarmsRed() = default;
};

#endif // _SUB_ALARMSRED_H_


