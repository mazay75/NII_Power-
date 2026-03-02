/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: Sub_SequenceHeatx2
 *** Description: Subapplication Type
 *** Version:
***     1.0: 2025-03-10/ivan -  - 
 *************************************************************************/

#ifndef _SUB_SEQUENCEHEATX2_H_
#define _SUB_SEQUENCEHEATX2_H_

#include "cfb.h"
#include "typelib.h"
#include "forte_bool.h"
#include "forte_real.h"
#include "forte_uint.h"
#include "forte_array_at.h"


class FORTE_Sub_SequenceHeatx2: public CCompositeFB {
  DECLARE_FIRMWARE_FB(FORTE_Sub_SequenceHeatx2)

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

  CIEC_BOOL &st_Auto() {
    return *static_cast<CIEC_BOOL*>(getDI(0));
  }
  
  CIEC_BOOL &st_EnabledControlTTP() {
    return *static_cast<CIEC_BOOL*>(getDI(1));
  }
  
  CIEC_BOOL &st_xFan() {
    return *static_cast<CIEC_BOOL*>(getDI(2));
  }
  
  CIEC_REAL &st_MV() {
    return *static_cast<CIEC_REAL*>(getDI(3));
  }
  
  CIEC_REAL &st_SP() {
    return *static_cast<CIEC_REAL*>(getDI(4));
  }
  
  CIEC_REAL &st_DZpid() {
    return *static_cast<CIEC_REAL*>(getDI(5));
  }
  
  CIEC_REAL &st_DZkm() {
    return *static_cast<CIEC_REAL*>(getDI(6));
  }
  
  CIEC_REAL &st_HYS() {
    return *static_cast<CIEC_REAL*>(getDI(7));
  }
  
  CIEC_REAL &st_Kp() {
    return *static_cast<CIEC_REAL*>(getDI(8));
  }
  
  CIEC_REAL &st_Ti() {
    return *static_cast<CIEC_REAL*>(getDI(9));
  }
  
  CIEC_BOOL &st_StatusQF() {
    return *static_cast<CIEC_BOOL*>(getDI(10));
  }
  
  CIEC_BOOL &st_StatusKMttr() {
    return *static_cast<CIEC_BOOL*>(getDI(11));
  }
  
  CIEC_BOOL &st_StatusKM1() {
    return *static_cast<CIEC_BOOL*>(getDI(12));
  }
  
  CIEC_BOOL &st_TS() {
    return *static_cast<CIEC_BOOL*>(getDI(13));
  }
  
  CIEC_BOOL &st_TkTTP() {
    return *static_cast<CIEC_BOOL*>(getDI(14));
  }
  
  CIEC_BOOL &st_xBreakTTR() {
    return *static_cast<CIEC_BOOL*>(getDI(15));
  }
  
  CIEC_BOOL &st_ReSetAlarm() {
    return *static_cast<CIEC_BOOL*>(getDI(16));
  }
  
  CIEC_UINT &st_SP_DelAlrmKM() {
    return *static_cast<CIEC_UINT*>(getDI(17));
  }
  
  CIEC_UINT &st_SP_Tppw() {
    return *static_cast<CIEC_UINT*>(getDI(18));
  }
  
  CIEC_UINT &st_SP_PeriodControlTTP() {
    return *static_cast<CIEC_UINT*>(getDI(19));
  }
  
  CIEC_UINT &st_SP_TimeControlTTP() {
    return *static_cast<CIEC_UINT*>(getDI(20));
  }
  
  CIEC_UINT &st_numLevel() {
    return *static_cast<CIEC_UINT*>(getDI(21));
  }
  
  CIEC_BOOL &st_xKMttr() {
    return *static_cast<CIEC_BOOL*>(getDO(0));
  }
  
  CIEC_BOOL &st_xKM1() {
    return *static_cast<CIEC_BOOL*>(getDO(1));
  }
  
  CIEC_BOOL &st_xTTP() {
    return *static_cast<CIEC_BOOL*>(getDO(2));
  }
  
  CIEC_BOOL &st_xFanTTP() {
    return *static_cast<CIEC_BOOL*>(getDO(3));
  }
  
  CIEC_BOOL &st_cmdControlTTP() {
    return *static_cast<CIEC_BOOL*>(getDO(4));
  }
  
  CIEC_UINT &st_iPower() {
    return *static_cast<CIEC_UINT*>(getDO(5));
  }
  
  CIEC_BOOL &st_xAlarmTEN() {
    return *static_cast<CIEC_BOOL*>(getDO(6));
  }
  
  CIEC_BOOL &st_xAlarmQF() {
    return *static_cast<CIEC_BOOL*>(getDO(7));
  }
  
  CIEC_BOOL &st_xAlarmKMttr() {
    return *static_cast<CIEC_BOOL*>(getDO(8));
  }
  
  CIEC_BOOL &st_xAlarmKM1() {
    return *static_cast<CIEC_BOOL*>(getDO(9));
  }
  
  CIEC_BOOL &st_xAlarmTk() {
    return *static_cast<CIEC_BOOL*>(getDO(10));
  }
  
  CIEC_BOOL &st_xAlarmTkTTP() {
    return *static_cast<CIEC_BOOL*>(getDO(11));
  }
  
  CIEC_BOOL &st_xAlarmCtrlTTP() {
    return *static_cast<CIEC_BOOL*>(getDO(12));
  }
  

  FORTE_FB_DATA_ARRAY(2, 22, 13, 0);

public:
  FORTE_Sub_SequenceHeatx2(const CStringDictionary::TStringId pa_nInstanceNameId, CResource *pa_poSrcRes) :
      CCompositeFB(pa_poSrcRes, &scm_stFBInterfaceSpec, pa_nInstanceNameId, &scm_stFBNData, m_anFBConnData, m_anFBVarsData) {
  };

  virtual ~FORTE_Sub_SequenceHeatx2() = default;
};

#endif // _SUB_SEQUENCEHEATX2_H_


