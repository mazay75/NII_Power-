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

#include "Sub_AlarmsRed.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "Sub_AlarmsRed_gen.cpp"
#endif


DEFINE_FIRMWARE_FB(FORTE_Sub_AlarmsRed, g_nStringIdSub_AlarmsRed)

const CStringDictionary::TStringId FORTE_Sub_AlarmsRed::scm_anDataInputNames[] = {g_nStringIdxFan1, g_nStringIdxFan2, g_nStringIdxAlarmFan1, g_nStringIdxAlarmFan2, g_nStringIdxAlarmDamp1, g_nStringIdxAlarmDamp2, g_nStringIdxAlarmTEN1, g_nStringIdxAlarmTEN2, g_nStringIdxStatusU, g_nStringIdxStatusExtLine, g_nStringIdxBlockStatus, g_nStringIdSP_BlockAlarm, g_nStringIdResetAlarm};

const CStringDictionary::TStringId FORTE_Sub_AlarmsRed::scm_anDataInputTypeIds[] = {g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdUINT, g_nStringIdBOOL};

const CStringDictionary::TStringId FORTE_Sub_AlarmsRed::scm_anDataOutputNames[] = {g_nStringIdxGlobalAlarm, g_nStringIdxAlarmU, g_nStringIdxAlarmExtLine, g_nStringIdxBlockAlarm};

const CStringDictionary::TStringId FORTE_Sub_AlarmsRed::scm_anDataOutputTypeIds[] = {g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL};

const TForteInt16 FORTE_Sub_AlarmsRed::scm_anEIWithIndexes[] = {-1};
const CStringDictionary::TStringId FORTE_Sub_AlarmsRed::scm_anEventInputNames[] = {g_nStringIdREQ};

const TForteInt16 FORTE_Sub_AlarmsRed::scm_anEOWithIndexes[] = {-1};
const CStringDictionary::TStringId FORTE_Sub_AlarmsRed::scm_anEventOutputNames[] = {g_nStringIdCNF};


const SFBInterfaceSpec FORTE_Sub_AlarmsRed::scm_stFBInterfaceSpec = {
  1, scm_anEventInputNames, nullptr, scm_anEIWithIndexes,
  1, scm_anEventOutputNames, nullptr, scm_anEOWithIndexes,
  13, scm_anDataInputNames, scm_anDataInputTypeIds,
  4, scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, nullptr
};

const SCFB_FBInstanceData FORTE_Sub_AlarmsRed::scm_astInternalFBs[] = {
  {g_nStringIdFB_OR_5, g_nStringIdFB_OR_5},
  {g_nStringIdFB_OR_6, g_nStringIdFB_OR_5},
  {g_nStringIdFB_And, g_nStringIdFB_And},
  {g_nStringIdFB_TOF, g_nStringIdFB_TOF},
  {g_nStringIdFB_NOT, g_nStringIdFB_NOT},
  {g_nStringIdFB_X1_AND_notX2, g_nStringIdFB_X1_AND_notX2},
  {g_nStringIdFB_TON, g_nStringIdFB_TON},
  {g_nStringIdFB_UINT_TO_TIME, g_nStringIdFB_UINT_TO_TIME},
  {g_nStringIdFB_OR, g_nStringIdFB_OR},
  {g_nStringIdFB_RS, g_nStringIdFB_RS},
  {g_nStringIdFB_OR_7, g_nStringIdFB_OR_5},
  {g_nStringIdFB_TOF_1, g_nStringIdFB_TOF},
  {g_nStringIdFB_NOT_1, g_nStringIdFB_NOT}
};

const SCFB_FBParameter FORTE_Sub_AlarmsRed::scm_astParamters[] = {
  {3, g_nStringIdPT, "T#1s"},
  {7, g_nStringIdMultiplier, "1000000000"},
  {11, g_nStringIdPT, "T#1s"},
};

