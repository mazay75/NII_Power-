/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: Sub_Flap
 *** Description: Subapplication Type
 *** Version:
***     1.0: 2025-03-03/ivan -  - 
 *************************************************************************/

#include "Sub_Flap.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "Sub_Flap_gen.cpp"
#endif


DEFINE_FIRMWARE_FB(FORTE_Sub_Flap, g_nStringIdSub_Flap)

const CStringDictionary::TStringId FORTE_Sub_Flap::scm_anDataInputNames[] = {g_nStringIdxAuto, g_nStringIdxStart, g_nStringIdxOpen, g_nStringIdxReset, g_nStringIdSP_OpeningTime, g_nStringIdSP_DelOffOpen};

const CStringDictionary::TStringId FORTE_Sub_Flap::scm_anDataInputTypeIds[] = {g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdUINT, g_nStringIdUINT};

const CStringDictionary::TStringId FORTE_Sub_Flap::scm_anDataOutputNames[] = {g_nStringIdxOpenFlap, g_nStringIdxExecuteFanAfterOpen, g_nStringIdxOpening, g_nStringIdxAlarmFlap, g_nStringIdxAlarmRunTime, g_nStringIdxAlarmOpenOff};

const CStringDictionary::TStringId FORTE_Sub_Flap::scm_anDataOutputTypeIds[] = {g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL};

const TForteInt16 FORTE_Sub_Flap::scm_anEIWithIndexes[] = {-1};
const CStringDictionary::TStringId FORTE_Sub_Flap::scm_anEventInputNames[] = {g_nStringIdREQ};

const TForteInt16 FORTE_Sub_Flap::scm_anEOWithIndexes[] = {-1};
const CStringDictionary::TStringId FORTE_Sub_Flap::scm_anEventOutputNames[] = {g_nStringIdCNF};


const SFBInterfaceSpec FORTE_Sub_Flap::scm_stFBInterfaceSpec = {
  1, scm_anEventInputNames, nullptr, scm_anEIWithIndexes,
  1, scm_anEventOutputNames, nullptr, scm_anEOWithIndexes,
  6, scm_anDataInputNames, scm_anDataInputTypeIds,
  6, scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, nullptr
};

const SCFB_FBInstanceData FORTE_Sub_Flap::scm_astInternalFBs[] = {
  {g_nStringIdFB_And, g_nStringIdFB_And},
  {g_nStringIdFB_TON, g_nStringIdFB_TON},
  {g_nStringIdFB_UINT_TO_TIME, g_nStringIdFB_UINT_TO_TIME},
  {g_nStringIdFB_X1_AND_notX2, g_nStringIdFB_X1_AND_notX2},
  {g_nStringIdFB_SR, g_nStringIdFB_SR},
  {g_nStringIdFB_X1_AND_notX3, g_nStringIdFB_X1_AND_notX2},
  {g_nStringIdFB_X1_AND_notX4, g_nStringIdFB_X1_AND_notX2},
  {g_nStringIdFB_X1_AND_notX5, g_nStringIdFB_X1_AND_notX2},
  {g_nStringIdFB_And_2, g_nStringIdFB_And},
  {g_nStringIdFB_RS, g_nStringIdFB_RS},
  {g_nStringIdFB_X1_AND_notX6, g_nStringIdFB_X1_AND_notX2},
  {g_nStringIdFB_F_TRIG, g_nStringIdFB_F_TRIG},
  {g_nStringIdFB_TOF, g_nStringIdFB_TOF},
  {g_nStringIdFB_UINT_TO_TIME_1, g_nStringIdFB_UINT_TO_TIME},
  {g_nStringIdFB_SR_1, g_nStringIdFB_SR},
  {g_nStringIdFB_OR, g_nStringIdFB_OR},
  {g_nStringIdFB_X1_AND_notX7, g_nStringIdFB_X1_AND_notX2},
  {g_nStringIdFB_X1_AND_notX8, g_nStringIdFB_X1_AND_notX2},
  {g_nStringIdFB_X1_AND_notX9, g_nStringIdFB_X1_AND_notX2}
};

const SCFB_FBParameter FORTE_Sub_Flap::scm_astParamters[] = {
  {2, g_nStringIdMultiplier, "1000000000"},
  {13, g_nStringIdMultiplier, "1000000000"},
};

