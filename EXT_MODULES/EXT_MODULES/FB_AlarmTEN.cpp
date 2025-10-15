/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: FB_AlarmTEN
 *** Description: Subapplication Type
 *** Version:
***     1.0: 2024-11-25/sergdebwork -  - 
 *************************************************************************/

#include "FB_AlarmTEN.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "FB_AlarmTEN_gen.cpp"
#endif


DEFINE_FIRMWARE_FB(FORTE_FB_AlarmTEN, g_nStringIdFB_AlarmTEN)

const CStringDictionary::TStringId FORTE_FB_AlarmTEN::scm_anDataInputNames[] = {g_nStringIdAuto, g_nStringIdStatusTEN, g_nStringIdStatusQF, g_nStringIdStatusKM, g_nStringIdTS, g_nStringIdTkTTP, g_nStringIdTOn, g_nStringIdReSetAlarm};

const CStringDictionary::TStringId FORTE_FB_AlarmTEN::scm_anDataInputTypeIds[] = {g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdUINT, g_nStringIdBOOL};

const CStringDictionary::TStringId FORTE_FB_AlarmTEN::scm_anDataOutputNames[] = {g_nStringIdAlarmTEN, g_nStringIdAlarmQF, g_nStringIdAlarmKM, g_nStringIdAlarmTk, g_nStringIdAlarmTkTTP};

const CStringDictionary::TStringId FORTE_FB_AlarmTEN::scm_anDataOutputTypeIds[] = {g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL};

const TForteInt16 FORTE_FB_AlarmTEN::scm_anEIWithIndexes[] = {-1};
const CStringDictionary::TStringId FORTE_FB_AlarmTEN::scm_anEventInputNames[] = {g_nStringIdREQ};

const TForteInt16 FORTE_FB_AlarmTEN::scm_anEOWithIndexes[] = {-1};
const CStringDictionary::TStringId FORTE_FB_AlarmTEN::scm_anEventOutputNames[] = {g_nStringIdCNF};


const SFBInterfaceSpec FORTE_FB_AlarmTEN::scm_stFBInterfaceSpec = {
  1, scm_anEventInputNames, nullptr, scm_anEIWithIndexes,
  1, scm_anEventOutputNames, nullptr, scm_anEOWithIndexes,
  8, scm_anDataInputNames, scm_anDataInputTypeIds,
  5, scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, nullptr
};

const SCFB_FBInstanceData FORTE_FB_AlarmTEN::scm_astInternalFBs[] = {
  {g_nStringIdFB_RS, g_nStringIdFB_RS},
  {g_nStringIdFB_X1_AND_notX2, g_nStringIdFB_X1_AND_notX2},
  {g_nStringIdFB_TON, g_nStringIdFB_TON},
  {g_nStringIdFB_RS_1, g_nStringIdFB_RS},
  {g_nStringIdFB_RS_2, g_nStringIdFB_RS},
  {g_nStringIdFB_RS_3, g_nStringIdFB_RS},
  {g_nStringIdFB_OR_5, g_nStringIdFB_OR_5},
  {g_nStringIdFB_UINT_TO_TIME, g_nStringIdFB_UINT_TO_TIME},
  {g_nStringIdFB_X1_AND_notX3, g_nStringIdFB_X1_AND_notX2},
  {g_nStringIdFB_And, g_nStringIdFB_And},
  {g_nStringIdFB_X1_AND_notX4, g_nStringIdFB_X1_AND_notX2},
  {g_nStringIdFB_X1_AND_notX5, g_nStringIdFB_X1_AND_notX2}
};

const SCFB_FBParameter FORTE_FB_AlarmTEN::scm_astParamters[] = {
  {7, g_nStringIdMultiplier, "1000000000"},
};

