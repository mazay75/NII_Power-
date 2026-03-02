/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: ReSetCmd_INT
 *** Description: Subapplication Type
 *** Version:
***     1.0: 2024-11-26/sergdebwork -  - 
 *************************************************************************/

#include "ReSetCmd_INT.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "ReSetCmd_INT_gen.cpp"
#endif


DEFINE_FIRMWARE_FB(FORTE_ReSetCmd_INT, g_nStringIdReSetCmd_INT)

const CStringDictionary::TStringId FORTE_ReSetCmd_INT::scm_anDataInputNames[] = {g_nStringIdInCmd, g_nStringIdDelay};

const CStringDictionary::TStringId FORTE_ReSetCmd_INT::scm_anDataInputTypeIds[] = {g_nStringIdINT, g_nStringIdTIME};

const CStringDictionary::TStringId FORTE_ReSetCmd_INT::scm_anDataOutputNames[] = {g_nStringIdOutCmd};

const CStringDictionary::TStringId FORTE_ReSetCmd_INT::scm_anDataOutputTypeIds[] = {g_nStringIdINT};

const TForteInt16 FORTE_ReSetCmd_INT::scm_anEIWithIndexes[] = {-1};
const CStringDictionary::TStringId FORTE_ReSetCmd_INT::scm_anEventInputNames[] = {g_nStringIdREQ};

const TForteInt16 FORTE_ReSetCmd_INT::scm_anEOWithIndexes[] = {-1};
const CStringDictionary::TStringId FORTE_ReSetCmd_INT::scm_anEventOutputNames[] = {g_nStringIdCNF};


const SFBInterfaceSpec FORTE_ReSetCmd_INT::scm_stFBInterfaceSpec = {
  1, scm_anEventInputNames, nullptr, scm_anEIWithIndexes,
  1, scm_anEventOutputNames, nullptr, scm_anEOWithIndexes,
  2, scm_anDataInputNames, scm_anDataInputTypeIds,
  1, scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, nullptr
};

const SCFB_FBInstanceData FORTE_ReSetCmd_INT::scm_astInternalFBs[] = {
  {g_nStringIdReSetCmd, g_nStringIdReSetCmd},
  {g_nStringIdFB_INT_TO_BOOL, g_nStringIdFB_INT_TO_BOOL},
  {g_nStringIdFB_BOOL_TO_INT, g_nStringIdFB_INT_TO_BOOL}
};


const SCFB_FBConnectionData FORTE_ReSetCmd_INT::scm_astEventConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_INT_TO_BOOL, g_nStringIdCNF), 1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdReSetCmd, g_nStringIdREQ), 0},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdREQ), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_INT_TO_BOOL, g_nStringIdREQ), 1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdReSetCmd, g_nStringIdCNF), 0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_BOOL_TO_INT, g_nStringIdREQ), 2},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_BOOL_TO_INT, g_nStringIdCNF), 2, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdCNF), -1},
};

const SCFB_FBConnectionData FORTE_ReSetCmd_INT::scm_astDataConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdDelay), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdReSetCmd, g_nStringIdDelay), 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_INT_TO_BOOL, g_nStringIdout), 1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdReSetCmd, g_nStringIdInCmd), 0},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdInCmd), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_INT_TO_BOOL, g_nStringIdin), 1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdReSetCmd, g_nStringIdOutCmd), 0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_BOOL_TO_INT, g_nStringIdin), 2},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_BOOL_TO_INT, g_nStringIdout), 2, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdOutCmd), -1},
};

const SCFB_FBNData FORTE_ReSetCmd_INT::scm_stFBNData = {
  3, scm_astInternalFBs,
  4, scm_astEventConnections,
  0, nullptr,
  5, scm_astDataConnections,
  0, nullptr,
  0, nullptr
};



