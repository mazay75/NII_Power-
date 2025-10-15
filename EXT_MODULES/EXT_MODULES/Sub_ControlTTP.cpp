/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: Sub_ControlTTP
 *** Description: Subapplication Type
 *** Version:
***     1.0: 2025-03-10/ivan -  - 
 *************************************************************************/

#include "Sub_ControlTTP.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "Sub_ControlTTP_gen.cpp"
#endif


DEFINE_FIRMWARE_FB(FORTE_Sub_ControlTTP, g_nStringIdSub_ControlTTP)

const CStringDictionary::TStringId FORTE_Sub_ControlTTP::scm_anDataInputNames[] = {g_nStringIdxEnableControl, g_nStringIdxKM, g_nStringIdxBreakTTP, g_nStringIdxReset, g_nStringIdSP_PeriodControl, g_nStringIdSP_TimeControl};

const CStringDictionary::TStringId FORTE_Sub_ControlTTP::scm_anDataInputTypeIds[] = {g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdUINT, g_nStringIdUINT};

const CStringDictionary::TStringId FORTE_Sub_ControlTTP::scm_anDataOutputNames[] = {g_nStringIdoutKM, g_nStringIdcmdControlTTP, g_nStringIdxAlarmBreakTTP};

const CStringDictionary::TStringId FORTE_Sub_ControlTTP::scm_anDataOutputTypeIds[] = {g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL};

const TForteInt16 FORTE_Sub_ControlTTP::scm_anEIWithIndexes[] = {-1};
const CStringDictionary::TStringId FORTE_Sub_ControlTTP::scm_anEventInputNames[] = {g_nStringIdREQ};

const TForteInt16 FORTE_Sub_ControlTTP::scm_anEOWithIndexes[] = {-1};
const CStringDictionary::TStringId FORTE_Sub_ControlTTP::scm_anEventOutputNames[] = {g_nStringIdCNF};


const SFBInterfaceSpec FORTE_Sub_ControlTTP::scm_stFBInterfaceSpec = {
  1, scm_anEventInputNames, nullptr, scm_anEIWithIndexes,
  1, scm_anEventOutputNames, nullptr, scm_anEOWithIndexes,
  6, scm_anDataInputNames, scm_anDataInputTypeIds,
  3, scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, nullptr
};

const SCFB_FBInstanceData FORTE_Sub_ControlTTP::scm_astInternalFBs[] = {
  {g_nStringIdFB_TP, g_nStringIdFB_TP},
  {g_nStringIdFB_TON, g_nStringIdFB_TON},
  {g_nStringIdFB_RS, g_nStringIdFB_RS},
  {g_nStringIdFB_UINT_TO_TIME, g_nStringIdFB_UINT_TO_TIME},
  {g_nStringIdFB_UINT_TO_TIME_1, g_nStringIdFB_UINT_TO_TIME},
  {g_nStringIdFB_And_1, g_nStringIdFB_And},
  {g_nStringIdFB_RS_1, g_nStringIdFB_RS},
  {g_nStringIdFB_X1_AND_notX2, g_nStringIdFB_X1_AND_notX2},
  {g_nStringIdFB_OR, g_nStringIdFB_OR},
  {g_nStringIdFB_NOT, g_nStringIdFB_NOT},
  {g_nStringIdFB_F_TRIG, g_nStringIdFB_F_TRIG},
  {g_nStringIdFB_OR_1, g_nStringIdFB_OR},
  {g_nStringIdFB_And, g_nStringIdFB_And},
  {g_nStringIdFB_X1_AND_notX3, g_nStringIdFB_X1_AND_notX2},
  {g_nStringIdFB_OR_2, g_nStringIdFB_OR},
  {g_nStringIdFB_TOF, g_nStringIdFB_TOF}
};

const SCFB_FBParameter FORTE_Sub_ControlTTP::scm_astParamters[] = {
  {3, g_nStringIdMultiplier, "1000000000"},
  {4, g_nStringIdMultiplier, "1000000000"},
};

