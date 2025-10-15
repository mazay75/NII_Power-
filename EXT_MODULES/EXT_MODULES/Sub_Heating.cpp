/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: Sub_Heating
 *** Description: Subapplication Type
 *** Version:
***     1.0: 2025-03-10/ivan -  - 
 *************************************************************************/

#include "Sub_Heating.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "Sub_Heating_gen.cpp"
#endif


DEFINE_FIRMWARE_FB(FORTE_Sub_Heating, g_nStringIdSub_Heating)

const CStringDictionary::TStringId FORTE_Sub_Heating::scm_anDataInputNames[] = {g_nStringIdAuto, g_nStringIdEnabledControlTTP, g_nStringIdxFan, g_nStringIdMV, g_nStringIdSP, g_nStringIdDZ, g_nStringIdHYS, g_nStringIdKp, g_nStringIdTi, g_nStringIdStatusQF, g_nStringIdStatusKM, g_nStringIdTS, g_nStringIdTkTTP, g_nStringIdxBreakTTR, g_nStringIdReSetAlarm, g_nStringIdSP_DelAlrmKM, g_nStringIdSP_Tppw, g_nStringIdSP_PeriodControlTTP, g_nStringIdSP_TimeControlTTP};

const CStringDictionary::TStringId FORTE_Sub_Heating::scm_anDataInputTypeIds[] = {g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdREAL, g_nStringIdREAL, g_nStringIdREAL, g_nStringIdREAL, g_nStringIdREAL, g_nStringIdREAL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdUINT, g_nStringIdUINT, g_nStringIdUINT, g_nStringIdUINT};

const CStringDictionary::TStringId FORTE_Sub_Heating::scm_anDataOutputNames[] = {g_nStringIdxKM, g_nStringIdxTTP, g_nStringIdcmdControlTTP, g_nStringIdiPower, g_nStringIdxAlarmTEN, g_nStringIdxAlarmQF, g_nStringIdxAlarmKM, g_nStringIdxAlarmTk, g_nStringIdxAlarmTkTTP, g_nStringIdxAlarmCtrlTTP};

const CStringDictionary::TStringId FORTE_Sub_Heating::scm_anDataOutputTypeIds[] = {g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdUINT, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL};

const TForteInt16 FORTE_Sub_Heating::scm_anEIWithIndexes[] = {-1, -1};
const CStringDictionary::TStringId FORTE_Sub_Heating::scm_anEventInputNames[] = {g_nStringIdINIT, g_nStringIdREQ};

const TForteInt16 FORTE_Sub_Heating::scm_anEOWithIndexes[] = {-1, -1};
const CStringDictionary::TStringId FORTE_Sub_Heating::scm_anEventOutputNames[] = {g_nStringIdINITO, g_nStringIdCNF};


const SFBInterfaceSpec FORTE_Sub_Heating::scm_stFBInterfaceSpec = {
  2, scm_anEventInputNames, nullptr, scm_anEIWithIndexes,
  2, scm_anEventOutputNames, nullptr, scm_anEOWithIndexes,
  19, scm_anDataInputNames, scm_anDataInputTypeIds,
  10, scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, nullptr
};

const SCFB_FBInstanceData FORTE_Sub_Heating::scm_astInternalFBs[] = {
  {g_nStringIdFB_PID, g_nStringIdFB_PID},
  {g_nStringIdFB_Heat, g_nStringIdFB_Heat},
  {g_nStringIdE_CYCLE, g_nStringIdE_CYCLE},
  {g_nStringIdE_CYCLE_1, g_nStringIdE_CYCLE},
  {g_nStringIdFB_And, g_nStringIdFB_And},
  {g_nStringIdFB_NOT, g_nStringIdFB_NOT},
  {g_nStringIdFB_AlarmTEN, g_nStringIdFB_AlarmTEN},
  {g_nStringIdFB_REAL_DIV, g_nStringIdFB_REAL_DIV},
  {g_nStringIdF_LREAL_TO_UINT, g_nStringIdF_LREAL_TO_UINT},
  {g_nStringIdFB_X1_AND_notX2, g_nStringIdFB_X1_AND_notX2},
  {g_nStringIdFB_OR, g_nStringIdFB_OR},
  {g_nStringIdFB_X1_AND_notX3, g_nStringIdFB_X1_AND_notX2},
  {g_nStringIdSub_ControlTTP, g_nStringIdSub_ControlTTP}
};

const SCFB_FBParameter FORTE_Sub_Heating::scm_astParamters[] = {
  {0, g_nStringIdTd, "0"},
  {0, g_nStringIdInterval, "1"},
  {0, g_nStringIdLIM_H, "100"},
  {0, g_nStringIdLIM_L, "0"},
  {0, g_nStringIdY_Manual, "0"},
  {2, g_nStringIdDT, "T#1s"},
  {3, g_nStringIdDT, "T#100ms"},
  {7, g_nStringIdrDiv, "1"},
};

