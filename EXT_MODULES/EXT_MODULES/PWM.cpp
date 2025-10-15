/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: PWM
 *** Description: Subapplication Type
 *** Version:
***     1.0: 2024-11-21/sergdebwork -  - 
 *************************************************************************/

#include "PWM.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "PWM_gen.cpp"
#endif


DEFINE_FIRMWARE_FB(FORTE_PWM, g_nStringIdPWM)

const CStringDictionary::TStringId FORTE_PWM::scm_anDataInputNames[] = {g_nStringIdExecute, g_nStringIdT, g_nStringIdDuty};

const CStringDictionary::TStringId FORTE_PWM::scm_anDataInputTypeIds[] = {g_nStringIdBOOL, g_nStringIdTIME, g_nStringIdINT};

const CStringDictionary::TStringId FORTE_PWM::scm_anDataOutputNames[] = {g_nStringIdQ, g_nStringIdET};

const CStringDictionary::TStringId FORTE_PWM::scm_anDataOutputTypeIds[] = {g_nStringIdBOOL, g_nStringIdTIME};

const TForteInt16 FORTE_PWM::scm_anEIWithIndexes[] = {-1};
const CStringDictionary::TStringId FORTE_PWM::scm_anEventInputNames[] = {g_nStringIdREQ};

const TForteInt16 FORTE_PWM::scm_anEOWithIndexes[] = {-1};
const CStringDictionary::TStringId FORTE_PWM::scm_anEventOutputNames[] = {g_nStringIdCNF};


const SFBInterfaceSpec FORTE_PWM::scm_stFBInterfaceSpec = {
  1, scm_anEventInputNames, nullptr, scm_anEIWithIndexes,
  1, scm_anEventOutputNames, nullptr, scm_anEOWithIndexes,
  3, scm_anDataInputNames, scm_anDataInputTypeIds,
  2, scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, nullptr
};

const SCFB_FBInstanceData FORTE_PWM::scm_astInternalFBs[] = {
  {g_nStringIdF_MULTIME, g_nStringIdF_MULTIME},
  {g_nStringIdINT2INT_1, g_nStringIdINT2INT},
  {g_nStringIdF_DIVTIME, g_nStringIdF_DIVTIME},
  {g_nStringIdINT2INT, g_nStringIdINT2INT},
  {g_nStringIdFB_RS, g_nStringIdFB_RS},
  {g_nStringIdFB_TP, g_nStringIdFB_TP},
  {g_nStringIdFB_TON, g_nStringIdFB_TON},
  {g_nStringIdINT2INT_2, g_nStringIdINT2INT},
  {g_nStringIdINT2INT_3, g_nStringIdINT2INT},
  {g_nStringIdF_GE, g_nStringIdF_GE},
  {g_nStringIdF_LE, g_nStringIdF_LE},
  {g_nStringIdFB_OR_5, g_nStringIdFB_OR_5},
  {g_nStringIdFB_X1_AND_notX2, g_nStringIdFB_X1_AND_notX2},
  {g_nStringIdFB_OR_6, g_nStringIdFB_OR_5},
  {g_nStringIdFB_X1_AND_notX3, g_nStringIdFB_X1_AND_notX2},
  {g_nStringIdFB_And, g_nStringIdFB_And},
  {g_nStringIdF_TIME_TO_STRING, g_nStringIdF_TIME_TO_STRING},
  {g_nStringIdF_EQ, g_nStringIdF_EQ},
  {g_nStringIdSTRING2STRING, g_nStringIdSTRING2STRING}
};

const SCFB_FBParameter FORTE_PWM::scm_astParamters[] = {
  {3, g_nStringIdIN, "100"},
  {7, g_nStringIdIN, "100"},
  {8, g_nStringIdIN, "0"},
  {18, g_nStringIdIN, "'T#0ms'"},
};

