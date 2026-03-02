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

#include "Sub_AlarmTEN.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "Sub_AlarmTEN_gen.cpp"
#endif


DEFINE_FIRMWARE_FB(FORTE_Sub_AlarmTEN, g_nStringIdSub_AlarmTEN)

const CStringDictionary::TStringId FORTE_Sub_AlarmTEN::scm_anDataInputNames[] = {g_nStringIdxAuto, g_nStringIdxStart_KM1, g_nStringIdxStart_KM2, g_nStringIdxStatusKM1_TEN, g_nStringIdxStatusKM2_TEN, g_nStringIdxStatusQF_TEN, g_nStringIdxStatusTK_TEN, g_nStringIdxStatusTK_TTR, g_nStringIdxStatusTEN, g_nStringIdxBreakTTR, g_nStringIdxAlarmReset, g_nStringIdSP_PeriodControlTTR};

const CStringDictionary::TStringId FORTE_Sub_AlarmTEN::scm_anDataInputTypeIds[] = {g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdUINT};

const CStringDictionary::TStringId FORTE_Sub_AlarmTEN::scm_anDataOutputNames[] = {g_nStringIdxAlarmKM1, g_nStringIdxAlarmKM2, g_nStringIdxAlarmQF, g_nStringIdxAlarmTK_TEN, g_nStringIdxAlarmTK_TTR, g_nStringIdxAlarmBreakdownTTR, g_nStringIdxAlarmTEN, g_nStringIdcmdControlTTR};

const CStringDictionary::TStringId FORTE_Sub_AlarmTEN::scm_anDataOutputTypeIds[] = {g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL};

const TForteInt16 FORTE_Sub_AlarmTEN::scm_anEIWithIndexes[] = {-1, -1};
const CStringDictionary::TStringId FORTE_Sub_AlarmTEN::scm_anEventInputNames[] = {g_nStringIdINIT, g_nStringIdREQ};

const TForteInt16 FORTE_Sub_AlarmTEN::scm_anEOWithIndexes[] = {-1, -1};
const CStringDictionary::TStringId FORTE_Sub_AlarmTEN::scm_anEventOutputNames[] = {g_nStringIdINITO, g_nStringIdCNF};


const SFBInterfaceSpec FORTE_Sub_AlarmTEN::scm_stFBInterfaceSpec = {
  2, scm_anEventInputNames, nullptr, scm_anEIWithIndexes,
  2, scm_anEventOutputNames, nullptr, scm_anEOWithIndexes,
  12, scm_anDataInputNames, scm_anDataInputTypeIds,
  8, scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, nullptr
};

const SCFB_FBInstanceData FORTE_Sub_AlarmTEN::scm_astInternalFBs[] = {
  {g_nStringIdSub_AlarmKM_1, g_nStringIdSub_AlarmKM},
  {g_nStringIdSub_AlarmKM_2, g_nStringIdSub_AlarmKM},
  {g_nStringIdSub_AlarmTK_TEN, g_nStringIdSub_AlarmTK},
  {g_nStringIdSub_AlarmTK_TTR, g_nStringIdSub_AlarmTK},
  {g_nStringIdFB_OR_6, g_nStringIdFB_OR_6},
  {g_nStringIdFB_TON, g_nStringIdFB_TON},
  {g_nStringIdSub_AlarmQF, g_nStringIdSub_AlarmQF},
  {g_nStringIdSub_ControlBreakTTR_0, g_nStringIdSub_ControlBreakTTR}
};

const SCFB_FBParameter FORTE_Sub_AlarmTEN::scm_astParamters[] = {
  {0, g_nStringIdSP_DelAlrmKM_OnFan, "3"},
  {0, g_nStringIdSP_DelAlrmKM_OffFan, "3"},
  {1, g_nStringIdSP_DelAlrmKM_OnFan, "3"},
  {1, g_nStringIdSP_DelAlrmKM_OffFan, "3"},
  {5, g_nStringIdPT, "T#0s"},
};