const SCFB_FBConnectionData FORTE_Sub_Heating::scm_astEventConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdINIT), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_CYCLE, g_nStringIdSTART), 2},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_CYCLE, g_nStringIdEO), 2, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_PID, g_nStringIdREQ), 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_CYCLE_1, g_nStringIdEO), 3, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_Heat, g_nStringIdREQ), 1},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdREQ), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_And, g_nStringIdREQ), 4},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_And, g_nStringIdCNF), 4, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_NOT, g_nStringIdREQ), 5},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_PID, g_nStringIdINTO), 0, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdINITO), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_AlarmTEN, g_nStringIdCNF), 6, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_REAL_DIV, g_nStringIdREQ), 7},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_REAL_DIV, g_nStringIdCNF), 7, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_LREAL_TO_UINT, g_nStringIdREQ), 8},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_X1_AND_notX2, g_nStringIdCNF), 9, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_AlarmTEN, g_nStringIdREQ), 6},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_NOT, g_nStringIdCNF), 5, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_OR, g_nStringIdREQ), 10},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_OR, g_nStringIdCNF), 10, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_X1_AND_notX2, g_nStringIdREQ), 9},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_X1_AND_notX3, g_nStringIdCNF), 11, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdCNF), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_LREAL_TO_UINT, g_nStringIdCNF), 8, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_ControlTTP, g_nStringIdREQ), 12},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_ControlTTP, g_nStringIdCNF), 12, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_X1_AND_notX3, g_nStringIdREQ), 11},
};

const SCFB_FBFannedOutConnectionData FORTE_Sub_Heating::scm_astFannedOutEventConnections[] = {
  {0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_PID, g_nStringIdINIT), 0},
  {0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_CYCLE_1, g_nStringIdSTART), 3},
};

const SCFB_FBConnectionData FORTE_Sub_Heating::scm_astDataConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdAuto), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_And, g_nStringIdxIn1), 4},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxFan), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_And, g_nStringIdxIn2), 4},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_PID, g_nStringIdY), 0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_Heat, g_nStringIdin_PID), 1},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdHYS), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_Heat, g_nStringIdHYS), 1},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdSP_Tppw), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_Heat, g_nStringIdT_ppw), 1},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdMV), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_PID, g_nStringIdMV), 0},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdSP), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_PID, g_nStringIdSP), 0},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdDZ), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_PID, g_nStringIdDZ), 0},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdKp), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_PID, g_nStringIdKp), 0},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdTi), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_PID, g_nStringIdTi), 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_NOT, g_nStringIdxOut), 5, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_PID, g_nStringIdManual), 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_Heat, g_nStringIdoutKM), 1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_AlarmTEN, g_nStringIdStatusTEN), 6},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdStatusQF), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_AlarmTEN, g_nStringIdStatusQF), 6},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdStatusKM), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_AlarmTEN, g_nStringIdStatusKM), 6},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdTS), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_AlarmTEN, g_nStringIdTS), 6},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdTkTTP), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_AlarmTEN, g_nStringIdTkTTP), 6},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdSP_DelAlrmKM), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_AlarmTEN, g_nStringIdTOn), 6},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdReSetAlarm), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_AlarmTEN, g_nStringIdReSetAlarm), 6},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_AlarmTEN, g_nStringIdAlarmQF), 6, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxAlarmQF), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_AlarmTEN, g_nStringIdAlarmKM), 6, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxAlarmKM), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_AlarmTEN, g_nStringIdAlarmTk), 6, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxAlarmTk), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_AlarmTEN, g_nStringIdAlarmTkTTP), 6, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxAlarmTkTTP), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_REAL_DIV, g_nStringIdrOut), 7, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_LREAL_TO_UINT, g_nStringIdIN), 8},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_LREAL_TO_UINT, g_nStringIdOUT), 8, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdiPower), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_And, g_nStringIdxOut), 4, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_NOT, g_nStringIdxIn1), 5},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_AlarmTEN, g_nStringIdAlarmTEN), 6, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_OR, g_nStringIdxIn1), 10},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_OR, g_nStringIdxOut), 10, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxAlarmTEN), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_X1_AND_notX2, g_nStringIdxOut), 9, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_Heat, g_nStringIdFan), 1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_Heat, g_nStringIdoutTTR), 1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_X1_AND_notX3, g_nStringIdxIn1), 11},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_X1_AND_notX3, g_nStringIdxOut), 11, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxTTP), -1},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdEnabledControlTTP), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_ControlTTP, g_nStringIdxEnableControl), 12},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxBreakTTR), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_ControlTTP, g_nStringIdxBreakTTP), 12},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdSP_PeriodControlTTP), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_ControlTTP, g_nStringIdSP_PeriodControl), 12},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdSP_TimeControlTTP), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_ControlTTP, g_nStringIdSP_TimeControl), 12},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_ControlTTP, g_nStringIdoutKM), 12, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxKM), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_ControlTTP, g_nStringIdcmdControlTTP), 12, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdcmdControlTTP), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_ControlTTP, g_nStringIdxAlarmBreakTTP), 12, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxAlarmCtrlTTP), -1},
};

const SCFB_FBFannedOutConnectionData FORTE_Sub_Heating::scm_astFannedOutDataConnections[] = {
  {0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_AlarmTEN, g_nStringIdAuto), 6},
  {2, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_REAL_DIV, g_nStringIdrIn1), 7},
  {11, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_ControlTTP, g_nStringIdxKM), 12},
  {17, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_ControlTTP, g_nStringIdxReset), 12},
  {24, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_X1_AND_notX2, g_nStringIdxIn1), 9},
  {26, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_X1_AND_notX2, g_nStringIdxIn2), 9},
  {35, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_X1_AND_notX3, g_nStringIdxIn2), 11},
  {36, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_OR, g_nStringIdxIn2), 10},
};

const SCFB_FBNData FORTE_Sub_Heating::scm_stFBNData = {
  13, scm_astInternalFBs,
  14, scm_astEventConnections,
  2, scm_astFannedOutEventConnections,
  37, scm_astDataConnections,
  8, scm_astFannedOutDataConnections,
  8, scm_astParamters
};



