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

#include "Sub_TEN_2Stages.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "Sub_TEN_2Stages_gen.cpp"
#endif


DEFINE_FIRMWARE_FB(FORTE_Sub_TEN_2Stages, g_nStringIdSub_TEN_2Stages)

const CStringDictionary::TStringId FORTE_Sub_TEN_2Stages::scm_anDataInputNames[] = {g_nStringIdxAuto, g_nStringIdxStart, g_nStringIdxStatusKM1_TEN, g_nStringIdxStatusKM2_TEN, g_nStringIdxStatusDPD, g_nStringIdxStatusKM_Fan, g_nStringIdxStatusDamp, g_nStringIdxStatusQF_TEN, g_nStringIdxStatusTK_TEN, g_nStringIdxStatusTK_TTR, g_nStringIdxBreakTTR, g_nStringIdxResetAlarm, g_nStringIdrTE_Sup, g_nStringIdSP_TEsup, g_nStringIdSP_dTemp, g_nStringIdSP_DelTiimeONstage1, g_nStringIdSP_DelTiimeOFFstage2, g_nStringIdSP_PeriodControlTTR, g_nStringIdSP_TPpwm, g_nStringIdSP_Kp, g_nStringIdSP_Ti};

const CStringDictionary::TStringId FORTE_Sub_TEN_2Stages::scm_anDataInputTypeIds[] = {g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdREAL, g_nStringIdREAL, g_nStringIdUINT, g_nStringIdUINT, g_nStringIdUINT, g_nStringIdUINT, g_nStringIdUINT, g_nStringIdREAL, g_nStringIdREAL};

const CStringDictionary::TStringId FORTE_Sub_TEN_2Stages::scm_anDataOutputNames[] = {g_nStringIdxHeatBan, g_nStringIdxWorkTEN, g_nStringIdStage1OR2, g_nStringIdxKM2_TEN, g_nStringIdxFanTTR, g_nStringIdxPulseWidth, g_nStringIdcmdControlTTR, g_nStringIdrYout, g_nStringIdxAlarmKM1_TEN, g_nStringIdxAlarmKM2_TEN, g_nStringIdxAlarmQF_TEN, g_nStringIdxAlarmTK_TEN, g_nStringIdxAlarmTK_TTR, g_nStringIdxAlarmBreakdownTTR, g_nStringIdxAlarmTEN, g_nStringIdET, g_nStringIdTestNotManMod};

const CStringDictionary::TStringId FORTE_Sub_TEN_2Stages::scm_anDataOutputTypeIds[] = {g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdREAL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdTIME, g_nStringIdBOOL};

const TForteInt16 FORTE_Sub_TEN_2Stages::scm_anEIWithIndexes[] = {-1, -1};
const CStringDictionary::TStringId FORTE_Sub_TEN_2Stages::scm_anEventInputNames[] = {g_nStringIdINIT, g_nStringIdREQ};

const TForteInt16 FORTE_Sub_TEN_2Stages::scm_anEOWithIndexes[] = {-1, -1};
const CStringDictionary::TStringId FORTE_Sub_TEN_2Stages::scm_anEventOutputNames[] = {g_nStringIdINTO, g_nStringIdCNF};


const SFBInterfaceSpec FORTE_Sub_TEN_2Stages::scm_stFBInterfaceSpec = {
  2, scm_anEventInputNames, nullptr, scm_anEIWithIndexes,
  2, scm_anEventOutputNames, nullptr, scm_anEOWithIndexes,
  21, scm_anDataInputNames, scm_anDataInputTypeIds,
  17, scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, nullptr
};

const SCFB_FBInstanceData FORTE_Sub_TEN_2Stages::scm_astInternalFBs[] = {
  {g_nStringIdF_SEL, g_nStringIdF_SEL},
  {g_nStringIdE_CYCLE, g_nStringIdE_CYCLE},
  {g_nStringIdFB_TOF, g_nStringIdFB_TOF},
  {g_nStringIdF_INT_TO_UINT, g_nStringIdF_INT_TO_UINT},
  {g_nStringIdFB_WorkTEN_0, g_nStringIdFB_WorkTEN},
  {g_nStringIdFB_PID, g_nStringIdFB_PID},
  {g_nStringIdFB_cManModPID_TEN, g_nStringIdFB_cManModPID_TEN},
  {g_nStringIdFB_OR, g_nStringIdFB_OR},
  {g_nStringIdFB_PWM, g_nStringIdSub_PWM2},
  {g_nStringIdSub_AlarmTEN, g_nStringIdSub_AlarmTEN},
  {g_nStringIdSub_2Stages, g_nStringIdSub_2Stages}
};

