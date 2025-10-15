/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: Sub_PWM2
 *** Description: Subapplication Type
 *** Version:
***     1.0: 2025-10-05/SERGSYSTH -  - 
 *************************************************************************/

#include "Sub_PWM2.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "Sub_PWM2_gen.cpp"
#endif


DEFINE_FIRMWARE_FB(FORTE_Sub_PWM2, g_nStringIdSub_PWM2)

const CStringDictionary::TStringId FORTE_Sub_PWM2::scm_anDataInputNames[] = {g_nStringIdxStart, g_nStringIdrY, g_nStringIdSP_Tp};

const CStringDictionary::TStringId FORTE_Sub_PWM2::scm_anDataInputTypeIds[] = {g_nStringIdBOOL, g_nStringIdREAL, g_nStringIdUINT};

const CStringDictionary::TStringId FORTE_Sub_PWM2::scm_anDataOutputNames[] = {g_nStringIdxPulseWidth, g_nStringIdrYout, g_nStringIdET};

const CStringDictionary::TStringId FORTE_Sub_PWM2::scm_anDataOutputTypeIds[] = {g_nStringIdBOOL, g_nStringIdREAL, g_nStringIdTIME};

const TForteInt16 FORTE_Sub_PWM2::scm_anEIWithIndexes[] = {-1, -1};
const CStringDictionary::TStringId FORTE_Sub_PWM2::scm_anEventInputNames[] = {g_nStringIdINIT, g_nStringIdREQ};

const TForteInt16 FORTE_Sub_PWM2::scm_anEOWithIndexes[] = {-1, -1};
const CStringDictionary::TStringId FORTE_Sub_PWM2::scm_anEventOutputNames[] = {g_nStringIdINITO, g_nStringIdCNF};


const SFBInterfaceSpec FORTE_Sub_PWM2::scm_stFBInterfaceSpec = {
  2, scm_anEventInputNames, nullptr, scm_anEIWithIndexes,
  2, scm_anEventOutputNames, nullptr, scm_anEOWithIndexes,
  3, scm_anDataInputNames, scm_anDataInputTypeIds,
  3, scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, nullptr
};

const SCFB_FBInstanceData FORTE_Sub_PWM2::scm_astInternalFBs[] = {
  {g_nStringIdFB_TP, g_nStringIdFB_TP},
  {g_nStringIdFB_And, g_nStringIdFB_And3},
  {g_nStringIdFB_OR, g_nStringIdFB_OR},
  {g_nStringIdFB_CondPWM, g_nStringIdFB_CondPWM},
  {g_nStringIdFB_BLINK, g_nStringIdFB_BLINKr},
  {g_nStringIdFB_UINT_TO_TIME, g_nStringIdFB_UINT_TO_TIME}
};

const SCFB_FBParameter FORTE_Sub_PWM2::scm_astParamters[] = {
  {4, g_nStringIdTIMEHIGH, "0.2"},
};

const SCFB_FBConnectionData FORTE_Sub_PWM2::scm_astEventConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TP, g_nStringIdCNF), 0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_And, g_nStringIdREQ), 1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_And, g_nStringIdCNF), 1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_OR, g_nStringIdREQ), 2},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_OR, g_nStringIdCNF), 2, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdCNF), -1},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdREQ), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_CondPWM, g_nStringIdREQ), 3},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_CondPWM, g_nStringIdCNF), 3, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_BLINK, g_nStringIdREQ), 4},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_UINT_TO_TIME, g_nStringIdCNF), 5, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TP, g_nStringIdREQ), 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_BLINK, g_nStringIdCNF), 4, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_UINT_TO_TIME, g_nStringIdREQ), 5},
};

const SCFB_FBConnectionData FORTE_Sub_PWM2::scm_astDataConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TP, g_nStringIdET), 0, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdET), -1},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxStart), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_And, g_nStringIdxIn1), 1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TP, g_nStringIdQ), 0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_And, g_nStringIdxIn2), 1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_And, g_nStringIdxOut), 1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_OR, g_nStringIdxIn2), 2},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_OR, g_nStringIdxOut), 2, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxPulseWidth), -1},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdrY), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_CondPWM, g_nStringIdrY), 3},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdSP_Tp), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_CondPWM, g_nStringIdSP_Tp), 3},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_CondPWM, g_nStringIdrYout), 3, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdrYout), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_CondPWM, g_nStringIdxYnol), 3, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_And, g_nStringIdxIn3), 1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_CondPWM, g_nStringIdxFull), 3, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_OR, g_nStringIdxIn1), 2},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_BLINK, g_nStringIdOUT), 4, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TP, g_nStringIdIN), 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_UINT_TO_TIME, g_nStringIdTime), 5, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TP, g_nStringIdPT), 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_CondPWM, g_nStringIdiTimeYout), 3, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_UINT_TO_TIME, g_nStringIdInValue), 5},
};

const SCFB_FBFannedOutConnectionData FORTE_Sub_PWM2::scm_astFannedOutDataConnections[] = {
  {1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_CondPWM, g_nStringIdxStart), 3},
  {1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_BLINK, g_nStringIdENABLE), 4},
  {6, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_BLINK, g_nStringIdTIMELOW), 4},
};

const SCFB_FBNData FORTE_Sub_PWM2::scm_stFBNData = {
  6, scm_astInternalFBs,
  7, scm_astEventConnections,
  0, nullptr,
  13, scm_astDataConnections,
  3, scm_astFannedOutDataConnections,
  1, scm_astParamters
};



