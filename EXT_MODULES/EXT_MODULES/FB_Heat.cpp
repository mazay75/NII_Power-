/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: FB_Heat
 *** Description: Subapplication Type
 *** Version:
***     1.0: 2024-11-26/sergdebwork -  - 
 *************************************************************************/

#include "FB_Heat.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "FB_Heat_gen.cpp"
#endif


DEFINE_FIRMWARE_FB(FORTE_FB_Heat, g_nStringIdFB_Heat)

const CStringDictionary::TStringId FORTE_FB_Heat::scm_anDataInputNames[] = {g_nStringIdFan, g_nStringIdin_PID, g_nStringIdin_PID_hys, g_nStringIdHYS, g_nStringIdT_ppw};

const CStringDictionary::TStringId FORTE_FB_Heat::scm_anDataInputTypeIds[] = {g_nStringIdBOOL, g_nStringIdREAL, g_nStringIdREAL, g_nStringIdREAL, g_nStringIdUINT};

const CStringDictionary::TStringId FORTE_FB_Heat::scm_anDataOutputNames[] = {g_nStringIdoutKM, g_nStringIdoutTTR};

const CStringDictionary::TStringId FORTE_FB_Heat::scm_anDataOutputTypeIds[] = {g_nStringIdBOOL, g_nStringIdBOOL};

const TForteInt16 FORTE_FB_Heat::scm_anEIWithIndexes[] = {-1};
const CStringDictionary::TStringId FORTE_FB_Heat::scm_anEventInputNames[] = {g_nStringIdREQ};

const TForteInt16 FORTE_FB_Heat::scm_anEOWithIndexes[] = {-1};
const CStringDictionary::TStringId FORTE_FB_Heat::scm_anEventOutputNames[] = {g_nStringIdCNF};


const SFBInterfaceSpec FORTE_FB_Heat::scm_stFBInterfaceSpec = {
  1, scm_anEventInputNames, nullptr, scm_anEIWithIndexes,
  1, scm_anEventOutputNames, nullptr, scm_anEOWithIndexes,
  5, scm_anDataInputNames, scm_anDataInputTypeIds,
  2, scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, nullptr
};

const SCFB_FBInstanceData FORTE_FB_Heat::scm_astInternalFBs[] = {
  {g_nStringIdF_REAL_TO_INT, g_nStringIdF_REAL_TO_INT},
  {g_nStringIdFB_And, g_nStringIdFB_And},
  {g_nStringIdFB_UINT_TO_TIME, g_nStringIdFB_UINT_TO_TIME},
  {g_nStringIdPWM, g_nStringIdPWM},
  {g_nStringIdFB_Hysteresis, g_nStringIdFB_Hysteresis}
};

const SCFB_FBParameter FORTE_FB_Heat::scm_astParamters[] = {
  {2, g_nStringIdMultiplier, "1000000000"},
  {4, g_nStringIdVal_OFF, "0"},
};

const SCFB_FBConnectionData FORTE_FB_Heat::scm_astEventConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdREQ), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_REAL_TO_INT, g_nStringIdREQ), 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_And, g_nStringIdCNF), 1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_UINT_TO_TIME, g_nStringIdREQ), 2},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_UINT_TO_TIME, g_nStringIdCNF), 2, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdPWM, g_nStringIdREQ), 3},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdPWM, g_nStringIdCNF), 3, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdCNF), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_REAL_TO_INT, g_nStringIdCNF), 0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_Hysteresis, g_nStringIdREQ), 4},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_Hysteresis, g_nStringIdCNF), 4, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_And, g_nStringIdREQ), 1},
};

const SCFB_FBConnectionData FORTE_FB_Heat::scm_astDataConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdFan), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_And, g_nStringIdxIn1), 1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_And, g_nStringIdxOut), 1, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdoutKM), -1},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdin_PID), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_REAL_TO_INT, g_nStringIdIN), 0},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdT_ppw), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_UINT_TO_TIME, g_nStringIdInValue), 2},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_UINT_TO_TIME, g_nStringIdTime), 2, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdPWM, g_nStringIdT), 3},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_REAL_TO_INT, g_nStringIdOUT), 0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdPWM, g_nStringIdDuty), 3},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdPWM, g_nStringIdQ), 3, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdoutTTR), -1},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdHYS), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_Hysteresis, g_nStringIdVal_ON), 4},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_Hysteresis, g_nStringIdQ), 4, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_And, g_nStringIdxIn2), 1},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdin_PID_hys), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_Hysteresis, g_nStringIdValue), 4},
};

const SCFB_FBFannedOutConnectionData FORTE_FB_Heat::scm_astFannedOutDataConnections[] = {
  {1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdPWM, g_nStringIdExecute), 3},
};

const SCFB_FBNData FORTE_FB_Heat::scm_stFBNData = {
  5, scm_astInternalFBs,
  6, scm_astEventConnections,
  0, nullptr,
  10, scm_astDataConnections,
  1, scm_astFannedOutDataConnections,
  2, scm_astParamters
};



