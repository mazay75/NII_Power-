/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: ReSetCmd_BOOL
 *** Description: Subapplication Type
 *** Version:
***     1.0: 2024-11-26/sergdebwork -  - 
 *************************************************************************/

#include "ReSetCmd_BOOL.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "ReSetCmd_BOOL_gen.cpp"
#endif


DEFINE_FIRMWARE_FB(FORTE_ReSetCmd_BOOL, g_nStringIdReSetCmd_BOOL)

const CStringDictionary::TStringId FORTE_ReSetCmd_BOOL::scm_anDataInputNames[] = {g_nStringIdInCmd, g_nStringIdDelay};

const CStringDictionary::TStringId FORTE_ReSetCmd_BOOL::scm_anDataInputTypeIds[] = {g_nStringIdBOOL, g_nStringIdTIME};

const CStringDictionary::TStringId FORTE_ReSetCmd_BOOL::scm_anDataOutputNames[] = {g_nStringIdOutCmd};

const CStringDictionary::TStringId FORTE_ReSetCmd_BOOL::scm_anDataOutputTypeIds[] = {g_nStringIdBOOL};

const TForteInt16 FORTE_ReSetCmd_BOOL::scm_anEIWithIndexes[] = {-1};
const CStringDictionary::TStringId FORTE_ReSetCmd_BOOL::scm_anEventInputNames[] = {g_nStringIdREQ};

const TForteInt16 FORTE_ReSetCmd_BOOL::scm_anEOWithIndexes[] = {-1};
const CStringDictionary::TStringId FORTE_ReSetCmd_BOOL::scm_anEventOutputNames[] = {g_nStringIdCNF};


const SFBInterfaceSpec FORTE_ReSetCmd_BOOL::scm_stFBInterfaceSpec = {
  1, scm_anEventInputNames, nullptr, scm_anEIWithIndexes,
  1, scm_anEventOutputNames, nullptr, scm_anEOWithIndexes,
  2, scm_anDataInputNames, scm_anDataInputTypeIds,
  1, scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, nullptr
};

const SCFB_FBInstanceData FORTE_ReSetCmd_BOOL::scm_astInternalFBs[] = {
  {g_nStringIdReSetCmd, g_nStringIdReSetCmd},
  {g_nStringIdBOOL2BOOL, g_nStringIdBOOL2BOOL},
  {g_nStringIdBOOL2BOOL_1, g_nStringIdBOOL2BOOL}
};


const SCFB_FBConnectionData FORTE_ReSetCmd_BOOL::scm_astEventConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdREQ), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdBOOL2BOOL, g_nStringIdREQ), 1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdBOOL2BOOL, g_nStringIdCNF), 1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdReSetCmd, g_nStringIdREQ), 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdReSetCmd, g_nStringIdCNF), 0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdBOOL2BOOL_1, g_nStringIdREQ), 2},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdBOOL2BOOL_1, g_nStringIdCNF), 2, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdCNF), -1},
};

const SCFB_FBConnectionData FORTE_ReSetCmd_BOOL::scm_astDataConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdDelay), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdReSetCmd, g_nStringIdDelay), 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdReSetCmd, g_nStringIdOutCmd), 0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdBOOL2BOOL_1, g_nStringIdIN), 2},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdBOOL2BOOL_1, g_nStringIdOUT), 2, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdOutCmd), -1},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdInCmd), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdBOOL2BOOL, g_nStringIdIN), 1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdBOOL2BOOL, g_nStringIdOUT), 1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdReSetCmd, g_nStringIdInCmd), 0},
};

const SCFB_FBNData FORTE_ReSetCmd_BOOL::scm_stFBNData = {
  3, scm_astInternalFBs,
  4, scm_astEventConnections,
  0, nullptr,
  5, scm_astDataConnections,
  0, nullptr,
  0, nullptr
};



