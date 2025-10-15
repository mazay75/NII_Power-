/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: Sub_2Stages
 *** Description: Subapplication Type
 *** Version:
***     1.0: 2025-10-01/sergdeb -  - 
 *************************************************************************/

#include "Sub_2Stages.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "Sub_2Stages_gen.cpp"
#endif


DEFINE_FIRMWARE_FB(FORTE_Sub_2Stages, g_nStringIdSub_2Stages)

const CStringDictionary::TStringId FORTE_Sub_2Stages::scm_anDataInputNames[] = {g_nStringIdxStart, g_nStringIdrTsup, g_nStringIdSP_Tsup, g_nStringIdSP_dT, g_nStringIdSP_DelTimeONstage1, g_nStringIdSP_DelTimeOFFstage2};

const CStringDictionary::TStringId FORTE_Sub_2Stages::scm_anDataInputTypeIds[] = {g_nStringIdBOOL, g_nStringIdREAL, g_nStringIdREAL, g_nStringIdUINT, g_nStringIdUINT, g_nStringIdUINT};

const CStringDictionary::TStringId FORTE_Sub_2Stages::scm_anDataOutputNames[] = {g_nStringIdxEnOut, g_nStringIdxStage1, g_nStringIdxStage2};

const CStringDictionary::TStringId FORTE_Sub_2Stages::scm_anDataOutputTypeIds[] = {g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL};

const TForteInt16 FORTE_Sub_2Stages::scm_anEIWithIndexes[] = {-1, -1};
const CStringDictionary::TStringId FORTE_Sub_2Stages::scm_anEventInputNames[] = {g_nStringIdINIT, g_nStringIdREQ};

const TForteInt16 FORTE_Sub_2Stages::scm_anEOWithIndexes[] = {-1, -1};
const CStringDictionary::TStringId FORTE_Sub_2Stages::scm_anEventOutputNames[] = {g_nStringIdINITO, g_nStringIdCNF};


const SFBInterfaceSpec FORTE_Sub_2Stages::scm_stFBInterfaceSpec = {
  2, scm_anEventInputNames, nullptr, scm_anEIWithIndexes,
  2, scm_anEventOutputNames, nullptr, scm_anEOWithIndexes,
  6, scm_anDataInputNames, scm_anDataInputTypeIds,
  3, scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, nullptr
};

const SCFB_FBInstanceData FORTE_Sub_2Stages::scm_astInternalFBs[] = {
  {g_nStringIdFB_TON, g_nStringIdFB_TON},
  {g_nStringIdFB_TOF, g_nStringIdFB_TOF},
  {g_nStringIdFB_OR, g_nStringIdFB_OR},
  {g_nStringIdFB_And, g_nStringIdFB_And},
  {g_nStringIdFB_UINT_TO_TIME, g_nStringIdFB_UINT_TO_TIME},
  {g_nStringIdFB_UINT_TO_TIME_1, g_nStringIdFB_UINT_TO_TIME},
  {g_nStringIdFB_OR_EnOut, g_nStringIdFB_OR},
  {g_nStringIdFB_Cond2, g_nStringIdFB_Cond2},
  {g_nStringIdFB_Cond1, g_nStringIdFB_Cond1},
  {g_nStringIdFB_OR_1, g_nStringIdFB_OR},
  {g_nStringIdFB_Cond3, g_nStringIdFB_Cond3}
};

const SCFB_FBParameter FORTE_Sub_2Stages::scm_astParamters[] = {
  {4, g_nStringIdMultiplier, "1000000000"},
  {5, g_nStringIdMultiplier, "1000000000"},
};

