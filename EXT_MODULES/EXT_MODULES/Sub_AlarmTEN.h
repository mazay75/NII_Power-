/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: Sub_AlarmTEN
 *** Description: Subapplication Type
 *** Version:
***     1.0: 2025-10-01/sergdeb -  - 
 *************************************************************************/

#ifndef _SUB_ALARMTEN_H_
#define _SUB_ALARMTEN_H_

#include "cfb.h"
#include "typelib.h"
#include "forte_bool.h"
#include "forte_uint.h"
#include "forte_array_at.h"


class FORTE_Sub_AlarmTEN: public CCompositeFB {
  DECLARE_FIRMWARE_FB(FORTE_Sub_AlarmTEN)

private:
  static const CStringDictionary::TStringId scm_anDataInputNames[];
  static const CStringDictionary::TStringId scm_anDataInputTypeIds[];
  
  static const CStringDictionary::TStringId scm_anDataOutputNames[];
  static const CStringDictionary::TStringId scm_anDataOutputTypeIds[];
  
  static const TEventID scm_nEventINITID = 0;
  static const TEventID scm_nEventREQID = 1;
  
  static const TForteInt16 scm_anEIWithIndexes[];
  static const CStringDictionary::TStringId scm_anEventInputNames[];
  
  static const TEventID scm_nEventINITOID = 0;
  static const TEventID scm_nEventCNFID = 1;
  
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
  
  CIEC_BOOL &st_xStart_KM1() {
    return *static_cast<CIEC_BOOL*>(getDI(1));
  }
  
  CIEC_BOOL &st_xStart_KM2() {
    return *static_cast<CIEC_BOOL*>(getDI(2));
  }
  
  CIEC_BOOL &st_xStatusKM1_TEN() {
    return *static_cast<CIEC_BOOL*>(getDI(3));
  }
  
  CIEC_BOOL &st_xStatusKM2_TEN() {
    return *static_cast<CIEC_BOOL*>(getDI(4));
  }
  
  CIEC_BOOL &st_xStatusQF_TEN() {
    return *static_cast<CIEC_BOOL*>(getDI(5));
  }
  
  CIEC_BOOL &st_xStatusTK_TEN() {
    return *static_cast<CIEC_BOOL*>(getDI(6));
  }
  
  CIEC_BOOL &st_xStatusTK_TTR() {
    return *static_cast<CIEC_BOOL*>(getDI(7));
  }
  
  CIEC_BOOL &st_xStatusTEN() {
    return *static_cast<CIEC_BOOL*>(getDI(8));
  }
  
  CIEC_BOOL &st_xBreakTTR() {
    return *static_cast<CIEC_BOOL*>(getDI(9));
  }
  
  CIEC_BOOL &st_xAlarmReset() {
    return *static_cast<CIEC_BOOL*>(getDI(10));
  }
  
  CIEC_UINT &st_SP_PeriodControlTTR() {
    return *static_cast<CIEC_UINT*>(getDI(11));
  }
  
  CIEC_BOOL &st_xAlarmKM1() {
    return *static_cast<CIEC_BOOL*>(getDO(0));
  }
  
  CIEC_BOOL &st_xAlarmKM2() {
    return *static_cast<CIEC_BOOL*>(getDO(1));
  }
  
  CIEC_BOOL &st_xAlarmQF() {
    return *static_cast<CIEC_BOOL*>(getDO(2));
  }
  
  CIEC_BOOL &st_xAlarmTK_TEN() {
    return *static_cast<CIEC_BOOL*>(getDO(3));
  }
  
  CIEC_BOOL &st_xAlarmTK_TTR() {
    return *static_cast<CIEC_BOOL*>(getDO(4));
  }
  
  CIEC_BOOL &st_xAlarmBreakdownTTR() {
    return *static_cast<CIEC_BOOL*>(getDO(5));
  }
  
  CIEC_BOOL &st_xAlarmTEN() {
    return *static_cast<CIEC_BOOL*>(getDO(6));
  }
  
  CIEC_BOOL &st_cmdControlTTR() {
    return *static_cast<CIEC_BOOL*>(getDO(7));
  }
  

  FORTE_FB_DATA_ARRAY(2, 12, 8, 0);

public:
  FORTE_Sub_AlarmTEN(const CStringDictionary::TStringId pa_nInstanceNameId, CResource *pa_poSrcRes) :
      CCompositeFB(pa_poSrcRes, &scm_stFBInterfaceSpec, pa_nInstanceNameId, &scm_stFBNData, m_anFBConnData, m_anFBVarsData) {
  };

  virtual ~FORTE_Sub_AlarmTEN() = default;
};

#endif // _SUB_ALARMTEN_H_