const SCFB_FBParameter FORTE_Sub_TEN_2Stages::scm_astParamters[] = {
  {1, g_nStringIdDT, "T#1s"},
  {2, g_nStringIdPT, "T#60s"},
  {3, g_nStringIdIN, "0"},
  {5, g_nStringIdDZ, "0.5"},
  {5, g_nStringIdTd, "0"},
  {5, g_nStringIdInterval, "1"},
  {5, g_nStringIdLIM_H, "100"},
  {5, g_nStringIdLIM_L, "0"},
};

const SCFB_FBConnectionData FORTE_Sub_TEN_2Stages::scm_astEventConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdREQ), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_CYCLE, g_nStringIdSTART), 1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_SEL, g_nStringIdCNF), 0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_INT_TO_UINT, g_nStringIdREQ), 3},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_CYCLE, g_nStringIdEO), 1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_PID, g_nStringIdREQ), 5},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TOF, g_nStringIdCNF), 2, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_OR, g_nStringIdREQ), 7},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_OR, g_nStringIdCNF), 7, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdCNF), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_INT_TO_UINT, g_nStringIdCNF), 3, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_PWM, g_nStringIdREQ), 8},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_PWM, g_nStringIdCNF), 8, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TOF, g_nStringIdREQ), 2},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdINIT), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_AlarmTEN, g_nStringIdINIT), 9},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_WorkTEN_0, g_nStringIdCNF), 4, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_AlarmTEN, g_nStringIdREQ), 9},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_AlarmTEN, g_nStringIdINITO), 9, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_PID, g_nStringIdINIT), 5},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_AlarmTEN, g_nStringIdCNF), 9, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_cManModPID_TEN, g_nStringIdREQ), 6},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_PID, g_nStringIdINTO), 5, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_2Stages, g_nStringIdINIT), 10},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_cManModPID_TEN, g_nStringIdCNF), 6, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_2Stages, g_nStringIdREQ), 10},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_2Stages, g_nStringIdINITO), 10, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdINTO), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_2Stages, g_nStringIdCNF), 10, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_SEL, g_nStringIdREQ), 0},
};

const SCFB_FBFannedOutConnectionData FORTE_Sub_TEN_2Stages::scm_astFannedOutEventConnections[] = {
  {0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_WorkTEN_0, g_nStringIdREQ), 4},
};

