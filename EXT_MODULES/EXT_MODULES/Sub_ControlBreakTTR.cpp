/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: Sub_ControlBreakTTR
 *** Description: Subapplication Type
 *** Version:
***     1.0: 2025-10-03/sergdeb -  - 
 *************************************************************************/

#include "Sub_ControlBreakTTR.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "Sub_ControlBreakTTR_gen.cpp"
#endif


DEFINE_FIRMWARE_FB(FORTE_Sub_ControlBreakTTR, g_nStringIdSub_ControlBreakTTR)

const CStringDictionary::TStringId FORTE_Sub_ControlBreakTTR::scm_anDataInputNames[] = {g_nStringIdxAuto, g_nStringIdxStatusTEN, g_nStringIdxControlU_TTR, g_nStringIdxResetAlarm, g_nStringIdSP_PeriodControlTTR};

const CStringDictionary::TStringId FORTE_Sub_ControlBreakTTR::scm_anDataInputTypeIds[] = {g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdUINT};

const CStringDictionary::TStringId FORTE_Sub_ControlBreakTTR::scm_anDataOutputNames[] = {g_nStringIdxInitialize, g_nStringIdxAlarmBreakdownTTR};

const CStringDictionary::TStringId FORTE_Sub_ControlBreakTTR::scm_anDataOutputTypeIds[] = {g_nStringIdBOOL, g_nStringIdBOOL};

const TForteInt16 FORTE_Sub_ControlBreakTTR::scm_anEIWithIndexes[] = {-1, -1};
const CStringDictionary::TStringId FORTE_Sub_ControlBreakTTR::scm_anEventInputNames[] = {g_nStringIdINIT, g_nStringIdREQ};

const TForteInt16 FORTE_Sub_ControlBreakTTR::scm_anEOWithIndexes[] = {-1, -1};
const CStringDictionary::TStringId FORTE_Sub_ControlBreakTTR::scm_anEventOutputNames[] = {g_nStringIdINITO, g_nStringIdCNF};


const SFBInterfaceSpec FORTE_Sub_ControlBreakTTR::scm_stFBInterfaceSpec = {
  2, scm_anEventInputNames, nullptr, scm_anEIWithIndexes,
  2, scm_anEventOutputNames, nullptr, scm_anEOWithIndexes,
  5, scm_anDataInputNames, scm_anDataInputTypeIds,
  2, scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, nullptr
};

const SCFB_FBInstanceData FORTE_Sub_ControlBreakTTR::scm_astInternalFBs[] = {
  {g_nStringIdFB_R_TRIG, g_nStringIdFB_R_TRIG},
  {g_nStringIdFB_F_TRIG, g_nStringIdFB_F_TRIG},
  {g_nStringIdFB_BLINK, g_nStringIdFB_BLINK},
  {g_nStringIdFB_R_TRIG_1, g_nStringIdFB_R_TRIG},
  {g_nStringIdFB_TP, g_nStringIdFB_TP},
  {g_nStringIdFB_OR, g_nStringIdFB_OR},
  {g_nStringIdFB_And, g_nStringIdFB_And},
  {g_nStringIdFB_SR_1, g_nStringIdFB_SR},
  {g_nStringIdFB_SR_0, g_nStringIdFB_SR},
  {g_nStringIdFB_And_1, g_nStringIdFB_And}
};

const SCFB_FBParameter FORTE_Sub_ControlBreakTTR::scm_astParamters[] = {
  {2, g_nStringIdTIMEHIGH, "3"},
  {4, g_nStringIdPT, "T#3s"},
};

const SCFB_FBConnectionData FORTE_Sub_ControlBreakTTR::scm_astEventConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_BLINK, g_nStringIdCNF), 2, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_OR, g_nStringIdREQ), 5},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TP, g_nStringIdCNF), 4, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_BLINK, g_nStringIdREQ), 2},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_And, g_nStringIdCNF), 6, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_And_1, g_nStringIdREQ), 9},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_And_1, g_nStringIdCNF), 9, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_SR_1, g_nStringIdREQ), 7},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_SR_0, g_nStringIdCNF), 8, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_R_TRIG_1, g_nStringIdREQ), 3},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_R_TRIG_1, g_nStringIdCNF), 3, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TP, g_nStringIdREQ), 4},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_OR, g_nStringIdCNF), 5, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_And, g_nStringIdREQ), 6},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_R_TRIG, g_nStringIdCNF), 0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_F_TRIG, g_nStringIdREQ), 1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_F_TRIG, g_nStringIdCNF), 1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_SR_0, g_nStringIdREQ), 8},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdREQ), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_R_TRIG, g_nStringIdREQ), 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_SR_1, g_nStringIdCNF), 7, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdCNF), -1},
};

const SCFB_FBConnectionData FORTE_Sub_ControlBreakTTR::scm_astDataConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_And, g_nStringIdxOut), 6, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxInitialize), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_BLINK, g_nStringIdOUT), 2, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_OR, g_nStringIdxIn2), 5},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_R_TRIG, g_nStringIdQ), 0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_SR_0, g_nStringIdS1), 8},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_F_TRIG, g_nStringIdQ), 1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_SR_0, g_nStringIdR), 8},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_SR_0, g_nStringIdQ1), 8, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_BLINK, g_nStringIdENABLE), 2},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_R_TRIG_1, g_nStringIdQ), 3, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TP, g_nStringIdIN), 4},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_And_1, g_nStringIdxOut), 9, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_SR_1, g_nStringIdS1), 7},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TP, g_nStringIdQ), 4, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_OR, g_nStringIdxIn1), 5},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_OR, g_nStringIdxOut), 5, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_And, g_nStringIdxIn2), 6},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxStatusTEN), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_R_TRIG, g_nStringIdCLK), 0},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxControlU_TTR), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_And_1, g_nStringIdxIn2), 9},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxAuto), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_And, g_nStringIdxIn1), 6},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxResetAlarm), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_SR_1, g_nStringIdR), 7},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdSP_PeriodControlTTR), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_BLINK, g_nStringIdTIMELOW), 2},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_SR_1, g_nStringIdQ1), 7, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxAlarmBreakdownTTR), -1},
};

const SCFB_FBFannedOutConnectionData FORTE_Sub_ControlBreakTTR::scm_astFannedOutDataConnections[] = {
  {0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_And_1, g_nStringIdxIn1), 9},
  {4, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_R_TRIG_1, g_nStringIdCLK), 3},
  {9, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_F_TRIG, g_nStringIdCLK), 1},
};

const SCFB_FBNData FORTE_Sub_ControlBreakTTR::scm_stFBNData = {
  10, scm_astInternalFBs,
  11, scm_astEventConnections,
  0, nullptr,
  15, scm_astDataConnections,
  3, scm_astFannedOutDataConnections,
  2, scm_astParamters
};



