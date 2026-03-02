/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: Sub_2FansSup
 *** Description: Блок 2 вентилятора
 *** Version:
***     1.0: 2025-09-14/sergdeb -  - 
***     1.2: 2025-10-14/SERGHOME - NPC21 - 
 *************************************************************************/

#ifndef _SUB_2FANSSUP_H_
#define _SUB_2FANSSUP_H_

#include "cfb.h"
#include "typelib.h"
#include "forte_bool.h"
#include "forte_int.h"
#include "forte_udint.h"
#include "forte_uint.h"
#include "forte_word.h"
#include "forte_wstring.h"
#include "forte_array_at.h"


class FORTE_Sub_2FansSup: public CCompositeFB {
  DECLARE_FIRMWARE_FB(FORTE_Sub_2FansSup)

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
  
  CIEC_BOOL &st_xStart1() {
    return *static_cast<CIEC_BOOL*>(getDI(1));
  }
  
  CIEC_BOOL &st_xStart2() {
    return *static_cast<CIEC_BOOL*>(getDI(2));
  }
  
  CIEC_BOOL &st_xFire() {
    return *static_cast<CIEC_BOOL*>(getDI(3));
  }
  
  CIEC_BOOL &st_xDPD1() {
    return *static_cast<CIEC_BOOL*>(getDI(4));
  }
  
  CIEC_BOOL &st_xDPD2() {
    return *static_cast<CIEC_BOOL*>(getDI(5));
  }
  
  CIEC_BOOL &st_xKM1() {
    return *static_cast<CIEC_BOOL*>(getDI(6));
  }
  
  CIEC_BOOL &st_xKM2() {
    return *static_cast<CIEC_BOOL*>(getDI(7));
  }
  
  CIEC_BOOL &st_xStatusQF1() {
    return *static_cast<CIEC_BOOL*>(getDI(8));
  }
  
  CIEC_BOOL &st_xStatusQF2() {
    return *static_cast<CIEC_BOOL*>(getDI(9));
  }
  
  CIEC_BOOL &st_xTK1() {
    return *static_cast<CIEC_BOOL*>(getDI(10));
  }
  
  CIEC_BOOL &st_xTK2() {
    return *static_cast<CIEC_BOOL*>(getDI(11));
  }
  
  CIEC_BOOL &st_xHeatKM_TEN1() {
    return *static_cast<CIEC_BOOL*>(getDI(12));
  }
  
  CIEC_BOOL &st_xHeatKM_TEN2() {
    return *static_cast<CIEC_BOOL*>(getDI(13));
  }
  
  CIEC_UINT &st_SP_DelAlrmDPD_Fan1() {
    return *static_cast<CIEC_UINT*>(getDI(14));
  }
  
  CIEC_UINT &st_SP_DelAlrmDPD_Fan2() {
    return *static_cast<CIEC_UINT*>(getDI(15));
  }
  
  CIEC_UINT &st_SP_Blowing() {
    return *static_cast<CIEC_UINT*>(getDI(16));
  }
  
  CIEC_WSTRING &st_var_EngineMinutes1() {
    return *static_cast<CIEC_WSTRING*>(getDI(17));
  }
  
  CIEC_WSTRING &st_var_EngineMinutes2() {
    return *static_cast<CIEC_WSTRING*>(getDI(18));
  }
  
  CIEC_WSTRING &st_var_EngineHours1() {
    return *static_cast<CIEC_WSTRING*>(getDI(19));
  }
  
  CIEC_WSTRING &st_var_EngineHours2() {
    return *static_cast<CIEC_WSTRING*>(getDI(20));
  }
  
  CIEC_BOOL &st_xAlarmReset() {
    return *static_cast<CIEC_BOOL*>(getDI(21));
  }
  
  CIEC_BOOL &st_xFan1() {
    return *static_cast<CIEC_BOOL*>(getDO(0));
  }
  
  CIEC_BOOL &st_xFan2() {
    return *static_cast<CIEC_BOOL*>(getDO(1));
  }
  
  CIEC_BOOL &st_xAlarmFan1() {
    return *static_cast<CIEC_BOOL*>(getDO(2));
  }
  
