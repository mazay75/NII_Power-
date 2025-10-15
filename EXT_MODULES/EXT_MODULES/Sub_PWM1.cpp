/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: Sub_PWM1
 *** Description: Subapplication Type
 *** Version:
***     1.0: 2025-10-05/SERGSYSTH -  - 
 *************************************************************************/

#include "Sub_PWM1.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "Sub_PWM1_gen.cpp"
#endif


DEFINE_FIRMWARE_FB(FORTE_Sub_PWM1, g_nStringIdSub_PWM1)

const CStringDictionary::TStringId FORTE_Sub_PWM1::scm_anDataInputNames[] = {g_nStringIdxStart, g_nStringIdrY, g_nStringIdSP_Tp};

const CStringDictionary::TStringId FORTE_Sub_PWM1::scm_anDataInputTypeIds[] = {g_nStringIdBOOL, g_nStringIdREAL, g_nStringIdUINT};

const CStringDictionary::TStringId FORTE_Sub_PWM1::scm_anDataOutputNames[] = {g_nStringIdxPulseWidth, g_nStringIdrYout, g_nStringIdET};

const CStringDictionary::TStringId FORTE_Sub_PWM1::scm_anDataOutputTypeIds[] = {g_nStringIdBOOL, g_nStringIdREAL, g_nStringIdTIME};

const TForteInt16 FORTE_Sub_PWM1::scm_anEIWithIndexes[] = {-1, -1};
const CStringDictionary::TStringId FORTE_Sub_PWM1::scm_anEventInputNames[] = {g_nStringIdINIT, g_nStringIdREQ};

const TForteInt16 FORTE_Sub_PWM1::scm_anEOWithIndexes[] = {-1, -1};
const CStringDictionary::TStringId FORTE_Sub_PWM1::scm_anEventOutputNames[] = {g_nStringIdINITO, g_nStringIdCNF};


const SFBInterfaceSpec FORTE_Sub_PWM1::scm_stFBInterfaceSpec = {
  2, scm_anEventInputNames, nullptr, scm_anEIWithIndexes,
  2, scm_anEventOutputNames, nullptr, scm_anEOWithIndexes,
  3, scm_anDataInputNames, scm_anDataInputTypeIds,
  3, scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, nullptr
};

const SCFB_FBInstanceData FORTE_Sub_PWM1::scm_astInternalFBs[] = {
  {g_nStringIdFB_CondPWM, g_nStringIdFB_CondPWM},
  {g_nStringIdFB_UINT_TO_TIME, g_nStringIdFB_UINT_TO_TIME},
  {g_nStringIdFB_TP, g_nStringIdFB_TP},
  {g_nStringIdFB_RS, g_nStringIdFB_RS},
  {g_nStringIdFB_TON, g_nStringIdFB_TON},
  {g_nStringIdFB_UINT_TO_TIME_1, g_nStringIdFB_UINT_TO_TIME}
};

const SCFB_FBParameter FORTE_Sub_PWM1::scm_astParamters[] = {
  {1, g_nStringIdMultiplier, "1000000000"},
  {5, g_nStringIdMultiplier, "1000000000"},
};

const SCFB_FBConnectionData FORTE_Sub_PWM1::scm_astEventConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_UINT_TO_TIME_1, g_nStringIdCNF), 5, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TON, g_nStringIdREQ), 4},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_RS, g_nStringIdCNF), 3, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_UINT_TO_TIME_1, g_nStringIdREQ), 5},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdREQ), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_CondPWM, g_nStringIdREQ), 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_CondPWM, g_nStringIdCNF), 0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_UINT_TO_TIME, g_nStringIdREQ), 1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_UINT_TO_TIME, g_nStringIdCNF), 1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_RS, g_nStringIdREQ), 3},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TON, g_nStringIdCNF), 4, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TP, g_nStringIdREQ), 2},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TP, g_nStringIdCNF), 2, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdCNF), -1},
};

const SCFB_FBConnectionData FORTE_Sub_PWM1::scm_astDataConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TON, g_nStringIdQ), 4, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_RS, g_nStringIdR1), 3},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_UINT_TO_TIME_1, g_nStringIdTime), 5, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TON, g_nStringIdPT), 4},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_RS, g_nStringIdQ1), 3, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TON, g_nStringIdIN), 4},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxStart), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_CondPWM, g_nStringIdxStart), 0},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdrY), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_CondPWM, g_nStringIdrY), 0},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdSP_Tp), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_CondPWM, g_nStringIdSP_Tp), 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_CondPWM, g_nStringIdrYout), 0, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdrYout), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_CondPWM, g_nStringIdiTimeYout), 0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_UINT_TO_TIME, g_nStringIdInValue), 1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_UINT_TO_TIME, g_nStringIdTime), 1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TP, g_nStringIdPT), 2},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TP, g_nStringIdQ), 2, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxPulseWidth), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TP, g_nStringIdET), 2, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdET), -1},
};

const SCFB_FBFannedOutConnectionData FORTE_Sub_PWM1::scm_astFannedOutDataConnections[] = {
  {2, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TP, g_nStringIdIN), 2},
  {3, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_RS, g_nStringIdS), 3},
  {5, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_UINT_TO_TIME_1, g_nStringIdInValue), 5},
};

const SCFB_FBNData FORTE_Sub_PWM1::scm_stFBNData = {
  6, scm_astInternalFBs,
  7, scm_astEventConnections,
  0, nullptr,
  11, scm_astDataConnections,
  3, scm_astFannedOutDataConnections,
  2, scm_astParamters
};



