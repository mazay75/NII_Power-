/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: FB_PWM
 *** Description: Composite FB wrapping other FBs
 *** Version:
***     1.0: 2025-10-03/sergdeb -  - 
 *************************************************************************/

#include "FB_PWM.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "FB_PWM_gen.cpp"
#endif


DEFINE_FIRMWARE_FB(FORTE_FB_PWM, g_nStringIdFB_PWM)

const CStringDictionary::TStringId FORTE_FB_PWM::scm_anDataInputNames[] = {g_nStringIdxStart, g_nStringIdrY, g_nStringIdSP_Tp};

const CStringDictionary::TStringId FORTE_FB_PWM::scm_anDataInputTypeIds[] = {g_nStringIdBOOL, g_nStringIdREAL, g_nStringIdUINT};

const CStringDictionary::TStringId FORTE_FB_PWM::scm_anDataOutputNames[] = {g_nStringIdxPulseWidth, g_nStringIdrYout, g_nStringIdET};

const CStringDictionary::TStringId FORTE_FB_PWM::scm_anDataOutputTypeIds[] = {g_nStringIdBOOL, g_nStringIdREAL, g_nStringIdTIME};

const TDataIOID FORTE_FB_PWM::scm_anEIWith[] = {0, 1, 2, 255};
const TForteInt16 FORTE_FB_PWM::scm_anEIWithIndexes[] = {0};
const CStringDictionary::TStringId FORTE_FB_PWM::scm_anEventInputNames[] = {g_nStringIdREQ};

const TDataIOID FORTE_FB_PWM::scm_anEOWith[] = {0, 2, 1, 255};
const TForteInt16 FORTE_FB_PWM::scm_anEOWithIndexes[] = {0};
const CStringDictionary::TStringId FORTE_FB_PWM::scm_anEventOutputNames[] = {g_nStringIdCNF};


const SFBInterfaceSpec FORTE_FB_PWM::scm_stFBInterfaceSpec = {
  1, scm_anEventInputNames, scm_anEIWith, scm_anEIWithIndexes,
  1, scm_anEventOutputNames, scm_anEOWith, scm_anEOWithIndexes,
  3, scm_anDataInputNames, scm_anDataInputTypeIds,
  3, scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, nullptr
};

const SCFB_FBInstanceData FORTE_FB_PWM::scm_astInternalFBs[] = {
  {g_nStringIdFB_TP, g_nStringIdFB_TP},
  {g_nStringIdFB_And, g_nStringIdFB_And},
  {g_nStringIdFB_CondPWM, g_nStringIdFB_CondPWM},
  {g_nStringIdFB_BLINK, g_nStringIdFB_BLINK},
  {g_nStringIdFB_UINT_TO_TIME2, g_nStringIdFB_UINT_TO_TIME}
};

const SCFB_FBParameter FORTE_FB_PWM::scm_astParamters[] = {
  {3, g_nStringIdTIMEHIGH, "1"},
};

const SCFB_FBConnectionData FORTE_FB_PWM::scm_astEventConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_And, g_nStringIdCNF), 1, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdCNF), -1},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdREQ), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_CondPWM, g_nStringIdREQ), 2},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_CondPWM, g_nStringIdCNF), 2, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_BLINK, g_nStringIdREQ), 3},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TP, g_nStringIdCNF), 0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_And, g_nStringIdREQ), 1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_BLINK, g_nStringIdCNF), 3, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_UINT_TO_TIME2, g_nStringIdREQ), 4},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_UINT_TO_TIME2, g_nStringIdCNF), 4, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TP, g_nStringIdREQ), 0},
};

const SCFB_FBConnectionData FORTE_FB_PWM::scm_astDataConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TP, g_nStringIdET), 0, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdET), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TP, g_nStringIdQ), 0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_And, g_nStringIdxIn1), 1},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxStart), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_And, g_nStringIdxIn2), 1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_And, g_nStringIdxOut), 1, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxPulseWidth), -1},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdrY), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_CondPWM, g_nStringIdrY), 2},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdSP_Tp), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_CondPWM, g_nStringIdSP_Tp), 2},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_CondPWM, g_nStringIdrYout), 2, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdrYout), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_UINT_TO_TIME2, g_nStringIdTime), 4, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TP, g_nStringIdPT), 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_CondPWM, g_nStringIdiTimeYout), 2, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_UINT_TO_TIME2, g_nStringIdInValue), 4},
};

const SCFB_FBFannedOutConnectionData FORTE_FB_PWM::scm_astFannedOutDataConnections[] = {
  {2, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_CondPWM, g_nStringIdxStart), 2},
  {2, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_BLINK, g_nStringIdENABLE), 3},
  {5, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_BLINK, g_nStringIdTIMELOW), 3},
};

const SCFB_FBNData FORTE_FB_PWM::scm_stFBNData = {
  5, scm_astInternalFBs,
  6, scm_astEventConnections,
  0, nullptr,
  9, scm_astDataConnections,
  3, scm_astFannedOutDataConnections,
  1, scm_astParamters
};