const SCFB_FBConnectionData FORTE_Sub_ControlTTP::scm_astEventConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_UINT_TO_TIME, g_nStringIdCNF), 3, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_UINT_TO_TIME_1, g_nStringIdREQ), 4},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TP, g_nStringIdCNF), 0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TON, g_nStringIdREQ), 1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TON, g_nStringIdCNF), 1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_And_1, g_nStringIdREQ), 5},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_X1_AND_notX2, g_nStringIdCNF), 7, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_NOT, g_nStringIdREQ), 9},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_NOT, g_nStringIdCNF), 9, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_UINT_TO_TIME, g_nStringIdREQ), 3},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_UINT_TO_TIME_1, g_nStringIdCNF), 4, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_OR, g_nStringIdREQ), 8},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_OR, g_nStringIdCNF), 8, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_RS, g_nStringIdREQ), 2},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_And_1, g_nStringIdCNF), 5, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_F_TRIG, g_nStringIdREQ), 10},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_F_TRIG, g_nStringIdCNF), 10, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_RS_1, g_nStringIdREQ), 6},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_RS, g_nStringIdCNF), 2, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_OR_1, g_nStringIdREQ), 11},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_OR_1, g_nStringIdCNF), 11, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TP, g_nStringIdREQ), 0},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdREQ), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_And, g_nStringIdREQ), 12},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_And, g_nStringIdCNF), 12, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_X1_AND_notX2, g_nStringIdREQ), 7},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_RS_1, g_nStringIdCNF), 6, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TOF, g_nStringIdREQ), 15},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TOF, g_nStringIdCNF), 15, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_X1_AND_notX3, g_nStringIdREQ), 13},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_X1_AND_notX3, g_nStringIdCNF), 13, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_OR_2, g_nStringIdREQ), 14},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_OR_2, g_nStringIdCNF), 14, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdCNF), -1},
};

const SCFB_FBConnectionData FORTE_Sub_ControlTTP::scm_astDataConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_RS, g_nStringIdQ1), 2, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TON, g_nStringIdIN), 1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_UINT_TO_TIME, g_nStringIdTime), 3, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TP, g_nStringIdPT), 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_UINT_TO_TIME_1, g_nStringIdTime), 4, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TON, g_nStringIdPT), 1},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdSP_TimeControl), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_UINT_TO_TIME, g_nStringIdInValue), 3},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdSP_PeriodControl), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_UINT_TO_TIME_1, g_nStringIdInValue), 4},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TP, g_nStringIdQ), 0, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdcmdControlTTP), -1},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxBreakTTP), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_And_1, g_nStringIdxIn2), 5},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_And_1, g_nStringIdxOut), 5, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_RS_1, g_nStringIdS), 6},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxReset), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_RS_1, g_nStringIdR1), 6},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_RS_1, g_nStringIdQ1), 6, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxAlarmBreakTTP), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_X1_AND_notX2, g_nStringIdxOut), 7, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_RS, g_nStringIdS), 2},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TON, g_nStringIdQ), 1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_OR, g_nStringIdxIn2), 8},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_OR, g_nStringIdxOut), 8, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_RS, g_nStringIdR1), 2},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_NOT, g_nStringIdxOut), 9, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_OR, g_nStringIdxIn1), 8},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_F_TRIG, g_nStringIdQ), 10, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_OR_1, g_nStringIdxIn1), 11},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_OR_1, g_nStringIdxOut), 11, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TP, g_nStringIdIN), 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_And, g_nStringIdxOut), 12, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_X1_AND_notX2, g_nStringIdxIn1), 7},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxKM), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_And, g_nStringIdxIn2), 12},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxEnableControl), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_And, g_nStringIdxIn1), 12},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_X1_AND_notX3, g_nStringIdxOut), 13, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_OR_2, g_nStringIdxIn1), 14},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TOF, g_nStringIdQ), 15, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_OR_2, g_nStringIdxIn2), 14},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_OR_2, g_nStringIdxOut), 14, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdoutKM), -1},
};

const SCFB_FBFannedOutConnectionData FORTE_Sub_ControlTTP::scm_astFannedOutDataConnections[] = {
  {0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_OR_1, g_nStringIdxIn2), 11},
  {1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TOF, g_nStringIdPT), 15},
  {5, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_And_1, g_nStringIdxIn1), 5},
  {9, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_X1_AND_notX2, g_nStringIdxIn2), 7},
  {10, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_NOT, g_nStringIdxIn1), 9},
  {16, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_F_TRIG, g_nStringIdCLK), 10},
  {16, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TOF, g_nStringIdIN), 15},
  {17, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_X1_AND_notX3, g_nStringIdxIn1), 13},
  {18, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_X1_AND_notX3, g_nStringIdxIn2), 13},
};

const SCFB_FBNData FORTE_Sub_ControlTTP::scm_stFBNData = {
  16, scm_astInternalFBs,
  17, scm_astEventConnections,
  0, nullptr,
  22, scm_astDataConnections,
  9, scm_astFannedOutDataConnections,
  2, scm_astParamters
};



