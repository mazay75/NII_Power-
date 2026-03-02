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

#include "Sub_2FansSup.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "Sub_2FansSup_gen.cpp"
#endif


DEFINE_FIRMWARE_FB(FORTE_Sub_2FansSup, g_nStringIdSub_2FansSup)

const CStringDictionary::TStringId FORTE_Sub_2FansSup::scm_anDataInputNames[] = {g_nStringIdxAuto, g_nStringIdxStart1, g_nStringIdxStart2, g_nStringIdxFire, g_nStringIdxDPD1, g_nStringIdxDPD2, g_nStringIdxKM1, g_nStringIdxKM2, g_nStringIdxStatusQF1, g_nStringIdxStatusQF2, g_nStringIdxTK1, g_nStringIdxTK2, g_nStringIdxHeatKM_TEN1, g_nStringIdxHeatKM_TEN2, g_nStringIdSP_DelAlrmDPD_Fan1, g_nStringIdSP_DelAlrmDPD_Fan2, g_nStringIdSP_Blowing, g_nStringIdvar_EngineMinutes1, g_nStringIdvar_EngineMinutes2, g_nStringIdvar_EngineHours1, g_nStringIdvar_EngineHours2, g_nStringIdxAlarmReset};

const CStringDictionary::TStringId FORTE_Sub_2FansSup::scm_anDataInputTypeIds[] = {g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdUINT, g_nStringIdUINT, g_nStringIdUINT, g_nStringIdWSTRING, g_nStringIdWSTRING, g_nStringIdWSTRING, g_nStringIdWSTRING, g_nStringIdBOOL};

const CStringDictionary::TStringId FORTE_Sub_2FansSup::scm_anDataOutputNames[] = {g_nStringIdxFan1, g_nStringIdxFan2, g_nStringIdxAlarmFan1, g_nStringIdxAlarmFan2, g_nStringIdxAlarmDPD1, g_nStringIdxAlarmDPD2, g_nStringIdxAlarmKM1, g_nStringIdxAlarmKM2, g_nStringIdxAlarmQF1, g_nStringIdxAlarmQF2, g_nStringIdxAlarmTK1, g_nStringIdxAlarmTK2, g_nStringIdxBlowing1, g_nStringIdxBlowing2, g_nStringIdEngineMinutes1, g_nStringIdEngineMinutes2, g_nStringIdEngineHours1, g_nStringIdEngineHours2, g_nStringIdwEngineMinutes_0_1, g_nStringIdwEngineMinutes_0_2, g_nStringIdwEngineMinutes_1_1, g_nStringIdwEngineMinutes_1_2, g_nStringIdwEngineHours_0_1, g_nStringIdwEngineHours_0_2, g_nStringIdwEngineHours_1_1, g_nStringIdwEngineHours_1_2, g_nStringIdiETBlow1, g_nStringIdiETBlow2};

const CStringDictionary::TStringId FORTE_Sub_2FansSup::scm_anDataOutputTypeIds[] = {g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdUDINT, g_nStringIdUDINT, g_nStringIdUDINT, g_nStringIdUDINT, g_nStringIdWORD, g_nStringIdWORD, g_nStringIdWORD, g_nStringIdWORD, g_nStringIdWORD, g_nStringIdWORD, g_nStringIdWORD, g_nStringIdWORD, g_nStringIdINT, g_nStringIdINT};

const TForteInt16 FORTE_Sub_2FansSup::scm_anEIWithIndexes[] = {-1, -1};
const CStringDictionary::TStringId FORTE_Sub_2FansSup::scm_anEventInputNames[] = {g_nStringIdINIT, g_nStringIdREQ};

const TForteInt16 FORTE_Sub_2FansSup::scm_anEOWithIndexes[] = {-1, -1};
const CStringDictionary::TStringId FORTE_Sub_2FansSup::scm_anEventOutputNames[] = {g_nStringIdINITO, g_nStringIdCNF};


const SFBInterfaceSpec FORTE_Sub_2FansSup::scm_stFBInterfaceSpec = {
  2, scm_anEventInputNames, nullptr, scm_anEIWithIndexes,
  2, scm_anEventOutputNames, nullptr, scm_anEOWithIndexes,
  22, scm_anDataInputNames, scm_anDataInputTypeIds,
  28, scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, nullptr
};

const SCFB_FBInstanceData FORTE_Sub_2FansSup::scm_astInternalFBs[] = {
  {g_nStringIdSub_Fan_0, g_nStringIdSub_Fan1},
  {g_nStringIdSub_Fan_1, g_nStringIdSub_Fan1}
};

const SCFB_FBParameter FORTE_Sub_2FansSup::scm_astParamters[] = {
  {0, g_nStringIdSP_DelAlrmKM_OnFan, "3"},
  {0, g_nStringIdSP_DelAlrmKM_OffFan, "3"},
  {1, g_nStringIdSP_DelAlrmKM_OnFan, "3"},
  {1, g_nStringIdSP_DelAlrmKM_OffFan, "3"},
};

const SCFB_FBConnectionData FORTE_Sub_2FansSup::scm_astEventConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdINIT), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_Fan_0, g_nStringIdINIT), 0},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdREQ), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_Fan_0, g_nStringIdREQ), 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_Fan_0, g_nStringIdINITO), 0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_Fan_1, g_nStringIdINIT), 1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_Fan_0, g_nStringIdCNF), 0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_Fan_1, g_nStringIdREQ), 1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_Fan_1, g_nStringIdINITO), 1, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdINITO), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_Fan_1, g_nStringIdCNF), 1, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdCNF), -1},
};

