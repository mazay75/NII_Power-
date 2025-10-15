/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: Sub_Blowing1
 *** Description: Subapplication Type
 *** Version:
***     1.0: 2025-10-08/sergdeb -  - 
 *************************************************************************/

#include "Sub_Blowing1.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "Sub_Blowing1_gen.cpp"
#endif


DEFINE_FIRMWARE_FB(FORTE_Sub_Blowing1, g_nStringIdSub_Blowing1)

const CStringDictionary::TStringId FORTE_Sub_Blowing1::scm_anDataInputNames[] = {g_nStringIdxAuto, g_nStringIdxFire, g_nStringIdxInFan, g_nStringIdxTEN, g_nStringIdxGlobalAlarm, g_nStringIdSP_TimeBlow};

const CStringDictionary::TStringId FORTE_Sub_Blowing1::scm_anDataInputTypeIds[] = {g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdUINT};

const CStringDictionary::TStringId FORTE_Sub_Blowing1::scm_anDataOutputNames[] = {g_nStringIdxFan, g_nStringIdxBlowing};

const CStringDictionary::TStringId FORTE_Sub_Blowing1::scm_anDataOutputTypeIds[] = {g_nStringIdBOOL, g_nStringIdBOOL};

const TForteInt16 FORTE_Sub_Blowing1::scm_anEIWithIndexes[] = {-1};
const CStringDictionary::TStringId FORTE_Sub_Blowing1::scm_anEventInputNames[] = {g_nStringIdREQ};

const TForteInt16 FORTE_Sub_Blowing1::scm_anEOWithIndexes[] = {-1};
const CStringDictionary::TStringId FORTE_Sub_Blowing1::scm_anEventOutputNames[] = {g_nStringIdCNF};


const SFBInterfaceSpec FORTE_Sub_Blowing1::scm_stFBInterfaceSpec = {
  1, scm_anEventInputNames, nullptr, scm_anEIWithIndexes,
  1, scm_anEventOutputNames, nullptr, scm_anEOWithIndexes,
  6, scm_anDataInputNames, scm_anDataInputTypeIds,
  2, scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, nullptr
};

const SCFB_FBInstanceData FORTE_Sub_Blowing1::scm_astInternalFBs[] = {
  {g_nStringIdFB_TP, g_nStringIdFB_TP},
  {g_nStringIdFB_F_TRIG, g_nStringIdFB_F_TRIG},
  {g_nStringIdFB_RS, g_nStringIdFB_RS},
  {g_nStringIdBlowingDecl, g_nStringIdFB_F_TRIG},
  {g_nStringIdAutoDecl, g_nStringIdFB_F_TRIG},
  {g_nStringIdFireFront, g_nStringIdFB_R_TRIG},
  {g_nStringIdGlobalAlarmDecl, g_nStringIdFB_F_TRIG},
  {g_nStringIdFB_OR, g_nStringIdFB_OR4},
  {g_nStringIdFB_CondBlow, g_nStringIdFB_CondBlow},
  {g_nStringIdFB_UINT_TO_TIME2, g_nStringIdFB_UINT_TO_TIME}
};


const SCFB_FBConnectionData FORTE_Sub_Blowing1::scm_astEventConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdREQ), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_F_TRIG, g_nStringIdREQ), 1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdBlowingDecl, g_nStringIdCNF), 3, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdAutoDecl, g_nStringIdREQ), 4},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdAutoDecl, g_nStringIdCNF), 4, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFireFront, g_nStringIdREQ), 5},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFireFront, g_nStringIdCNF), 5, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdGlobalAlarmDecl, g_nStringIdREQ), 6},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdGlobalAlarmDecl, g_nStringIdCNF), 6, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_OR, g_nStringIdREQ), 7},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_OR, g_nStringIdCNF), 7, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_RS, g_nStringIdREQ), 2},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_RS, g_nStringIdCNF), 2, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_CondBlow, g_nStringIdREQ), 8},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_CondBlow, g_nStringIdCNF), 8, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdCNF), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TP, g_nStringIdCNF), 0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdBlowingDecl, g_nStringIdREQ), 3},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_F_TRIG, g_nStringIdCNF), 1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_UINT_TO_TIME2, g_nStringIdREQ), 9},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_UINT_TO_TIME2, g_nStringIdCNF), 9, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TP, g_nStringIdREQ), 0},
};

const SCFB_FBConnectionData FORTE_Sub_Blowing1::scm_astDataConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxInFan), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_F_TRIG, g_nStringIdCLK), 1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TP, g_nStringIdQ), 0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdBlowingDecl, g_nStringIdCLK), 3},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxAuto), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdAutoDecl, g_nStringIdCLK), 4},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxFire), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFireFront, g_nStringIdCLK), 5},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxGlobalAlarm), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdGlobalAlarmDecl, g_nStringIdCLK), 6},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdBlowingDecl, g_nStringIdQ), 3, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_OR, g_nStringIdxIn1), 7},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdAutoDecl, g_nStringIdQ), 4, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_OR, g_nStringIdxIn2), 7},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFireFront, g_nStringIdQ), 5, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_OR, g_nStringIdxIn3), 7},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdGlobalAlarmDecl, g_nStringIdQ), 6, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_OR, g_nStringIdxIn4), 7},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_OR, g_nStringIdxOut), 7, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_RS, g_nStringIdR1), 2},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxTEN), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_RS, g_nStringIdS), 2},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_RS, g_nStringIdQ1), 2, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_CondBlow, g_nStringIdxTENonce), 8},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_CondBlow, g_nStringIdxFan), 8, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxFan), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_CondBlow, g_nStringIdxBlowing), 8, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxBlowing), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_F_TRIG, g_nStringIdQ), 1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TP, g_nStringIdIN), 0},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdSP_TimeBlow), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_UINT_TO_TIME2, g_nStringIdInValue), 9},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_UINT_TO_TIME2, g_nStringIdTime), 9, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TP, g_nStringIdPT), 0},
};

const SCFB_FBFannedOutConnectionData FORTE_Sub_Blowing1::scm_astFannedOutDataConnections[] = {
  {0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_CondBlow, g_nStringIdxInFan), 8},
  {1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_CondBlow, g_nStringIdxFanBlow), 8},
  {2, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_CondBlow, g_nStringIdxAuto), 8},
  {3, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_CondBlow, g_nStringIdxFire), 8},
};

const SCFB_FBNData FORTE_Sub_Blowing1::scm_stFBNData = {
  10, scm_astInternalFBs,
  11, scm_astEventConnections,
  0, nullptr,
  17, scm_astDataConnections,
  4, scm_astFannedOutDataConnections,
  0, nullptr
};



