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

#include "Sub_SequenceHeatx2.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "Sub_SequenceHeatx2_gen.cpp"
#endif


DEFINE_FIRMWARE_FB(FORTE_Sub_SequenceHeatx2, g_nStringIdSub_SequenceHeatx2)

const CStringDictionary::TStringId FORTE_Sub_SequenceHeatx2::scm_anDataInputNames[] = {g_nStringIdAuto, g_nStringIdEnabledControlTTP, g_nStringIdxFan, g_nStringIdMV, g_nStringIdSP, g_nStringIdDZpid, g_nStringIdDZkm, g_nStringIdHYS, g_nStringIdKp, g_nStringIdTi, g_nStringIdStatusQF, g_nStringIdStatusKMttr, g_nStringIdStatusKM1, g_nStringIdTS, g_nStringIdTkTTP, g_nStringIdxBreakTTR, g_nStringIdReSetAlarm, g_nStringIdSP_DelAlrmKM, g_nStringIdSP_Tppw, g_nStringIdSP_PeriodControlTTP, g_nStringIdSP_TimeControlTTP, g_nStringIdnumLevel};

const CStringDictionary::TStringId FORTE_Sub_SequenceHeatx2::scm_anDataInputTypeIds[] = {g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdREAL, g_nStringIdREAL, g_nStringIdREAL, g_nStringIdREAL, g_nStringIdREAL, g_nStringIdREAL, g_nStringIdREAL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdUINT, g_nStringIdUINT, g_nStringIdUINT, g_nStringIdUINT, g_nStringIdUINT};

const CStringDictionary::TStringId FORTE_Sub_SequenceHeatx2::scm_anDataOutputNames[] = {g_nStringIdxKMttr, g_nStringIdxKM1, g_nStringIdxTTP, g_nStringIdxFanTTP, g_nStringIdcmdControlTTP, g_nStringIdiPower, g_nStringIdxAlarmTEN, g_nStringIdxAlarmQF, g_nStringIdxAlarmKMttr, g_nStringIdxAlarmKM1, g_nStringIdxAlarmTk, g_nStringIdxAlarmTkTTP, g_nStringIdxAlarmCtrlTTP};

const CStringDictionary::TStringId FORTE_Sub_SequenceHeatx2::scm_anDataOutputTypeIds[] = {g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdUINT, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL};

const TForteInt16 FORTE_Sub_SequenceHeatx2::scm_anEIWithIndexes[] = {-1, -1};
const CStringDictionary::TStringId FORTE_Sub_SequenceHeatx2::scm_anEventInputNames[] = {g_nStringIdINIT, g_nStringIdREQ};

const TForteInt16 FORTE_Sub_SequenceHeatx2::scm_anEOWithIndexes[] = {-1, -1};
const CStringDictionary::TStringId FORTE_Sub_SequenceHeatx2::scm_anEventOutputNames[] = {g_nStringIdINITO, g_nStringIdCNF};


const SFBInterfaceSpec FORTE_Sub_SequenceHeatx2::scm_stFBInterfaceSpec = {
  2, scm_anEventInputNames, nullptr, scm_anEIWithIndexes,
  2, scm_anEventOutputNames, nullptr, scm_anEOWithIndexes,
  22, scm_anDataInputNames, scm_anDataInputTypeIds,
  13, scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, nullptr
};

const SCFB_FBInstanceData FORTE_Sub_SequenceHeatx2::scm_astInternalFBs[] = {
  {g_nStringIdFB_PID, g_nStringIdFB_PID},
  {g_nStringIdE_CYCLE, g_nStringIdE_CYCLE},
  {g_nStringIdE_CYCLE_1, g_nStringIdE_CYCLE},
  {g_nStringIdFB_And, g_nStringIdFB_And},
  {g_nStringIdFB_NOT, g_nStringIdFB_NOT},
  {g_nStringIdFB_AlarmTEN, g_nStringIdFB_AlarmTEN},
  {g_nStringIdFB_REAL_DIV, g_nStringIdFB_REAL_DIV},
  {g_nStringIdF_LREAL_TO_UINT, g_nStringIdF_LREAL_TO_UINT},
  {g_nStringIdFB_X1_AND_notX2, g_nStringIdFB_X1_AND_notX2},
  {g_nStringIdFB_X1_AND_notX3, g_nStringIdFB_X1_AND_notX2},
  {g_nStringIdSub_ControlTTP, g_nStringIdSub_ControlTTP},
  {g_nStringIdFB_Heat, g_nStringIdFB_Heat},
  {g_nStringIdFB_Sequense, g_nStringIdFB_Sequense},
  {g_nStringIdarrPowerREALx12, g_nStringIdarrPowerREALx12},
  {g_nStringIdarrKMx4, g_nStringIdarrKMx4},
  {g_nStringIdFB_AlarmTEN_1, g_nStringIdFB_AlarmTEN},
  {g_nStringIdFB_OR, g_nStringIdFB_OR_5},
  {g_nStringIdFB_TOF, g_nStringIdFB_TOF}
};

