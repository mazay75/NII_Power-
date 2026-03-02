/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: ReSetCmd
 *** Description: Subapplication Type
 *** Version:
***     1.0: 2024-11-26/sergdebwork -  - 
 *************************************************************************/

#include "ReSetCmd.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "ReSetCmd_gen.cpp"
#endif


DEFINE_FIRMWARE_FB(FORTE_ReSetCmd, g_nStringIdReSetCmd)

const CStringDictionary::TStringId FORTE_ReSetCmd::scm_anDataInputNames[] = {g_nStringIdInCmd, g_nStringIdDelay};

const CStringDictionary::TStringId FORTE_ReSetCmd::scm_anDataInputTypeIds[] = {g_nStringIdBOOL, g_nStringIdTIME};

const CStringDictionary::TStringId FORTE_ReSetCmd::scm_anDataOutputNames[] = {g_nStringIdOutCmd};

const CStringDictionary::TStringId FORTE_ReSetCmd::scm_anDataOutputTypeIds[] = {g_nStringIdBOOL};

const TForteInt16 FORTE_ReSetCmd::scm_anEIWithIndexes[] = {-1};
const CStringDictionary::TStringId FORTE_ReSetCmd::scm_anEventInputNames[] = {g_nStringIdREQ};

const TForteInt16 FORTE_ReSetCmd::scm_anEOWithIndexes[] = {-1};
const CStringDictionary::TStringId FORTE_ReSetCmd::scm_anEventOutputNames[] = {g_nStringIdCNF};


const SFBInterfaceSpec FORTE_ReSetCmd::scm_stFBInterfaceSpec = {
  1, scm_anEventInputNames, nullptr, scm_anEIWithIndexes,
  1, scm_anEventOutputNames, nullptr, scm_anEOWithIndexes,
  2, scm_anDataInputNames, scm_anDataInputTypeIds,
  1, scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, nullptr
};

const SCFB_FBInstanceData FORTE_ReSetCmd::scm_astInternalFBs[] = {
  {g_nStringIdE_DELAY, g_nStringIdE_DELAY},
  {g_nStringIdF_MOVE, g_nStringIdF_MOVE},
  {g_nStringIdE_SELECT, g_nStringIdE_SELECT},
  {g_nStringIdBOOL2BOOL, g_nStringIdBOOL2BOOL}
};

const SCFB_FBParameter FORTE_ReSetCmd::scm_astParamters[] = {
  {3, g_nStringIdIN, "false"},
};

const SCFB_FBConnectionData FORTE_ReSetCmd::scm_astEventConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_SELECT, g_nStringIdEO), 2, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_DELAY, g_nStringIdSTART), 0},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdREQ), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_SELECT, g_nStringIdEI1), 2},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_MOVE, g_nStringIdCNF), 1, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdCNF), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_DELAY, g_nStringIdEO), 0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdBOOL2BOOL, g_nStringIdREQ), 3},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdBOOL2BOOL, g_nStringIdCNF), 3, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_MOVE, g_nStringIdREQ), 1},
};

const SCFB_FBConnectionData FORTE_ReSetCmd::scm_astDataConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdInCmd), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_SELECT, g_nStringIdG), 2},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdDelay), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_DELAY, g_nStringIdDT), 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_MOVE, g_nStringIdOUT), 1, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdOutCmd), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdBOOL2BOOL, g_nStringIdOUT), 3, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_MOVE, g_nStringIdIN), 1},
};

const SCFB_FBNData FORTE_ReSetCmd::scm_stFBNData = {
  4, scm_astInternalFBs,
  5, scm_astEventConnections,
  0, nullptr,
  4, scm_astDataConnections,
  0, nullptr,
  1, scm_astParamters
};



