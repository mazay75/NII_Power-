/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: Sub_AlarmFC
 *** Description: Subapplication Type
 *** Version:
***     1.0: 2024-11-11/sergdebwork -  - 
 *************************************************************************/

#include "Sub_AlarmFC.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "Sub_AlarmFC_gen.cpp"
#endif


DEFINE_FIRMWARE_FB(FORTE_Sub_AlarmFC, g_nStringIdSub_AlarmFC)

const CStringDictionary::TStringId FORTE_Sub_AlarmFC::scm_anDataInputNames[] = {g_nStringIdxAuto, g_nStringIdxStart, g_nStringIdxFC, g_nStringIdxReset};

const CStringDictionary::TStringId FORTE_Sub_AlarmFC::scm_anDataInputTypeIds[] = {g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL};

const CStringDictionary::TStringId FORTE_Sub_AlarmFC::scm_anDataOutputNames[] = {g_nStringIdxAlarmFC};

const CStringDictionary::TStringId FORTE_Sub_AlarmFC::scm_anDataOutputTypeIds[] = {g_nStringIdBOOL};

const TForteInt16 FORTE_Sub_AlarmFC::scm_anEIWithIndexes[] = {-1};
const CStringDictionary::TStringId FORTE_Sub_AlarmFC::scm_anEventInputNames[] = {g_nStringIdREQ};

const TForteInt16 FORTE_Sub_AlarmFC::scm_anEOWithIndexes[] = {-1};
const CStringDictionary::TStringId FORTE_Sub_AlarmFC::scm_anEventOutputNames[] = {g_nStringIdCNF};


const SFBInterfaceSpec FORTE_Sub_AlarmFC::scm_stFBInterfaceSpec = {
  1, scm_anEventInputNames, nullptr, scm_anEIWithIndexes,
  1, scm_anEventOutputNames, nullptr, scm_anEOWithIndexes,
  4, scm_anDataInputNames, scm_anDataInputTypeIds,
  1, scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, nullptr
};

const SCFB_FBInstanceData FORTE_Sub_AlarmFC::scm_astInternalFBs[] = {
  {g_nStringIdFB_TON, g_nStringIdFB_TON},
  {g_nStringIdFB_SR, g_nStringIdFB_SR},
  {g_nStringIdFB_UINT_TO_TIME, g_nStringIdFB_UINT_TO_TIME},
  {g_nStringIdF_AND, g_nStringIdF_AND},
  {g_nStringIdFB_TOF, g_nStringIdFB_TOF},
  {g_nStringIdF_NOT, g_nStringIdF_NOT},
  {g_nStringIdFB_UINT_TO_TIME_1, g_nStringIdFB_UINT_TO_TIME},
  {g_nStringIdBOOL2BOOL, g_nStringIdBOOL2BOOL},
  {g_nStringIdFB_And, g_nStringIdFB_And}
};

const SCFB_FBParameter FORTE_Sub_AlarmFC::scm_astParamters[] = {
  {2, g_nStringIdInValue, "1"},
  {2, g_nStringIdMultiplier, "1000000000"},
  {6, g_nStringIdInValue, "1"},
  {6, g_nStringIdMultiplier, "1000000000"},
};

const SCFB_FBConnectionData FORTE_Sub_AlarmFC::scm_astEventConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_SR, g_nStringIdCNF), 1, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdCNF), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_UINT_TO_TIME, g_nStringIdCNF), 2, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TON, g_nStringIdREQ), 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TON, g_nStringIdCNF), 0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_UINT_TO_TIME_1, g_nStringIdREQ), 6},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_UINT_TO_TIME_1, g_nStringIdCNF), 6, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TOF, g_nStringIdREQ), 4},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TOF, g_nStringIdCNF), 4, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_NOT, g_nStringIdREQ), 5},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_AND, g_nStringIdCNF), 3, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_SR, g_nStringIdREQ), 1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_NOT, g_nStringIdCNF), 5, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdBOOL2BOOL, g_nStringIdREQ), 7},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdBOOL2BOOL, g_nStringIdCNF), 7, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_AND, g_nStringIdREQ), 3},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdREQ), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_And, g_nStringIdREQ), 8},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_And, g_nStringIdCNF), 8, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_UINT_TO_TIME, g_nStringIdREQ), 2},
};

const SCFB_FBConnectionData FORTE_Sub_AlarmFC::scm_astDataConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_SR, g_nStringIdQ1), 1, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxAlarmFC), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_UINT_TO_TIME, g_nStringIdTime), 2, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TON, g_nStringIdPT), 0},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxReset), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_SR, g_nStringIdR), 1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_AND, g_nStringIdOUT), 3, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_SR, g_nStringIdS1), 1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TON, g_nStringIdQ), 0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_AND, g_nStringIdIN1), 3},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_UINT_TO_TIME_1, g_nStringIdTime), 6, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TOF, g_nStringIdPT), 4},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxFC), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TOF, g_nStringIdIN), 4},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_NOT, g_nStringIdOUT), 5, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdBOOL2BOOL, g_nStringIdIN), 7},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdBOOL2BOOL, g_nStringIdOUT), 7, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_AND, g_nStringIdIN2), 3},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TOF, g_nStringIdQ), 4, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_NOT, g_nStringIdIN), 5},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxStart), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_And, g_nStringIdxIn2), 8},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxAuto), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_And, g_nStringIdxIn1), 8},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_And, g_nStringIdxOut), 8, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TON, g_nStringIdIN), 0},
};

const SCFB_FBNData FORTE_Sub_AlarmFC::scm_stFBNData = {
  9, scm_astInternalFBs,
  10, scm_astEventConnections,
  0, nullptr,
  13, scm_astDataConnections,
  0, nullptr,
  4, scm_astParamters
};