const SCFB_FBParameter FORTE_Sub_SequenceHeatx2::scm_astParamters[] = {
  {0, g_nStringIdTd, "0"},
  {0, g_nStringIdInterval, "1"},
  {0, g_nStringIdLIM_H, "100"},
  {0, g_nStringIdLIM_L, "0"},
  {0, g_nStringIdY_Manual, "0"},
  {1, g_nStringIdDT, "T#1s"},
  {2, g_nStringIdDT, "T#100ms"},
  {6, g_nStringIdrDiv, "1"},
  {13, g_nStringIdr0, "9"},
  {13, g_nStringIdr1, "6"},
  {15, g_nStringIdStatusQF, "1"},
  {15, g_nStringIdTS, "1"},
  {15, g_nStringIdTkTTP, "1"},
  {17, g_nStringIdPT, "T#30s"},
};

const SCFB_FBConnectionData FORTE_Sub_SequenceHeatx2::scm_astEventConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdINIT), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_CYCLE, g_nStringIdSTART), 1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_CYCLE, g_nStringIdEO), 1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_PID, g_nStringIdREQ), 0},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdREQ), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_And, g_nStringIdREQ), 3},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_And, g_nStringIdCNF), 3, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_NOT, g_nStringIdREQ), 4},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_REAL_DIV, g_nStringIdCNF), 6, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_LREAL_TO_UINT, g_nStringIdREQ), 7},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_X1_AND_notX2, g_nStringIdCNF), 8, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_AlarmTEN, g_nStringIdREQ), 5},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_LREAL_TO_UINT, g_nStringIdCNF), 7, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_ControlTTP, g_nStringIdREQ), 10},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_ControlTTP, g_nStringIdCNF), 10, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_X1_AND_notX3, g_nStringIdREQ), 9},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_CYCLE_1, g_nStringIdEO), 2, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_Heat, g_nStringIdREQ), 11},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_PID, g_nStringIdINTO), 0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdarrPowerREALx12, g_nStringIdINIT), 13},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdarrPowerREALx12, g_nStringIdINTO), 13, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_Sequense, g_nStringIdINIT), 12},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_Sequense, g_nStringIdINTO), 12, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdINITO), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_Sequense, g_nStringIdCNF), 12, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdarrKMx4, g_nStringIdREQ), 14},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdarrKMx4, g_nStringIdCNF), 14, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_REAL_DIV, g_nStringIdREQ), 6},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_AlarmTEN, g_nStringIdCNF), 5, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_AlarmTEN_1, g_nStringIdREQ), 15},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_AlarmTEN_1, g_nStringIdCNF), 15, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_Sequense, g_nStringIdREQ), 12},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_NOT, g_nStringIdCNF), 4, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_OR, g_nStringIdREQ), 16},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_OR, g_nStringIdCNF), 16, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_X1_AND_notX2, g_nStringIdREQ), 8},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_X1_AND_notX3, g_nStringIdCNF), 9, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TOF, g_nStringIdREQ), 17},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TOF, g_nStringIdCNF), 17, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdCNF), -1},
};

const SCFB_FBFannedOutConnectionData FORTE_Sub_SequenceHeatx2::scm_astFannedOutEventConnections[] = {
  {0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_PID, g_nStringIdINIT), 0},
  {0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_CYCLE_1, g_nStringIdSTART), 2},
};