const SCFB_FBConnectionData FORTE_Sub_Flap::scm_astEventConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdREQ), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_And, g_nStringIdREQ), 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_And, g_nStringIdCNF), 0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_UINT_TO_TIME, g_nStringIdREQ), 2},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TON, g_nStringIdCNF), 1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_X1_AND_notX2, g_nStringIdREQ), 3},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_SR, g_nStringIdCNF), 4, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_X1_AND_notX3, g_nStringIdREQ), 5},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_UINT_TO_TIME, g_nStringIdCNF), 2, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_X1_AND_notX5, g_nStringIdREQ), 7},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_And_2, g_nStringIdCNF), 8, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_F_TRIG, g_nStringIdREQ), 11},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_F_TRIG, g_nStringIdCNF), 11, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_RS, g_nStringIdREQ), 9},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_RS, g_nStringIdCNF), 9, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TOF, g_nStringIdREQ), 12},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TOF, g_nStringIdCNF), 12, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_X1_AND_notX6, g_nStringIdREQ), 10},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_X1_AND_notX5, g_nStringIdCNF), 7, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_UINT_TO_TIME_1, g_nStringIdREQ), 13},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_UINT_TO_TIME_1, g_nStringIdCNF), 13, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_And_2, g_nStringIdREQ), 8},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_X1_AND_notX2, g_nStringIdCNF), 3, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_SR, g_nStringIdREQ), 4},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_OR, g_nStringIdCNF), 15, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdCNF), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_SR_1, g_nStringIdCNF), 14, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_X1_AND_notX7, g_nStringIdREQ), 16},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_X1_AND_notX7, g_nStringIdCNF), 16, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TON, g_nStringIdREQ), 1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_X1_AND_notX4, g_nStringIdCNF), 6, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_X1_AND_notX8, g_nStringIdREQ), 17},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_X1_AND_notX8, g_nStringIdCNF), 17, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_OR, g_nStringIdREQ), 15},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_X1_AND_notX3, g_nStringIdCNF), 5, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_X1_AND_notX4, g_nStringIdREQ), 6},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_X1_AND_notX6, g_nStringIdCNF), 10, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_X1_AND_notX9, g_nStringIdREQ), 18},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_X1_AND_notX9, g_nStringIdCNF), 18, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_SR_1, g_nStringIdREQ), 14},
};

const SCFB_FBConnectionData FORTE_Sub_Flap::scm_astDataConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxAuto), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_And, g_nStringIdxIn1), 0},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxStart), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_And, g_nStringIdxIn2), 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_UINT_TO_TIME, g_nStringIdTime), 2, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TON, g_nStringIdPT), 1},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdSP_OpeningTime), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_UINT_TO_TIME, g_nStringIdInValue), 2},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TON, g_nStringIdQ), 1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_X1_AND_notX2, g_nStringIdxIn1), 3},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxOpen), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_X1_AND_notX2, g_nStringIdxIn2), 3},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxReset), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_SR, g_nStringIdR), 4},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_And, g_nStringIdxOut), 0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_X1_AND_notX3, g_nStringIdxIn1), 5},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_X1_AND_notX3, g_nStringIdxOut), 5, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxOpenFlap), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_And_2, g_nStringIdxOut), 8, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_RS, g_nStringIdS), 9},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_RS, g_nStringIdQ1), 9, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_X1_AND_notX6, g_nStringIdxIn1), 10},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_F_TRIG, g_nStringIdQ), 11, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_RS, g_nStringIdR1), 9},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TOF, g_nStringIdQ), 12, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_X1_AND_notX6, g_nStringIdxIn2), 10},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_UINT_TO_TIME_1, g_nStringIdTime), 13, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TOF, g_nStringIdPT), 12},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdSP_DelOffOpen), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_UINT_TO_TIME_1, g_nStringIdInValue), 13},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_X1_AND_notX2, g_nStringIdxOut), 3, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_SR, g_nStringIdS1), 4},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_X1_AND_notX6, g_nStringIdxOut), 10, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_SR_1, g_nStringIdS1), 14},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_SR_1, g_nStringIdQ1), 14, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxAlarmOpenOff), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_SR, g_nStringIdQ1), 4, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxAlarmRunTime), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_OR, g_nStringIdxOut), 15, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxAlarmFlap), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_X1_AND_notX5, g_nStringIdxOut), 7, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_X1_AND_notX7, g_nStringIdxIn1), 16},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_X1_AND_notX7, g_nStringIdxOut), 16, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TON, g_nStringIdIN), 1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_X1_AND_notX4, g_nStringIdxOut), 6, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_X1_AND_notX8, g_nStringIdxIn1), 17},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_X1_AND_notX8, g_nStringIdxOut), 17, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxOpening), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_X1_AND_notX9, g_nStringIdxOut), 18, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxExecuteFanAfterOpen), -1},
};

const SCFB_FBFannedOutConnectionData FORTE_Sub_Flap::scm_astFannedOutDataConnections[] = {
  {5, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_X1_AND_notX4, g_nStringIdxIn2), 6},
  {5, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_X1_AND_notX5, g_nStringIdxIn2), 7},
  {5, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_And_2, g_nStringIdxIn1), 8},
  {5, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TOF, g_nStringIdIN), 12},
  {6, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_SR_1, g_nStringIdR), 14},
  {7, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_X1_AND_notX5, g_nStringIdxIn1), 7},
  {7, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_And_2, g_nStringIdxIn2), 8},
  {7, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_F_TRIG, g_nStringIdCLK), 11},
  {8, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_X1_AND_notX4, g_nStringIdxIn1), 6},
  {10, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_X1_AND_notX7, g_nStringIdxIn2), 16},
  {10, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_X1_AND_notX8, g_nStringIdxIn2), 17},
  {10, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_X1_AND_notX9, g_nStringIdxIn1), 18},
  {17, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_OR, g_nStringIdxIn1), 15},
  {17, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_X1_AND_notX9, g_nStringIdxIn2), 18},
  {18, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_OR, g_nStringIdxIn2), 15},
  {19, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_X1_AND_notX3, g_nStringIdxIn2), 5},
};

const SCFB_FBNData FORTE_Sub_Flap::scm_stFBNData = {
  19, scm_astInternalFBs,
  20, scm_astEventConnections,
  0, nullptr,
  25, scm_astDataConnections,
  16, scm_astFannedOutDataConnections,
  2, scm_astParamters
};