const SCFB_FBConnectionData FORTE_Sub_TEN_2Stages::scm_astDataConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_INT_TO_UINT, g_nStringIdOUT), 3, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_SEL, g_nStringIdIN1), 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TOF, g_nStringIdQ), 2, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxFanTTR), -1},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxAuto), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_WorkTEN_0, g_nStringIdxAuto), 4},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxStart), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_WorkTEN_0, g_nStringIdxStart), 4},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxStatusDPD), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_WorkTEN_0, g_nStringIdxStatusDPD), 4},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxStatusKM_Fan), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_WorkTEN_0, g_nStringIdxStatusKM_Fan), 4},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxStatusDamp), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_WorkTEN_0, g_nStringIdxStatusDamp), 4},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxStatusQF_TEN), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_WorkTEN_0, g_nStringIdxStatusQF_TEN), 4},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxStatusTK_TEN), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_WorkTEN_0, g_nStringIdxStatusTK_TEN), 4},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdrTE_Sup), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_WorkTEN_0, g_nStringIdrTE_Sup), 4},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_WorkTEN_0, g_nStringIdxHeatingBan), 4, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxHeatBan), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_WorkTEN_0, g_nStringIdxWork_TEN), 4, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxWorkTEN), -1},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdSP_TEsup), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_PID, g_nStringIdSP), 5},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdSP_Kp), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_PID, g_nStringIdKp), 5},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdSP_Ti), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_PID, g_nStringIdTi), 5},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_PID, g_nStringIdY), 5, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_SEL, g_nStringIdIN0), 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_cManModPID_TEN, g_nStringIdrManVal), 6, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_PID, g_nStringIdY_Manual), 5},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_cManModPID_TEN, g_nStringIdManMod), 6, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_SEL, g_nStringIdG), 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_cManModPID_TEN, g_nStringIdNotManMod), 6, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdTestNotManMod), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_OR, g_nStringIdxOut), 7, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdStage1OR2), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_SEL, g_nStringIdOUT), 0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_PWM, g_nStringIdrY), 8},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdSP_TPpwm), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_PWM, g_nStringIdSP_Tp), 8},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_PWM, g_nStringIdxPulseWidth), 8, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxPulseWidth), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_PWM, g_nStringIdrYout), 8, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdrYout), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_PWM, g_nStringIdET), 8, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdET), -1},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxStatusKM1_TEN), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_AlarmTEN, g_nStringIdxStatusKM1_TEN), 9},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxStatusKM2_TEN), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_AlarmTEN, g_nStringIdxStatusKM2_TEN), 9},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxStatusTK_TTR), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_AlarmTEN, g_nStringIdxStatusTK_TTR), 9},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxBreakTTR), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_AlarmTEN, g_nStringIdxBreakTTR), 9},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxResetAlarm), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_AlarmTEN, g_nStringIdxAlarmReset), 9},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdSP_PeriodControlTTR), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_AlarmTEN, g_nStringIdSP_PeriodControlTTR), 9},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_AlarmTEN, g_nStringIdxAlarmKM1), 9, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxAlarmKM1_TEN), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_AlarmTEN, g_nStringIdxAlarmKM2), 9, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxAlarmKM2_TEN), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_AlarmTEN, g_nStringIdxAlarmQF), 9, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxAlarmQF_TEN), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_AlarmTEN, g_nStringIdxAlarmTK_TEN), 9, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxAlarmTK_TEN), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_AlarmTEN, g_nStringIdxAlarmTK_TTR), 9, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxAlarmTK_TTR), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_AlarmTEN, g_nStringIdxAlarmBreakdownTTR), 9, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxAlarmBreakdownTTR), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_AlarmTEN, g_nStringIdxAlarmTEN), 9, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxAlarmTEN), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_AlarmTEN, g_nStringIdcmdControlTTR), 9, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdcmdControlTTR), -1},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdSP_dTemp), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_2Stages, g_nStringIdSP_dT), 10},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdSP_DelTiimeONstage1), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_2Stages, g_nStringIdSP_DelTimeONstage1), 10},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdSP_DelTiimeOFFstage2), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_2Stages, g_nStringIdSP_DelTimeOFFstage2), 10},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_2Stages, g_nStringIdxStage1), 10, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_cManModPID_TEN, g_nStringIdxStart), 6},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_2Stages, g_nStringIdxStage2), 10, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxKM2_TEN), -1},
};

const SCFB_FBFannedOutConnectionData FORTE_Sub_TEN_2Stages::scm_astFannedOutDataConnections[] = {
  {2, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_AlarmTEN, g_nStringIdxAuto), 9},
  {7, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_AlarmTEN, g_nStringIdxStatusQF_TEN), 9},
  {8, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_AlarmTEN, g_nStringIdxStatusTK_TEN), 9},
  {9, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_PID, g_nStringIdMV), 5},
  {9, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_2Stages, g_nStringIdrTsup), 10},
  {11, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TOF, g_nStringIdIN), 2},
  {11, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_AlarmTEN, g_nStringIdxStart_KM1), 9},
  {11, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_AlarmTEN, g_nStringIdxStatusTEN), 9},
  {11, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_2Stages, g_nStringIdxStart), 10},
  {12, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_2Stages, g_nStringIdSP_Tsup), 10},
  {15, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_cManModPID_TEN, g_nStringIdYout), 6},
  {17, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_PID, g_nStringIdManual), 5},
  {18, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_PWM, g_nStringIdxStart), 8},
  {37, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_WorkTEN_0, g_nStringIdxAlarmTEN), 4},
  {37, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_cManModPID_TEN, g_nStringIdxAlarmTEN), 6},
  {38, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_cManModPID_TEN, g_nStringIdxInitialize), 6},
  {42, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_OR, g_nStringIdxIn1), 7},
  {43, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_OR, g_nStringIdxIn2), 7},
  {43, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_AlarmTEN, g_nStringIdxStart_KM2), 9},
};

const SCFB_FBNData FORTE_Sub_TEN_2Stages::scm_stFBNData = {
  11, scm_astInternalFBs,
  15, scm_astEventConnections,
  1, scm_astFannedOutEventConnections,
  44, scm_astDataConnections,
  19, scm_astFannedOutDataConnections,
  8, scm_astParamters
};