const SCFB_FBConnectionData FORTE_FB_AlarmTEN::scm_astEventConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TON, g_nStringIdCNF), 2, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_X1_AND_notX2, g_nStringIdREQ), 1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_X1_AND_notX2, g_nStringIdCNF), 1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_RS_1, g_nStringIdREQ), 3},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_RS_3, g_nStringIdCNF), 5, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_OR_5, g_nStringIdREQ), 6},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_OR_5, g_nStringIdCNF), 6, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdCNF), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_RS, g_nStringIdCNF), 0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_UINT_TO_TIME, g_nStringIdREQ), 7},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdREQ), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_X1_AND_notX3, g_nStringIdREQ), 8},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_X1_AND_notX3, g_nStringIdCNF), 8, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_RS, g_nStringIdREQ), 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_UINT_TO_TIME, g_nStringIdCNF), 7, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_And, g_nStringIdREQ), 9},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_And, g_nStringIdCNF), 9, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TON, g_nStringIdREQ), 2},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_RS_1, g_nStringIdCNF), 3, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_X1_AND_notX4, g_nStringIdREQ), 10},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_X1_AND_notX4, g_nStringIdCNF), 10, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_RS_2, g_nStringIdREQ), 4},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_RS_2, g_nStringIdCNF), 4, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_X1_AND_notX5, g_nStringIdREQ), 11},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_X1_AND_notX5, g_nStringIdCNF), 11, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_RS_3, g_nStringIdREQ), 5},
};

const SCFB_FBConnectionData FORTE_FB_AlarmTEN::scm_astDataConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_RS, g_nStringIdQ1), 0, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdAlarmQF), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TON, g_nStringIdQ), 2, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_X1_AND_notX2, g_nStringIdxIn1), 1},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdStatusKM), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_X1_AND_notX2, g_nStringIdxIn2), 1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_X1_AND_notX2, g_nStringIdxOut), 1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_RS_1, g_nStringIdS), 3},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_RS_1, g_nStringIdQ1), 3, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdAlarmKM), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_RS_2, g_nStringIdQ1), 4, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdAlarmTk), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_RS_3, g_nStringIdQ1), 5, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdAlarmTkTTP), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_OR_5, g_nStringIdxOut), 6, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdAlarmTEN), -1},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdReSetAlarm), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_RS, g_nStringIdR1), 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_UINT_TO_TIME, g_nStringIdTime), 7, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TON, g_nStringIdPT), 2},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdTOn), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_UINT_TO_TIME, g_nStringIdInValue), 7},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdAuto), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_X1_AND_notX3, g_nStringIdxIn1), 8},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdStatusQF), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_X1_AND_notX3, g_nStringIdxIn2), 8},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_X1_AND_notX3, g_nStringIdxOut), 8, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_RS, g_nStringIdS), 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_And, g_nStringIdxOut), 9, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TON, g_nStringIdIN), 2},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdStatusTEN), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_And, g_nStringIdxIn2), 9},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_X1_AND_notX4, g_nStringIdxOut), 10, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_RS_2, g_nStringIdS), 4},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdTS), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_X1_AND_notX4, g_nStringIdxIn2), 10},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdTkTTP), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_X1_AND_notX5, g_nStringIdxIn2), 11},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_X1_AND_notX5, g_nStringIdxOut), 11, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_RS_3, g_nStringIdS), 5},
};

const SCFB_FBFannedOutConnectionData FORTE_FB_AlarmTEN::scm_astFannedOutDataConnections[] = {
  {0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_OR_5, g_nStringIdxIn1), 6},
  {4, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_OR_5, g_nStringIdxIn2), 6},
  {5, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_OR_5, g_nStringIdxIn3), 6},
  {6, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_OR_5, g_nStringIdxIn4), 6},
  {8, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_RS_1, g_nStringIdR1), 3},
  {8, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_RS_2, g_nStringIdR1), 4},
  {8, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_RS_3, g_nStringIdR1), 5},
  {11, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_And, g_nStringIdxIn1), 9},
  {11, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_X1_AND_notX4, g_nStringIdxIn1), 10},
  {11, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_X1_AND_notX5, g_nStringIdxIn1), 11},
};

const SCFB_FBNData FORTE_FB_AlarmTEN::scm_stFBNData = {
  12, scm_astInternalFBs,
  13, scm_astEventConnections,
  0, nullptr,
  20, scm_astDataConnections,
  10, scm_astFannedOutDataConnections,
  1, scm_astParamters
};