const SCFB_FBConnectionData FORTE_Sub_2FansSup::scm_astDataConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxAuto), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_Fan_0, g_nStringIdxAuto), 0},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxStart1), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_Fan_0, g_nStringIdxStart), 0},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxFire), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_Fan_0, g_nStringIdxFire), 0},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxDPD1), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_Fan_0, g_nStringIdxDPD), 0},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxKM1), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_Fan_0, g_nStringIdxKM), 0},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxStatusQF1), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_Fan_0, g_nStringIdxQF), 0},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxTK1), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_Fan_0, g_nStringIdxTK), 0},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxHeatKM_TEN1), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_Fan_0, g_nStringIdxHeatKM), 0},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdSP_DelAlrmDPD_Fan1), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_Fan_0, g_nStringIdSP_DelAlrmDPD_OnFan), 0},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdSP_Blowing), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_Fan_0, g_nStringIdSP_Blowing), 0},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdvar_EngineMinutes1), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_Fan_0, g_nStringIdvar_EngineMinutes), 0},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdvar_EngineHours1), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_Fan_0, g_nStringIdvar_EngineHours), 0},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxAlarmReset), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_Fan_0, g_nStringIdxReset), 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_Fan_0, g_nStringIdxFan), 0, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxFan1), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_Fan_0, g_nStringIdxAlarmFan), 0, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxAlarmFan1), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_Fan_0, g_nStringIdxAlarmDPD), 0, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxAlarmDPD1), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_Fan_0, g_nStringIdxAlarmKM), 0, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxAlarmKM1), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_Fan_0, g_nStringIdxAlarmQF), 0, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxAlarmQF1), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_Fan_0, g_nStringIdxAlarmTK), 0, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxAlarmTK1), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_Fan_0, g_nStringIdxBlowing), 0, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxBlowing1), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_Fan_0, g_nStringIdEngineMinutes), 0, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdEngineMinutes1), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_Fan_0, g_nStringIdEngineHours), 0, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdEngineHours1), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_Fan_0, g_nStringIdwEngineMinutes_0), 0, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdwEngineMinutes_0_1), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_Fan_0, g_nStringIdwEngineMinutes_1), 0, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdwEngineMinutes_1_1), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_Fan_0, g_nStringIdwEngineHours_0), 0, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdwEngineHours_0_1), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_Fan_0, g_nStringIdwEngineHours_1), 0, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdwEngineHours_1_1), -1},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxStart2), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_Fan_1, g_nStringIdxStart), 1},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxDPD2), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_Fan_1, g_nStringIdxDPD), 1},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxKM2), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_Fan_1, g_nStringIdxKM), 1},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxStatusQF2), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_Fan_1, g_nStringIdxQF), 1},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxTK2), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_Fan_1, g_nStringIdxTK), 1},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxHeatKM_TEN2), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_Fan_1, g_nStringIdxHeatKM), 1},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdSP_DelAlrmDPD_Fan2), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_Fan_1, g_nStringIdSP_DelAlrmDPD_OnFan), 1},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdvar_EngineMinutes2), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_Fan_1, g_nStringIdvar_EngineMinutes), 1},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdvar_EngineHours2), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_Fan_1, g_nStringIdvar_EngineHours), 1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_Fan_1, g_nStringIdxFan), 1, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxFan2), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_Fan_1, g_nStringIdxAlarmFan), 1, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxAlarmFan2), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_Fan_1, g_nStringIdxAlarmDPD), 1, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxAlarmDPD2), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_Fan_1, g_nStringIdxAlarmKM), 1, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxAlarmKM2), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_Fan_1, g_nStringIdxAlarmQF), 1, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxAlarmQF2), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_Fan_1, g_nStringIdxAlarmTK), 1, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxAlarmTK2), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_Fan_1, g_nStringIdxBlowing), 1, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxBlowing2), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_Fan_1, g_nStringIdEngineMinutes), 1, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdEngineMinutes2), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_Fan_1, g_nStringIdEngineHours), 1, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdEngineHours2), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_Fan_1, g_nStringIdwEngineMinutes_0), 1, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdwEngineMinutes_0_2), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_Fan_1, g_nStringIdwEngineMinutes_1), 1, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdwEngineMinutes_1_2), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_Fan_1, g_nStringIdwEngineHours_0), 1, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdwEngineHours_0_2), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_Fan_1, g_nStringIdwEngineHours_1), 1, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdwEngineHours_1_2), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_Fan_0, g_nStringIdiETBlow), 0, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdiETBlow1), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_Fan_1, g_nStringIdiETBlow), 1, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdiETBlow2), -1},
};

const SCFB_FBFannedOutConnectionData FORTE_Sub_2FansSup::scm_astFannedOutDataConnections[] = {
  {0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_Fan_1, g_nStringIdxAuto), 1},
  {2, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_Fan_1, g_nStringIdxFire), 1},
  {8, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_Fan_0, g_nStringIdSP_DelAlrmDPD_OffFan), 0},
  {9, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_Fan_1, g_nStringIdSP_Blowing), 1},
  {12, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_Fan_1, g_nStringIdxReset), 1},
  {32, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_Fan_1, g_nStringIdSP_DelAlrmDPD_OffFan), 1},
};

const SCFB_FBNData FORTE_Sub_2FansSup::scm_stFBNData = {
  2, scm_astInternalFBs,
  6, scm_astEventConnections,
  0, nullptr,
  50, scm_astDataConnections,
  6, scm_astFannedOutDataConnections,
  4, scm_astParamters
};