const SCFB_FBConnectionData FORTE_Sub_2Stages::scm_astEventConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_UINT_TO_TIME_1, g_nStringIdCNF), 5, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_UINT_TO_TIME, g_nStringIdREQ), 4},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_UINT_TO_TIME, g_nStringIdCNF), 4, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TON, g_nStringIdREQ), 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TON, g_nStringIdCNF), 0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TOF, g_nStringIdREQ), 1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TOF, g_nStringIdCNF), 1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_OR, g_nStringIdREQ), 2},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_OR, g_nStringIdCNF), 2, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_And, g_nStringIdREQ), 3},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdINIT), -1, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdINITO), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_And, g_nStringIdCNF), 3, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_OR_EnOut, g_nStringIdREQ), 6},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdREQ), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_Cond1, g_nStringIdREQ), 8},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_Cond1, g_nStringIdCNF), 8, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_Cond2, g_nStringIdREQ), 7},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_OR_EnOut, g_nStringIdCNF), 6, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_OR_1, g_nStringIdREQ), 9},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_OR_1, g_nStringIdCNF), 9, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdCNF), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_Cond2, g_nStringIdCNF), 7, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_Cond3, g_nStringIdREQ), 10},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_Cond3, g_nStringIdCNF), 10, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_UINT_TO_TIME_1, g_nStringIdREQ), 5},
};

const SCFB_FBConnectionData FORTE_Sub_2Stages::scm_astDataConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TOF, g_nStringIdQ), 1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_And, g_nStringIdxIn2), 3},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_OR, g_nStringIdxOut), 2, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxStage1), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_UINT_TO_TIME, g_nStringIdTime), 4, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TOF, g_nStringIdPT), 1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_UINT_TO_TIME_1, g_nStringIdTime), 5, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TON, g_nStringIdPT), 0},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdSP_DelTimeONstage1), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_UINT_TO_TIME_1, g_nStringIdInValue), 5},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdSP_DelTimeOFFstage2), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_UINT_TO_TIME, g_nStringIdInValue), 4},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_And, g_nStringIdxOut), 3, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_OR_EnOut, g_nStringIdxIn2), 6},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_OR_EnOut, g_nStringIdxOut), 6, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxEnOut), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TON, g_nStringIdQ), 0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_Cond2, g_nStringIdxStart), 7},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdrTsup), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_Cond2, g_nStringIdrTsup), 7},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdSP_Tsup), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_Cond2, g_nStringIdSP_Tsup), 7},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_Cond2, g_nStringIdxStage1), 7, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_OR, g_nStringIdxIn2), 2},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdSP_dT), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_Cond2, g_nStringIdSP_dT), 7},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxStart), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_Cond1, g_nStringIdxStart), 8},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_Cond1, g_nStringIdxStage1), 8, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_OR, g_nStringIdxIn1), 2},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_Cond1, g_nStringIdxStage2), 8, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TON, g_nStringIdIN), 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_OR_1, g_nStringIdxOut), 9, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxStage2), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_Cond1, g_nStringIdxStatusCond1), 8, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_Cond3, g_nStringIdxStart), 10},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_Cond3, g_nStringIdxStatusCond3), 10, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_And, g_nStringIdxIn1), 3},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_Cond3, g_nStringIdxStage2), 10, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TOF, g_nStringIdIN), 1},
};

const SCFB_FBFannedOutConnectionData FORTE_Sub_2Stages::scm_astFannedOutDataConnections[] = {
  {1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_OR_EnOut, g_nStringIdxIn1), 6},
  {6, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_OR_1, g_nStringIdxIn2), 9},
  {9, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_Cond1, g_nStringIdrTsup), 8},
  {9, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_Cond3, g_nStringIdrTsup), 10},
  {10, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_Cond1, g_nStringIdSP_Tsup), 8},
  {10, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_Cond3, g_nStringIdSP_Tsup), 10},
  {12, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_Cond1, g_nStringIdSP_dT), 8},
  {12, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_Cond3, g_nStringIdSP_dT), 10},
  {15, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_OR_1, g_nStringIdxIn1), 9},
};

const SCFB_FBNData FORTE_Sub_2Stages::scm_stFBNData = {
  11, scm_astInternalFBs,
  13, scm_astEventConnections,
  0, nullptr,
  20, scm_astDataConnections,
  9, scm_astFannedOutDataConnections,
  2, scm_astParamters
};