const SCFB_FBConnectionData FORTE_PWM::scm_astEventConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_OR_5, g_nStringIdCNF), 11, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_X1_AND_notX2, g_nStringIdREQ), 12},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TP, g_nStringIdCNF), 5, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TON, g_nStringIdREQ), 6},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdINT2INT, g_nStringIdCNF), 3, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_DIVTIME, g_nStringIdREQ), 2},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_RS, g_nStringIdCNF), 4, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TP, g_nStringIdREQ), 5},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_MULTIME, g_nStringIdCNF), 0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_RS, g_nStringIdREQ), 4},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_GE, g_nStringIdCNF), 9, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_LE, g_nStringIdREQ), 10},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_DIVTIME, g_nStringIdCNF), 2, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdINT2INT_1, g_nStringIdREQ), 1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TON, g_nStringIdCNF), 6, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_OR_6, g_nStringIdREQ), 13},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdINT2INT_1, g_nStringIdCNF), 1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_MULTIME, g_nStringIdREQ), 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_OR_6, g_nStringIdCNF), 13, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_X1_AND_notX3, g_nStringIdREQ), 14},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdINT2INT_2, g_nStringIdCNF), 7, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdINT2INT_3, g_nStringIdREQ), 8},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_X1_AND_notX2, g_nStringIdCNF), 12, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdINT2INT, g_nStringIdREQ), 3},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_X1_AND_notX3, g_nStringIdCNF), 14, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdCNF), -1},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdREQ), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdINT2INT_2, g_nStringIdREQ), 7},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdINT2INT_3, g_nStringIdCNF), 8, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_And, g_nStringIdREQ), 15},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_And, g_nStringIdCNF), 15, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_GE, g_nStringIdREQ), 9},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_TIME_TO_STRING, g_nStringIdCNF), 16, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSTRING2STRING, g_nStringIdREQ), 18},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSTRING2STRING, g_nStringIdCNF), 18, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_EQ, g_nStringIdREQ), 17},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_LE, g_nStringIdCNF), 10, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_TIME_TO_STRING, g_nStringIdREQ), 16},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_EQ, g_nStringIdCNF), 17, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_OR_5, g_nStringIdREQ), 11},
};

const SCFB_FBConnectionData FORTE_PWM::scm_astDataConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_RS, g_nStringIdQ1), 4, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TON, g_nStringIdIN), 6},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_X1_AND_notX2, g_nStringIdxOut), 12, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_RS, g_nStringIdS), 4},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TP, g_nStringIdQ), 5, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_OR_6, g_nStringIdxIn2), 13},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdINT2INT_3, g_nStringIdOUT), 8, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_LE, g_nStringIdIN2), 10},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_OR_6, g_nStringIdxOut), 13, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_X1_AND_notX3, g_nStringIdxIn1), 14},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_MULTIME, g_nStringIdOUT), 0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TP, g_nStringIdPT), 5},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdINT2INT_2, g_nStringIdOUT), 7, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_GE, g_nStringIdIN2), 9},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdINT2INT_1, g_nStringIdOUT), 1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_GE, g_nStringIdIN1), 9},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_LE, g_nStringIdOUT), 10, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_X1_AND_notX3, g_nStringIdxIn2), 14},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdINT2INT, g_nStringIdOUT), 3, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_DIVTIME, g_nStringIdIN2), 2},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_GE, g_nStringIdOUT), 9, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_OR_5, g_nStringIdxIn1), 11},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TON, g_nStringIdQ), 6, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_RS, g_nStringIdR1), 4},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_DIVTIME, g_nStringIdOUT), 2, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_MULTIME, g_nStringIdIN1), 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_OR_5, g_nStringIdxOut), 11, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_X1_AND_notX2, g_nStringIdxIn2), 12},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdExecute), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_X1_AND_notX2, g_nStringIdxIn1), 12},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdT), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TON, g_nStringIdPT), 6},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdDuty), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdINT2INT_1, g_nStringIdIN), 1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_X1_AND_notX3, g_nStringIdxOut), 14, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdQ), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TON, g_nStringIdET), 6, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdET), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_And, g_nStringIdxOut), 15, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_OR_6, g_nStringIdxIn1), 13},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSTRING2STRING, g_nStringIdOUT), 18, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_EQ, g_nStringIdIN1), 17},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_TIME_TO_STRING, g_nStringIdOUT), 16, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_EQ, g_nStringIdIN2), 17},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_EQ, g_nStringIdOUT), 17, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_OR_5, g_nStringIdxIn3), 11},
};

const SCFB_FBFannedOutConnectionData FORTE_PWM::scm_astFannedOutDataConnections[] = {
  {0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TP, g_nStringIdIN), 5},
  {7, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_LE, g_nStringIdIN1), 10},
  {7, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_MULTIME, g_nStringIdIN2), 0},
  {8, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_OR_5, g_nStringIdxIn2), 11},
  {10, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_And, g_nStringIdxIn2), 15},
  {14, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_And, g_nStringIdxIn1), 15},
  {15, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_DIVTIME, g_nStringIdIN1), 2},
  {15, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_TIME_TO_STRING, g_nStringIdIN), 16},
};

const SCFB_FBNData FORTE_PWM::scm_stFBNData = {
  19, scm_astInternalFBs,
  20, scm_astEventConnections,
  0, nullptr,
  23, scm_astDataConnections,
  8, scm_astFannedOutDataConnections,
  4, scm_astParamters
};