  CIEC_BOOL &st_xAlarmFan2() {
    return *static_cast<CIEC_BOOL*>(getDO(3));
  }
  
  CIEC_BOOL &st_xAlarmDPD1() {
    return *static_cast<CIEC_BOOL*>(getDO(4));
  }
  
  CIEC_BOOL &st_xAlarmDPD2() {
    return *static_cast<CIEC_BOOL*>(getDO(5));
  }
  
  CIEC_BOOL &st_xAlarmKM1() {
    return *static_cast<CIEC_BOOL*>(getDO(6));
  }
  
  CIEC_BOOL &st_xAlarmKM2() {
    return *static_cast<CIEC_BOOL*>(getDO(7));
  }
  
  CIEC_BOOL &st_xAlarmQF1() {
    return *static_cast<CIEC_BOOL*>(getDO(8));
  }
  
  CIEC_BOOL &st_xAlarmQF2() {
    return *static_cast<CIEC_BOOL*>(getDO(9));
  }
  
  CIEC_BOOL &st_xAlarmTK1() {
    return *static_cast<CIEC_BOOL*>(getDO(10));
  }
  
  CIEC_BOOL &st_xAlarmTK2() {
    return *static_cast<CIEC_BOOL*>(getDO(11));
  }
  
  CIEC_BOOL &st_xBlowing1() {
    return *static_cast<CIEC_BOOL*>(getDO(12));
  }
  
  CIEC_BOOL &st_xBlowing2() {
    return *static_cast<CIEC_BOOL*>(getDO(13));
  }
  
  CIEC_UDINT &st_EngineMinutes1() {
    return *static_cast<CIEC_UDINT*>(getDO(14));
  }
  
  CIEC_UDINT &st_EngineMinutes2() {
    return *static_cast<CIEC_UDINT*>(getDO(15));
  }
  
  CIEC_UDINT &st_EngineHours1() {
    return *static_cast<CIEC_UDINT*>(getDO(16));
  }
  
  CIEC_UDINT &st_EngineHours2() {
    return *static_cast<CIEC_UDINT*>(getDO(17));
  }
  
  CIEC_WORD &st_wEngineMinutes_0_1() {
    return *static_cast<CIEC_WORD*>(getDO(18));
  }
  
  CIEC_WORD &st_wEngineMinutes_0_2() {
    return *static_cast<CIEC_WORD*>(getDO(19));
  }
  
  CIEC_WORD &st_wEngineMinutes_1_1() {
    return *static_cast<CIEC_WORD*>(getDO(20));
  }
  
  CIEC_WORD &st_wEngineMinutes_1_2() {
    return *static_cast<CIEC_WORD*>(getDO(21));
  }
  
  CIEC_WORD &st_wEngineHours_0_1() {
    return *static_cast<CIEC_WORD*>(getDO(22));
  }
  
  CIEC_WORD &st_wEngineHours_0_2() {
    return *static_cast<CIEC_WORD*>(getDO(23));
  }
  
  CIEC_WORD &st_wEngineHours_1_1() {
    return *static_cast<CIEC_WORD*>(getDO(24));
  }
  
  CIEC_WORD &st_wEngineHours_1_2() {
    return *static_cast<CIEC_WORD*>(getDO(25));
  }
  
  CIEC_INT &st_iETBlow1() {
    return *static_cast<CIEC_INT*>(getDO(26));
  }
  
  CIEC_INT &st_iETBlow2() {
    return *static_cast<CIEC_INT*>(getDO(27));
  }
  

  FORTE_FB_DATA_ARRAY(2, 22, 28, 0);

public:
  FORTE_Sub_2FansSup(const CStringDictionary::TStringId pa_nInstanceNameId, CResource *pa_poSrcRes) :
      CCompositeFB(pa_poSrcRes, &scm_stFBInterfaceSpec, pa_nInstanceNameId, &scm_stFBNData, m_anFBConnData, m_anFBVarsData) {
  };

  virtual ~FORTE_Sub_2FansSup() = default;
};

#endif // _SUB_2FANSSUP_H_


