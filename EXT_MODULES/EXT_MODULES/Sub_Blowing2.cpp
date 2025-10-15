/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: Sub_Blowing2
 *** Description: Subapplication Type
 *** Version:
***     1.0: 2025-10-08/sergdeb -  - 
 *************************************************************************/

#include "Sub_Blowing2.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "Sub_Blowing2_gen.cpp"
#endif


DEFINE_FIRMWARE_FB(FORTE_Sub_Blowing2, g_nStringIdSub_Blowing2)

const CStringDictionary::TStringId FORTE_Sub_Blowing2::scm_anDataInputNames[] = {g_nStringIdxAuto, g_nStringIdxFire, g_nStringIdxInFan, g_nStringIdxTEN, g_nStringIdSP_TimeBlow};

const CStringDictionary::TStringId FORTE_Sub_Blowing2::scm_anDataInputTypeIds[] = {g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdUINT};

const CStringDictionary::TStringId FORTE_Sub_Blowing2::scm_anDataOutputNames[] = {g_nStringIdxFan, g_nStringIdxBlowing, g_nStringIdiET};

const CStringDictionary::TStringId FORTE_Sub_Blowing2::scm_anDataOutputTypeIds[] = {g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdINT};

const TForteInt16 FORTE_Sub_Blowing2::scm_anEIWithIndexes[] = {-1, -1};
const CStringDictionary::TStringId FORTE_Sub_Blowing2::scm_anEventInputNames[] = {g_nStringIdINIT, g_nStringIdREQ};

const TForteInt16 FORTE_Sub_Blowing2::scm_anEOWithIndexes[] = {-1};
const CStringDictionary::TStringId FORTE_Sub_Blowing2::scm_anEventOutputNames[] = {g_nStringIdCNF};


const SFBInterfaceSpec FORTE_Sub_Blowing2::scm_stFBInterfaceSpec = {
  2, scm_anEventInputNames, nullptr, scm_anEIWithIndexes,
  1, scm_anEventOutputNames, nullptr, scm_anEOWithIndexes,
  5, scm_anDataInputNames, scm_anDataInputTypeIds,
  3, scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, nullptr
};

const SCFB_FBInstanceData FORTE_Sub_Blowing2::scm_astInternalFBs[] = {
  {g_nStringIdFB_RS, g_nStringIdFB_RS},
  {g_nStringIdBlowingDecl, g_nStringIdFB_F_TRIG},
  {g_nStringIdAutoDecl, g_nStringIdFB_F_TRIG},
  {g_nStringIdFireFront, g_nStringIdFB_R_TRIG},
  {g_nStringIdFB_OR, g_nStringIdFB_OR4},
  {g_nStringIdFB_CondBlow, g_nStringIdFB_CondBlow},
  {g_nStringIdFB_TimerReset, g_nStringIdFB_TimerReset},
  {g_nStringIdInFanFront, g_nStringIdFB_R_TRIG}
};


const SCFB_FBConnectionData FORTE_Sub_Blowing2::scm_astEventConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdBlowingDecl, g_nStringIdCNF), 1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdAutoDecl, g_nStringIdREQ), 2},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdAutoDecl, g_nStringIdCNF), 2, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFireFront, g_nStringIdREQ), 3},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_OR, g_nStringIdCNF), 4, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_RS, g_nStringIdREQ), 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_RS, g_nStringIdCNF), 0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_CondBlow, g_nStringIdREQ), 5},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_CondBlow, g_nStringIdCNF), 5, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdCNF), -1},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdREQ), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TimerReset, g_nStringIdREQ), 6},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdINIT), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TimerReset, g_nStringIdINIT), 6},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TimerReset, g_nStringIdCNF), 6, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdBlowingDecl, g_nStringIdREQ), 1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFireFront, g_nStringIdCNF), 3, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdInFanFront, g_nStringIdREQ), 7},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdInFanFront, g_nStringIdCNF), 7, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_OR, g_nStringIdREQ), 4},
};

const SCFB_FBConnectionData FORTE_Sub_Blowing2::scm_astDataConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxAuto), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdAutoDecl, g_nStringIdCLK), 2},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxFire), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFireFront, g_nStringIdCLK), 3},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdBlowingDecl, g_nStringIdQ), 1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_OR, g_nStringIdxIn1), 4},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdAutoDecl, g_nStringIdQ), 2, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_OR, g_nStringIdxIn2), 4},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFireFront, g_nStringIdQ), 3, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_OR, g_nStringIdxIn3), 4},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_OR, g_nStringIdxOut), 4, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_RS, g_nStringIdR1), 0},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxTEN), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_RS, g_nStringIdS), 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_RS, g_nStringIdQ1), 0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_CondBlow, g_nStringIdxTENonce), 5},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_CondBlow, g_nStringIdxFan), 5, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxFan), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_CondBlow, g_nStringIdxBlowing), 5, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxBlowing), -1},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxInFan), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_CondBlow, g_nStringIdxInFan), 5},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdSP_TimeBlow), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TimerReset, g_nStringIduiSP_TimeBlow), 6},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TimerReset, g_nStringIdxFanBlow), 6, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_CondBlow, g_nStringIdxFanBlow), 5},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TimerReset, g_nStringIdET), 6, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdiET), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdInFanFront, g_nStringIdQ), 7, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_OR, g_nStringIdxIn4), 4},
};

const SCFB_FBFannedOutConnectionData FORTE_Sub_Blowing2::scm_astFannedOutDataConnections[] = {
  {0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_CondBlow, g_nStringIdxAuto), 5},
  {1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_CondBlow, g_nStringIdxFire), 5},
  {10, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TimerReset, g_nStringIdxInFan), 6},
  {10, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdInFanFront, g_nStringIdCLK), 7},
};

const SCFB_FBNData FORTE_Sub_Blowing2::scm_stFBNData = {
  8, scm_astInternalFBs,
  10, scm_astEventConnections,
  0, nullptr,
  15, scm_astDataConnections,
  4, scm_astFannedOutDataConnections,
  0, nullptr
};