const SCFB_FBConnectionData FORTE_Sub_AlarmTEN::scm_astEventConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdREQ), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_AlarmKM_1, g_nStringIdREQ), 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_AlarmKM_1, g_nStringIdCNF), 0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_AlarmKM_2, g_nStringIdREQ), 1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_AlarmTK_TEN, g_nStringIdCNF), 2, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_AlarmTK_TTR, g_nStringIdREQ), 3},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_OR_6, g_nStringIdCNF), 4, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdCNF), -1},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdINIT), -1, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdINITO), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TON, g_nStringIdCNF), 5, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_OR_6, g_nStringIdREQ), 4},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_AlarmKM_2, g_nStringIdCNF), 1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_AlarmQF, g_nStringIdREQ), 6},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_AlarmQF, g_nStringIdCNF), 6, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_AlarmTK_TEN, g_nStringIdREQ), 2},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_AlarmTK_TTR, g_nStringIdCNF), 3, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_ControlBreakTTR_0, g_nStringIdREQ), 7},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_ControlBreakTTR_0, g_nStringIdCNF), 7, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TON, g_nStringIdREQ), 5},
};

const SCFB_FBConnectionData FORTE_Sub_AlarmTEN::scm_astDataConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_AlarmKM_1, g_nStringIdxAlarmKM), 0, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxAlarmKM1), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_AlarmKM_2, g_nStringIdxAlarmKM), 1, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxAlarmKM2), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_AlarmTK_TEN, g_nStringIdxAlarmTK), 2, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxAlarmTK_TEN), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_AlarmTK_TTR, g_nStringIdxAlarmTK), 3, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxAlarmTK_TTR), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_OR_6, g_nStringIdxOut), 4, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxAlarmTEN), -1},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxAuto), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_AlarmKM_1, g_nStringIdxAuto), 0},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxStart_KM1), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_AlarmKM_1, g_nStringIdxStart), 0},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxStatusKM1_TEN), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_AlarmKM_1, g_nStringIdxKM), 0},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxAlarmReset), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_AlarmKM_1, g_nStringIdxReset), 0},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxStart_KM2), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_AlarmKM_2, g_nStringIdxStart), 1},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxStatusKM2_TEN), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_AlarmKM_2, g_nStringIdxKM), 1},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxStatusTK_TEN), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_AlarmTK_TEN, g_nStringIdxTK), 2},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxStatusTK_TTR), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_AlarmTK_TTR, g_nStringIdxTK), 3},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxBreakTTR), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TON, g_nStringIdIN), 5},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxStatusQF_TEN), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_AlarmQF, g_nStringIdxQF), 6},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_AlarmQF, g_nStringIdxAlarmQF), 6, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxAlarmQF), -1},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxStatusTEN), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_ControlBreakTTR_0, g_nStringIdxStatusTEN), 7},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TON, g_nStringIdQ), 5, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_ControlBreakTTR_0, g_nStringIdxControlU_TTR), 7},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdSP_PeriodControlTTR), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_ControlBreakTTR_0, g_nStringIdSP_PeriodControlTTR), 7},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_ControlBreakTTR_0, g_nStringIdxInitialize), 7, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdcmdControlTTR), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_ControlBreakTTR_0, g_nStringIdxAlarmBreakdownTTR), 7, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxAlarmBreakdownTTR), -1},
};

const SCFB_FBFannedOutConnectionData FORTE_Sub_AlarmTEN::scm_astFannedOutDataConnections[] = {
  {0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_OR_6, g_nStringIdxIn1), 4},
  {1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_OR_6, g_nStringIdxIn2), 4},
  {2, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_OR_6, g_nStringIdxIn4), 4},
  {3, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_OR_6, g_nStringIdxIn5), 4},
  {5, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_AlarmKM_2, g_nStringIdxAuto), 1},
  {5, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_AlarmTK_TEN, g_nStringIdxAuto), 2},
  {5, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_AlarmTK_TTR, g_nStringIdxAuto), 3},
  {5, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_AlarmQF, g_nStringIdxAuto), 6},
  {5, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_ControlBreakTTR_0, g_nStringIdxAuto), 7},
  {8, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_AlarmKM_2, g_nStringIdxReset), 1},
  {8, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_AlarmTK_TEN, g_nStringIdxReset), 2},
  {8, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_AlarmTK_TTR, g_nStringIdxReset), 3},
  {8, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_AlarmQF, g_nStringIdxReset), 6},
  {8, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_ControlBreakTTR_0, g_nStringIdxResetAlarm), 7},
  {15, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_OR_6, g_nStringIdxIn3), 4},
  {20, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_OR_6, g_nStringIdxIn6), 4},
};

const SCFB_FBNData FORTE_Sub_AlarmTEN::scm_stFBNData = {
  8, scm_astInternalFBs,
  10, scm_astEventConnections,
  0, nullptr,
  21, scm_astDataConnections,
  16, scm_astFannedOutDataConnections,
  5, scm_astParamters
};



