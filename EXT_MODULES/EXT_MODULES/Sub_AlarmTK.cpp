/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: Sub_AlarmTK
 *** Description: Subapplication Type
 *** Version:
***     1.0: 2024-11-11/sergdebwork -  - 
 *************************************************************************/

#include "Sub_AlarmTK.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "Sub_AlarmTK_gen.cpp"
#endif


DEFINE_FIRMWARE_FB(FORTE_Sub_AlarmTK, g_nStringIdSub_AlarmTK)

const CStringDictionary::TStringId FORTE_Sub_AlarmTK::scm_anDataInputNames[] = {g_nStringIdxAuto, g_nStringIdxTK, g_nStringIdxReset};

const CStringDictionary::TStringId FORTE_Sub_AlarmTK::scm_anDataInputTypeIds[] = {g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL};

const CStringDictionary::TStringId FORTE_Sub_AlarmTK::scm_anDataOutputNames[] = {g_nStringIdxAlarmTK};

const CStringDictionary::TStringId FORTE_Sub_AlarmTK::scm_anDataOutputTypeIds[] = {g_nStringIdBOOL};

const TForteInt16 FORTE_Sub_AlarmTK::scm_anEIWithIndexes[] = {-1};
const CStringDictionary::TStringId FORTE_Sub_AlarmTK::scm_anEventInputNames[] = {g_nStringIdREQ};

const TForteInt16 FORTE_Sub_AlarmTK::scm_anEOWithIndexes[] = {-1};
const CStringDictionary::TStringId FORTE_Sub_AlarmTK::scm_anEventOutputNames[] = {g_nStringIdCNF};


const SFBInterfaceSpec FORTE_Sub_AlarmTK::scm_stFBInterfaceSpec = {
  1, scm_anEventInputNames, nullptr, scm_anEIWithIndexes,
  1, scm_anEventOutputNames, nullptr, scm_anEOWithIndexes,
  3, scm_anDataInputNames, scm_anDataInputTypeIds,
  1, scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, nullptr
};

const SCFB_FBInstanceData FORTE_Sub_AlarmTK::scm_astInternalFBs[] = {
  {g_nStringIdFB_TON, g_nStringIdFB_TON},
  {g_nStringIdFB_SR, g_nStringIdFB_SR},
  {g_nStringIdFB_UINT_TO_TIME, g_nStringIdFB_UINT_TO_TIME},
  {g_nStringIdFB_X1_AND_notX2, g_nStringIdFB_X1_AND_notX2}
};

const SCFB_FBParameter FORTE_Sub_AlarmTK::scm_astParamters[] = {
  {2, g_nStringIdInValue, "2"},
  {2, g_nStringIdMultiplier, "1000000000"},
};

const SCFB_FBConnectionData FORTE_Sub_AlarmTK::scm_astEventConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_SR, g_nStringIdCNF), 1, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdCNF), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_UINT_TO_TIME, g_nStringIdCNF), 2, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TON, g_nStringIdREQ), 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TON, g_nStringIdCNF), 0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_SR, g_nStringIdREQ), 1},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdREQ), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_X1_AND_notX2, g_nStringIdREQ), 3},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_X1_AND_notX2, g_nStringIdCNF), 3, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_UINT_TO_TIME, g_nStringIdREQ), 2},
};

const SCFB_FBConnectionData FORTE_Sub_AlarmTK::scm_astDataConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_SR, g_nStringIdQ1), 1, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxAlarmTK), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_UINT_TO_TIME, g_nStringIdTime), 2, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TON, g_nStringIdPT), 0},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxReset), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_SR, g_nStringIdR), 1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TON, g_nStringIdQ), 0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_SR, g_nStringIdS1), 1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_X1_AND_notX2, g_nStringIdxOut), 3, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TON, g_nStringIdIN), 0},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxAuto), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_X1_AND_notX2, g_nStringIdxIn1), 3},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxTK), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_X1_AND_notX2, g_nStringIdxIn2), 3},
};

const SCFB_FBNData FORTE_Sub_AlarmTK::scm_stFBNData = {
  4, scm_astInternalFBs,
  5, scm_astEventConnections,
  0, nullptr,
  7, scm_astDataConnections,
  0, nullptr,
  2, scm_astParamters
};



