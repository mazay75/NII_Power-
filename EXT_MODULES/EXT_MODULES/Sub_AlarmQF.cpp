/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: Sub_AlarmQF
 *** Description: Subapplication Type
 *** Version:
***     1.0: 2024-11-11/sergdebwork -  - 
 *************************************************************************/

#include "Sub_AlarmQF.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "Sub_AlarmQF_gen.cpp"
#endif


DEFINE_FIRMWARE_FB(FORTE_Sub_AlarmQF, g_nStringIdSub_AlarmQF)

const CStringDictionary::TStringId FORTE_Sub_AlarmQF::scm_anDataInputNames[] = {g_nStringIdxAuto, g_nStringIdxQF, g_nStringIdxReset};

const CStringDictionary::TStringId FORTE_Sub_AlarmQF::scm_anDataInputTypeIds[] = {g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL};

const CStringDictionary::TStringId FORTE_Sub_AlarmQF::scm_anDataOutputNames[] = {g_nStringIdxAlarmQF};

const CStringDictionary::TStringId FORTE_Sub_AlarmQF::scm_anDataOutputTypeIds[] = {g_nStringIdBOOL};

const TForteInt16 FORTE_Sub_AlarmQF::scm_anEIWithIndexes[] = {-1};
const CStringDictionary::TStringId FORTE_Sub_AlarmQF::scm_anEventInputNames[] = {g_nStringIdREQ};

const TForteInt16 FORTE_Sub_AlarmQF::scm_anEOWithIndexes[] = {-1};
const CStringDictionary::TStringId FORTE_Sub_AlarmQF::scm_anEventOutputNames[] = {g_nStringIdCNF};


const SFBInterfaceSpec FORTE_Sub_AlarmQF::scm_stFBInterfaceSpec = {
  1, scm_anEventInputNames, nullptr, scm_anEIWithIndexes,
  1, scm_anEventOutputNames, nullptr, scm_anEOWithIndexes,
  3, scm_anDataInputNames, scm_anDataInputTypeIds,
  1, scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, nullptr
};

const SCFB_FBInstanceData FORTE_Sub_AlarmQF::scm_astInternalFBs[] = {
  {g_nStringIdFB_SR, g_nStringIdFB_SR},
  {g_nStringIdFB_UINT_TO_TIME, g_nStringIdFB_UINT_TO_TIME},
  {g_nStringIdFB_TOn, g_nStringIdFB_TON},
  {g_nStringIdFB_X1_AND_notX2, g_nStringIdFB_X1_AND_notX2}
};

const SCFB_FBParameter FORTE_Sub_AlarmQF::scm_astParamters[] = {
  {1, g_nStringIdInValue, "0"},
  {1, g_nStringIdMultiplier, "1000000000"},
};

const SCFB_FBConnectionData FORTE_Sub_AlarmQF::scm_astEventConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_SR, g_nStringIdCNF), 0, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdCNF), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_UINT_TO_TIME, g_nStringIdCNF), 1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TOn, g_nStringIdREQ), 2},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TOn, g_nStringIdCNF), 2, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_SR, g_nStringIdREQ), 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_X1_AND_notX2, g_nStringIdCNF), 3, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_UINT_TO_TIME, g_nStringIdREQ), 1},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdREQ), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_X1_AND_notX2, g_nStringIdREQ), 3},
};

const SCFB_FBConnectionData FORTE_Sub_AlarmQF::scm_astDataConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_SR, g_nStringIdQ1), 0, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxAlarmQF), -1},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxReset), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_SR, g_nStringIdR), 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_UINT_TO_TIME, g_nStringIdTime), 1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TOn, g_nStringIdPT), 2},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TOn, g_nStringIdQ), 2, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_SR, g_nStringIdS1), 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_X1_AND_notX2, g_nStringIdxOut), 3, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TOn, g_nStringIdIN), 2},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxAuto), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_X1_AND_notX2, g_nStringIdxIn1), 3},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxQF), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_X1_AND_notX2, g_nStringIdxIn2), 3},
};

const SCFB_FBNData FORTE_Sub_AlarmQF::scm_stFBNData = {
  4, scm_astInternalFBs,
  5, scm_astEventConnections,
  0, nullptr,
  7, scm_astDataConnections,
  0, nullptr,
  2, scm_astParamters
};



