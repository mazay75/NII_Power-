/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: Sub_TEN_2Stages
 *** Description: Subapplication Type
 *** Version:
***     1.0: 2025-09-21/SERGSYSTH -  - 
 *************************************************************************/

#ifndef _SUB_TEN_2STAGES_H_
#define _SUB_TEN_2STAGES_H_

#include "cfb.h"
#include "typelib.h"
#include "forte_bool.h"
#include "forte_real.h"
#include "forte_time.h"
#include "forte_uint.h"
#include "forte_array_at.h"


class FORTE_Sub_TEN_2Stages: public CCompositeFB {
  DECLARE_FIRMWARE_FB(FORTE_Sub_TEN_2Stages)

private:
  static const CStringDictionary::TStringId scm_anDataInputNames[];
  static const CStringDictionary::TStringId scm_anDataInputTypeIds[];
  
  static const CStringDictionary::TStringId scm_anDataOutputNames[];
  static const CStringDictionary::TStringId scm_anDataOutputTypeIds[];
  
  static const TEventID scm_nEventINITID = 0;
  static const TEventID scm_nEventREQID = 1;
  
  static const TForteInt16 scm_anEIWithIndexes[];
  static const CStringDictionary::TStringId scm_anEventInputNames[];
  
  static const TEventID scm_nEventINTOID = 0;
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
  
  CIEC_BOOL &st_xStart() {
    return *static_cast<CIEC_BOOL*>(getDI(1));
  }
  
  CIEC_BOOL &st_xStatusKM1_TEN() {
    return *static_cast<CIEC_BOOL*>(getDI(2));
  }
  
  CIEC_BOOL &st_xStatusKM2_TEN() {
    return *static_cast<CIEC_BOOL*>(getDI(3));
  }
  
  CIEC_BOOL &st_xStatusDPD() {
    return *static_cast<CIEC_BOOL*>(getDI(4));
  }
  
  CIEC_BOOL &st_xStatusKM_Fan() {
    return *static_cast<CIEC_BOOL*>(getDI(5));
  }
  
  CIEC_BOOL &st_xStatusDamp() {
    return *static_cast<CIEC_BOOL*>(getDI(6));
  }
  
  CIEC_BOOL &st_xStatusQF_TEN() {
    return *static_cast<CIEC_BOOL*>(getDI(7));
  }
  
  CIEC_BOOL &st_xStatusTK_TEN() {
    return *static_cast<CIEC_BOOL*>(getDI(8));
  }
  
  CIEC_BOOL &st_xStatusTK_TTR() {
    return *static_cast<CIEC_BOOL*>(getDI(9));
  }
  
  CIEC_BOOL &st_xBreakTTR() {
    return *static_cast<CIEC_BOOL*>(getDI(10));
  }
  
  CIEC_BOOL &st_xResetAlarm() {
    return *static_cast<CIEC_BOOL*>(getDI(11));
  }
  
  CIEC_REAL &st_rTE_Sup() {
    return *static_cast<CIEC_REAL*>(getDI(12));
  }
  
  CIEC_REAL &st_SP_TEsup() {
    return *static_cast<CIEC_REAL*>(getDI(13));
  }
  
  CIEC_UINT &st_SP_dTemp() {
    return *static_cast<CIEC_UINT*>(getDI(14));
  }
  
  CIEC_UINT &st_SP_DelTiimeONstage1() {
    return *static_cast<CIEC_UINT*>(getDI(15));
  }
  
  CIEC_UINT &st_SP_DelTiimeOFFstage2() {
    return *static_cast<CIEC_UINT*>(getDI(16));
  }
  
  CIEC_UINT &st_SP_PeriodControlTTR() {
    return *static_cast<CIEC_UINT*>(getDI(17));
  }
  
  CIEC_UINT &st_SP_TPpwm() {
    return *static_cast<CIEC_UINT*>(getDI(18));
  }
  
  CIEC_REAL &st_SP_Kp() {
    return *static_cast<CIEC_REAL*>(getDI(19));
  }
  
  CIEC_REAL &st_SP_Ti() {
    return *static_cast<CIEC_REAL*>(getDI(20));
  }
  
  CIEC_BOOL &st_xHeatBan() {
    return *static_cast<CIEC_BOOL*>(getDO(0));
  }
  
  CIEC_BOOL &st_xWorkTEN() {
    return *static_cast<CIEC_BOOL*>(getDO(1));
  }
  
  CIEC_BOOL &st_Stage1OR2() {
    return *static_cast<CIEC_BOOL*>(getDO(2));
  }
  
  CIEC_BOOL &st_xKM2_TEN() {
    return *static_cast<CIEC_BOOL*>(getDO(3));
  }
  
  CIEC_BOOL &st_xFanTTR() {
    return *static_cast<CIEC_BOOL*>(getDO(4));
  }
  
  CIEC_BOOL &st_xPulseWidth() {
    return *static_cast<CIEC_BOOL*>(getDO(5));
  }
  
  CIEC_BOOL &st_cmdControlTTR() {
    return *static_cast<CIEC_BOOL*>(getDO(6));
  }
  
  CIEC_REAL &st_rYout() {
    return *static_cast<CIEC_REAL*>(getDO(7));
  }
  
  CIEC_BOOL &st_xAlarmKM1_TEN() {
    return *static_cast<CIEC_BOOL*>(getDO(8));
  }
  
  CIEC_BOOL &st_xAlarmKM2_TEN() {
    return *static_cast<CIEC_BOOL*>(getDO(9));
  }
  
  CIEC_BOOL &st_xAlarmQF_TEN() {
    return *static_cast<CIEC_BOOL*>(getDO(10));
  }
  
  CIEC_BOOL &st_xAlarmTK_TEN() {
    return *static_cast<CIEC_BOOL*>(getDO(11));
  }
  
  CIEC_BOOL &st_xAlarmTK_TTR() {
    return *static_cast<CIEC_BOOL*>(getDO(12));
  }
  
  CIEC_BOOL &st_xAlarmBreakdownTTR() {
    return *static_cast<CIEC_BOOL*>(getDO(13));
  }
  
  CIEC_BOOL &st_xAlarmTEN() {
    return *static_cast<CIEC_BOOL*>(getDO(14));
  }
  
  CIEC_TIME &st_ET() {
    return *static_cast<CIEC_TIME*>(getDO(15));
  }
  
  CIEC_BOOL &st_TestNotManMod() {
    return *static_cast<CIEC_BOOL*>(getDO(16));
  }
  

  FORTE_FB_DATA_ARRAY(2, 21, 17, 0);

public:
  FORTE_Sub_TEN_2Stages(const CStringDictionary::TStringId pa_nInstanceNameId, CResource *pa_poSrcRes) :
      CCompositeFB(pa_poSrcRes, &scm_stFBInterfaceSpec, pa_nInstanceNameId, &scm_stFBNData, m_anFBConnData, m_anFBVarsData) {
  };

  virtual ~FORTE_Sub_TEN_2Stages() = default;
};

#endif // _SUB_TEN_2STAGES_H_


