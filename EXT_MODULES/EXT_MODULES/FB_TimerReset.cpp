/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: FB_TimerReset
 *** Description: Subapplication Type
 *** Version:
***     1.0: 2025-10-12/sergdeb -  - 
 *************************************************************************/

#include "FB_TimerReset.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "FB_TimerReset_gen.cpp"
#endif


DEFINE_FIRMWARE_FB(FORTE_FB_TimerReset, g_nStringIdFB_TimerReset)

const CStringDictionary::TStringId FORTE_FB_TimerReset::scm_anDataInputNames[] = {g_nStringIdxInFan, g_nStringIduiSP_TimeBlow};

const CStringDictionary::TStringId FORTE_FB_TimerReset::scm_anDataInputTypeIds[] = {g_nStringIdBOOL, g_nStringIdUINT};

const CStringDictionary::TStringId FORTE_FB_TimerReset::scm_anDataOutputNames[] = {g_nStringIdxFanBlow, g_nStringIdET};

const CStringDictionary::TStringId FORTE_FB_TimerReset::scm_anDataOutputTypeIds[] = {g_nStringIdBOOL, g_nStringIdINT};

const TForteInt16 FORTE_FB_TimerReset::scm_anEIWithIndexes[] = {-1, -1};
const CStringDictionary::TStringId FORTE_FB_TimerReset::scm_anEventInputNames[] = {g_nStringIdINIT, g_nStringIdREQ};

const TForteInt16 FORTE_FB_TimerReset::scm_anEOWithIndexes[] = {-1};
const CStringDictionary::TStringId FORTE_FB_TimerReset::scm_anEventOutputNames[] = {g_nStringIdCNF};


const SFBInterfaceSpec FORTE_FB_TimerReset::scm_stFBInterfaceSpec = {
  2, scm_anEventInputNames, nullptr, scm_anEIWithIndexes,
  1, scm_anEventOutputNames, nullptr, scm_anEOWithIndexes,
  2, scm_anDataInputNames, scm_anDataInputTypeIds,
  2, scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, nullptr
};

const SCFB_FBInstanceData FORTE_FB_TimerReset::scm_astInternalFBs[] = {
  {g_nStringIdE_CYCLE, g_nStringIdE_CYCLE},
  {g_nStringIdFB_F_TRIG, g_nStringIdFB_F_TRIG},
  {g_nStringIdFB_R_TRIG, g_nStringIdFB_R_TRIG},
  {g_nStringIdFB_OR, g_nStringIdFB_OR},
  {g_nStringIdFB_RS, g_nStringIdFB_RS},
  {g_nStringIdFB_CTU, g_nStringIdFB_CTU},
  {g_nStringIdF_UINT_TO_INT, g_nStringIdF_UINT_TO_INT},
  {g_nStringIdFB_TP, g_nStringIdFB_TP}
};

const SCFB_FBParameter FORTE_FB_TimerReset::scm_astParamters[] = {
  {0, g_nStringIdDT, "T#1s"},
  {7, g_nStringIdPT, "T#1s"},
};

const SCFB_FBConnectionData FORTE_FB_TimerReset::scm_astEventConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdINIT), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_CYCLE, g_nStringIdSTART), 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_F_TRIG, g_nStringIdCNF), 1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_R_TRIG, g_nStringIdREQ), 2},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_UINT_TO_INT, g_nStringIdCNF), 6, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_F_TRIG, g_nStringIdREQ), 1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_CYCLE, g_nStringIdEO), 0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_CTU, g_nStringIdREQ), 5},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdREQ), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_UINT_TO_INT, g_nStringIdREQ), 6},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_RS, g_nStringIdCNF), 4, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdCNF), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_OR, g_nStringIdCNF), 3, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_RS, g_nStringIdREQ), 4},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_R_TRIG, g_nStringIdCNF), 2, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TP, g_nStringIdREQ), 7},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TP, g_nStringIdCNF), 7, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_OR, g_nStringIdREQ), 3},
};

const SCFB_FBConnectionData FORTE_FB_TimerReset::scm_astDataConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxInFan), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_F_TRIG, g_nStringIdCLK), 1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_F_TRIG, g_nStringIdQ), 1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_RS, g_nStringIdS), 4},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_OR, g_nStringIdxOut), 3, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_RS, g_nStringIdR1), 4},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_RS, g_nStringIdQ1), 4, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxFanBlow), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_CTU, g_nStringIdCV), 5, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdET), -1},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIduiSP_TimeBlow), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_UINT_TO_INT, g_nStringIdIN), 6},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_UINT_TO_INT, g_nStringIdOUT), 6, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_CTU, g_nStringIdPV), 5},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_CTU, g_nStringIdQ), 5, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_OR, g_nStringIdxIn2), 3},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_R_TRIG, g_nStringIdQ), 2, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TP, g_nStringIdIN), 7},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TP, g_nStringIdQ), 7, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_OR, g_nStringIdxIn1), 3},
};

const SCFB_FBFannedOutConnectionData FORTE_FB_TimerReset::scm_astFannedOutDataConnections[] = {
  {0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_R_TRIG, g_nStringIdCLK), 2},
  {2, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_CTU, g_nStringIdR), 5},
  {3, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_CTU, g_nStringIdCU), 5},
};

const SCFB_FBNData FORTE_FB_TimerReset::scm_stFBNData = {
  8, scm_astInternalFBs,
  9, scm_astEventConnections,
  0, nullptr,
  10, scm_astDataConnections,
  3, scm_astFannedOutDataConnections,
  2, scm_astParamters
};