const SCFB_FBConnectionData FORTE_Sub_SequenceHeatx2::scm_astDataConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdAuto), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_And, g_nStringIdxIn1), 3},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxFan), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_And, g_nStringIdxIn2), 3},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdMV), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_PID, g_nStringIdMV), 0},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdSP), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_PID, g_nStringIdSP), 0},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdDZpid), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_PID, g_nStringIdDZ), 0},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdKp), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_PID, g_nStringIdKp), 0},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdTi), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_PID, g_nStringIdTi), 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_NOT, g_nStringIdxOut), 4, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_PID, g_nStringIdManual), 0},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdStatusQF), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_AlarmTEN, g_nStringIdStatusQF), 5},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdStatusKMttr), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_AlarmTEN, g_nStringIdStatusKM), 5},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdTS), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_AlarmTEN, g_nStringIdTS), 5},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdTkTTP), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_AlarmTEN, g_nStringIdTkTTP), 5},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdSP_DelAlrmKM), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_AlarmTEN, g_nStringIdTOn), 5},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdReSetAlarm), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_AlarmTEN, g_nStringIdReSetAlarm), 5},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_AlarmTEN, g_nStringIdAlarmQF), 5, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxAlarmQF), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_AlarmTEN, g_nStringIdAlarmKM), 5, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxAlarmKMttr), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_AlarmTEN, g_nStringIdAlarmTk), 5, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxAlarmTk), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_AlarmTEN, g_nStringIdAlarmTkTTP), 5, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxAlarmTkTTP), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_PID, g_nStringIdY), 0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_REAL_DIV, g_nStringIdrIn1), 6},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_REAL_DIV, g_nStringIdrOut), 6, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_LREAL_TO_UINT, g_nStringIdIN), 7},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_LREAL_TO_UINT, g_nStringIdOUT), 7, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdiPower), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_And, g_nStringIdxOut), 3, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_NOT, g_nStringIdxIn1), 4},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_X1_AND_notX3, g_nStringIdxOut), 9, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxTTP), -1},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdEnabledControlTTP), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_ControlTTP, g_nStringIdxEnableControl), 10},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxBreakTTR), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_ControlTTP, g_nStringIdxBreakTTP), 10},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdSP_PeriodControlTTP), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_ControlTTP, g_nStringIdSP_PeriodControl), 10},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdSP_TimeControlTTP), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_ControlTTP, g_nStringIdSP_TimeControl), 10},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_ControlTTP, g_nStringIdoutKM), 10, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxKMttr), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_ControlTTP, g_nStringIdcmdControlTTP), 10, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdcmdControlTTP), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_ControlTTP, g_nStringIdxAlarmBreakTTP), 10, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxAlarmCtrlTTP), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_X1_AND_notX2, g_nStringIdxOut), 8, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_Heat, g_nStringIdFan), 11},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdHYS), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_Heat, g_nStringIdHYS), 11},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdSP_Tppw), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_Heat, g_nStringIdT_ppw), 11},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_Heat, g_nStringIdoutKM), 11, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_AlarmTEN, g_nStringIdStatusTEN), 5},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_Heat, g_nStringIdoutTTR), 11, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_X1_AND_notX3, g_nStringIdxIn1), 9},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdarrPowerREALx12, g_nStringIdarrREAL), 13, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_Sequense, g_nStringIdarrPower), 12},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdnumLevel), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_Sequense, g_nStringIdnumLevel), 12},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdDZkm), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_Sequense, g_nStringIdprcDZdisableKM), 12},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_Sequense, g_nStringIdoutPWM), 12, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_Heat, g_nStringIdin_PID), 11},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_Sequense, g_nStringIdarrKM), 12, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdarrKMx4, g_nStringIdarrKM), 14},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdarrKMx4, g_nStringIdKM1), 14, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxKM1), -1},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdStatusKM1), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_AlarmTEN_1, g_nStringIdStatusKM), 15},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_AlarmTEN, g_nStringIdAlarmTEN), 5, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_OR, g_nStringIdxIn1), 16},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_OR, g_nStringIdxOut), 16, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxAlarmTEN), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_AlarmTEN_1, g_nStringIdAlarmTEN), 15, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_OR, g_nStringIdxIn4), 16},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_AlarmTEN_1, g_nStringIdAlarmKM), 15, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxAlarmKM1), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TOF, g_nStringIdQ), 17, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxFanTTP), -1},
};

const SCFB_FBFannedOutConnectionData FORTE_Sub_SequenceHeatx2::scm_astFannedOutDataConnections[] = {
  {0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_AlarmTEN, g_nStringIdAuto), 5},
  {0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_AlarmTEN_1, g_nStringIdAuto), 15},
  {12, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_AlarmTEN_1, g_nStringIdTOn), 15},
  {13, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_ControlTTP, g_nStringIdxReset), 10},
  {13, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_AlarmTEN_1, g_nStringIdReSetAlarm), 15},
  {18, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_Heat, g_nStringIdin_PID_hys), 11},
  {18, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_Sequense, g_nStringIdYpid), 12},
  {21, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_X1_AND_notX2, g_nStringIdxIn1), 8},
  {28, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_X1_AND_notX3, g_nStringIdxIn2), 9},
  {29, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_OR, g_nStringIdxIn2), 16},
  {33, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_ControlTTP, g_nStringIdxKM), 10},
  {33, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TOF, g_nStringIdIN), 17},
  {40, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_AlarmTEN_1, g_nStringIdStatusTEN), 15},
  {43, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_X1_AND_notX2, g_nStringIdxIn2), 8},
};

const SCFB_FBNData FORTE_Sub_SequenceHeatx2::scm_stFBNData = {
  18, scm_astInternalFBs,
  20, scm_astEventConnections,
  2, scm_astFannedOutEventConnections,
  47, scm_astDataConnections,
  14, scm_astFannedOutDataConnections,
  14, scm_astParamters
};