const SCFB_FBConnectionData FORTE_Sub_AlarmsRed::scm_astEventConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdREQ), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_OR_5, g_nStringIdREQ), 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_OR_5, g_nStringIdCNF), 0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_OR_6, g_nStringIdREQ), 1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_OR, g_nStringIdCNF), 8, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_X1_AND_notX2, g_nStringIdREQ), 5},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_X1_AND_notX2, g_nStringIdCNF), 5, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_UINT_TO_TIME, g_nStringIdREQ), 7},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_UINT_TO_TIME, g_nStringIdCNF), 7, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TON, g_nStringIdREQ), 6},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TON, g_nStringIdCNF), 6, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_RS, g_nStringIdREQ), 9},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_RS, g_nStringIdCNF), 9, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_And, g_nStringIdREQ), 2},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_And, g_nStringIdCNF), 2, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_OR_7, g_nStringIdREQ), 10},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_OR_7, g_nStringIdCNF), 10, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdCNF), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_OR_6, g_nStringIdCNF), 1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TOF, g_nStringIdREQ), 3},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TOF, g_nStringIdCNF), 3, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TOF_1, g_nStringIdREQ), 11},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TOF_1, g_nStringIdCNF), 11, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_NOT, g_nStringIdREQ), 4},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_NOT, g_nStringIdCNF), 4, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_NOT_1, g_nStringIdREQ), 12},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_NOT_1, g_nStringIdCNF), 12, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_OR, g_nStringIdREQ), 8},
};

const SCFB_FBConnectionData FORTE_Sub_AlarmsRed::scm_astDataConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxAlarmFan1), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_OR_5, g_nStringIdxIn2), 0},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxAlarmDamp1), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_OR_5, g_nStringIdxIn3), 0},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxAlarmTEN1), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_OR_5, g_nStringIdxIn4), 0},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxAlarmFan2), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_OR_6, g_nStringIdxIn2), 1},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxAlarmDamp2), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_OR_6, g_nStringIdxIn3), 1},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxAlarmTEN2), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_OR_6, g_nStringIdxIn4), 1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_OR_5, g_nStringIdxOut), 0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_And, g_nStringIdxIn1), 2},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_OR_6, g_nStringIdxOut), 1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_And, g_nStringIdxIn2), 2},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_UINT_TO_TIME, g_nStringIdTime), 7, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TON, g_nStringIdPT), 6},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_X1_AND_notX2, g_nStringIdxOut), 5, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TON, g_nStringIdIN), 6},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdSP_BlockAlarm), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_UINT_TO_TIME, g_nStringIdInValue), 7},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_OR, g_nStringIdxOut), 8, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_X1_AND_notX2, g_nStringIdxIn1), 5},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxBlockStatus), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_X1_AND_notX2, g_nStringIdxIn2), 5},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxFan1), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_OR, g_nStringIdxIn1), 8},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxFan2), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_OR, g_nStringIdxIn2), 8},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TON, g_nStringIdQ), 6, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_RS, g_nStringIdS), 9},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdResetAlarm), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_RS, g_nStringIdR1), 9},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_And, g_nStringIdxOut), 2, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_OR_7, g_nStringIdxIn1), 10},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_OR_7, g_nStringIdxOut), 10, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxGlobalAlarm), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_NOT, g_nStringIdxOut), 4, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxAlarmU), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_RS, g_nStringIdQ1), 9, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxBlockAlarm), -1},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxStatusU), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TOF, g_nStringIdIN), 3},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxStatusExtLine), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TOF_1, g_nStringIdIN), 11},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TOF, g_nStringIdQ), 3, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_NOT, g_nStringIdxIn1), 4},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TOF_1, g_nStringIdQ), 11, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_NOT_1, g_nStringIdxIn1), 12},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_NOT_1, g_nStringIdxOut), 12, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxAlarmExtLine), -1},
};

const SCFB_FBFannedOutConnectionData FORTE_Sub_AlarmsRed::scm_astFannedOutDataConnections[] = {
  {19, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_OR_7, g_nStringIdxIn2), 10},
  {20, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_OR_7, g_nStringIdxIn3), 10},
  {25, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_OR_7, g_nStringIdxIn4), 10},
};

const SCFB_FBNData FORTE_Sub_AlarmsRed::scm_stFBNData = {
  13, scm_astInternalFBs,
  14, scm_astEventConnections,
  0, nullptr,
  26, scm_astDataConnections,
  3, scm_astFannedOutDataConnections,
  3, scm_astParamters
};



