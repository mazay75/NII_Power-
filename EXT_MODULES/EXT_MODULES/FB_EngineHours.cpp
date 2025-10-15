/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: FB_EngineHours
 *** Description: Subapplication Type
 *** Version:
***     1.0: 2024-11-28/sergdebwork -  - 
 *************************************************************************/

#include "FB_EngineHours.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "FB_EngineHours_gen.cpp"
#endif


DEFINE_FIRMWARE_FB(FORTE_FB_EngineHours, g_nStringIdFB_EngineHours)

const CStringDictionary::TStringId FORTE_FB_EngineHours::scm_anDataInputNames[] = {g_nStringIdInFan, g_nStringIdinitEM, g_nStringIdResetEM, g_nStringIdcycTime};

const CStringDictionary::TStringId FORTE_FB_EngineHours::scm_anDataInputTypeIds[] = {g_nStringIdBOOL, g_nStringIdUDINT, g_nStringIdBOOL, g_nStringIdTIME};

const CStringDictionary::TStringId FORTE_FB_EngineHours::scm_anDataOutputNames[] = {g_nStringIdoutEM, g_nStringIdoutEH, g_nStringIdET};

const CStringDictionary::TStringId FORTE_FB_EngineHours::scm_anDataOutputTypeIds[] = {g_nStringIdUDINT, g_nStringIdUDINT, g_nStringIdTIME};

const TForteInt16 FORTE_FB_EngineHours::scm_anEIWithIndexes[] = {-1};
const CStringDictionary::TStringId FORTE_FB_EngineHours::scm_anEventInputNames[] = {g_nStringIdREQ};

const TForteInt16 FORTE_FB_EngineHours::scm_anEOWithIndexes[] = {-1, -1};
const CStringDictionary::TStringId FORTE_FB_EngineHours::scm_anEventOutputNames[] = {g_nStringIdCNF, g_nStringIdWRTM};


const SFBInterfaceSpec FORTE_FB_EngineHours::scm_stFBInterfaceSpec = {
  1, scm_anEventInputNames, nullptr, scm_anEIWithIndexes,
  2, scm_anEventOutputNames, nullptr, scm_anEOWithIndexes,
  4, scm_anDataInputNames, scm_anDataInputTypeIds,
  3, scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, nullptr
};

const SCFB_FBInstanceData FORTE_FB_EngineHours::scm_astInternalFBs[] = {
  {g_nStringIdFB_RS, g_nStringIdFB_RS},
  {g_nStringIdFB_TON, g_nStringIdFB_TON},
  {g_nStringIdE_F_TRIG, g_nStringIdE_F_TRIG},
  {g_nStringIdFB_CT_EH, g_nStringIdFB_CT_EH},
  {g_nStringIdF_DIV, g_nStringIdF_DIV},
  {g_nStringIdINT2INT, g_nStringIdINT2INT},
  {g_nStringIdUDINT2UDINT, g_nStringIdUDINT2UDINT},
  {g_nStringIdUDINT2UDINT_1, g_nStringIdUDINT2UDINT}
};

const SCFB_FBParameter FORTE_FB_EngineHours::scm_astParamters[] = {
  {1, g_nStringIdPT, "T#60s"},
  {5, g_nStringIdIN, "60"},
};

const SCFB_FBConnectionData FORTE_FB_EngineHours::scm_astEventConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_RS, g_nStringIdCNF), 0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TON, g_nStringIdREQ), 1},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdREQ), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_RS, g_nStringIdREQ), 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TON, g_nStringIdCNF), 1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_CT_EH, g_nStringIdREQ), 3},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_CT_EH, g_nStringIdCNF), 3, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_F_TRIG, g_nStringIdEI), 2},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdUDINT2UDINT, g_nStringIdCNF), 6, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdINT2INT, g_nStringIdREQ), 5},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdINT2INT, g_nStringIdCNF), 5, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_DIV, g_nStringIdREQ), 4},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_DIV, g_nStringIdCNF), 4, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdUDINT2UDINT_1, g_nStringIdREQ), 7},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_F_TRIG, g_nStringIdEO), 2, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdWRTM), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdUDINT2UDINT_1, g_nStringIdCNF), 7, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdCNF), -1},
};

const SCFB_FBFannedOutConnectionData FORTE_FB_EngineHours::scm_astFannedOutEventConnections[] = {
  {3, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdUDINT2UDINT, g_nStringIdREQ), 6},
};

const SCFB_FBConnectionData FORTE_FB_EngineHours::scm_astDataConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdInFan), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_RS, g_nStringIdS), 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TON, g_nStringIdQ), 1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_RS, g_nStringIdR1), 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_RS, g_nStringIdQ1), 0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TON, g_nStringIdIN), 1},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdinitEM), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_CT_EH, g_nStringIdinitVal), 3},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdResetEM), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_CT_EH, g_nStringIdReSet), 3},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_CT_EH, g_nStringIdoutEH), 3, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdoutEM), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_CT_EH, g_nStringIdclk), 3, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_F_TRIG, g_nStringIdQI), 2},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdcycTime), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TON, g_nStringIdPT), 1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TON, g_nStringIdET), 1, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdET), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdINT2INT, g_nStringIdOUT), 5, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_DIV, g_nStringIdIN2), 4},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdUDINT2UDINT, g_nStringIdOUT), 6, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_DIV, g_nStringIdIN1), 4},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_DIV, g_nStringIdOUT), 4, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdUDINT2UDINT_1, g_nStringIdIN), 7},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdUDINT2UDINT_1, g_nStringIdOUT), 7, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdoutEH), -1},
};

const SCFB_FBFannedOutConnectionData FORTE_FB_EngineHours::scm_astFannedOutDataConnections[] = {
  {1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_CT_EH, g_nStringIdinCT), 3},
  {5, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdUDINT2UDINT, g_nStringIdIN), 6},
};

const SCFB_FBNData FORTE_FB_EngineHours::scm_stFBNData = {
  8, scm_astInternalFBs,
  9, scm_astEventConnections,
  1, scm_astFannedOutEventConnections,
  13, scm_astDataConnections,
  2, scm_astFannedOutDataConnections,
  2, scm_astParamters
};



