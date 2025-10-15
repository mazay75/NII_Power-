/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: ReSetCmd_WORD
 *** Description: Subapplication Type
 *** Version:
***     1.0: 2024-11-26/sergdebwork -  - 
 *************************************************************************/

#include "ReSetCmd_WORD.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "ReSetCmd_WORD_gen.cpp"
#endif


DEFINE_FIRMWARE_FB(FORTE_ReSetCmd_WORD, g_nStringIdReSetCmd_WORD)

const CStringDictionary::TStringId FORTE_ReSetCmd_WORD::scm_anDataInputNames[] = {g_nStringIdInCmd, g_nStringIdDelay};

const CStringDictionary::TStringId FORTE_ReSetCmd_WORD::scm_anDataInputTypeIds[] = {g_nStringIdWORD, g_nStringIdTIME};

const CStringDictionary::TStringId FORTE_ReSetCmd_WORD::scm_anDataOutputNames[] = {g_nStringIdOutCmd};

const CStringDictionary::TStringId FORTE_ReSetCmd_WORD::scm_anDataOutputTypeIds[] = {g_nStringIdWORD};

const TForteInt16 FORTE_ReSetCmd_WORD::scm_anEIWithIndexes[] = {-1};
const CStringDictionary::TStringId FORTE_ReSetCmd_WORD::scm_anEventInputNames[] = {g_nStringIdREQ};

const TForteInt16 FORTE_ReSetCmd_WORD::scm_anEOWithIndexes[] = {-1};
const CStringDictionary::TStringId FORTE_ReSetCmd_WORD::scm_anEventOutputNames[] = {g_nStringIdCNF};


const SFBInterfaceSpec FORTE_ReSetCmd_WORD::scm_stFBInterfaceSpec = {
  1, scm_anEventInputNames, nullptr, scm_anEIWithIndexes,
  1, scm_anEventOutputNames, nullptr, scm_anEOWithIndexes,
  2, scm_anDataInputNames, scm_anDataInputTypeIds,
  1, scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, nullptr
};

const SCFB_FBInstanceData FORTE_ReSetCmd_WORD::scm_astInternalFBs[] = {
  {g_nStringIdReSetCmd, g_nStringIdReSetCmd},
  {g_nStringIdWORD2WORD, g_nStringIdWORD2WORD},
  {g_nStringIdWORD2WORD_1, g_nStringIdWORD2WORD}
};


const SCFB_FBConnectionData FORTE_ReSetCmd_WORD::scm_astEventConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdREQ), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdWORD2WORD, g_nStringIdREQ), 1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdWORD2WORD, g_nStringIdCNF), 1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdReSetCmd, g_nStringIdREQ), 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdReSetCmd, g_nStringIdCNF), 0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdWORD2WORD_1, g_nStringIdREQ), 2},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdWORD2WORD_1, g_nStringIdCNF), 2, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdCNF), -1},
};

const SCFB_FBConnectionData FORTE_ReSetCmd_WORD::scm_astDataConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdDelay), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdReSetCmd, g_nStringIdDelay), 0},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdInCmd), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdWORD2WORD, g_nStringIdIN), 1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdWORD2WORD, g_nStringIdOUT), 1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdReSetCmd, g_nStringIdInCmd), 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdReSetCmd, g_nStringIdOutCmd), 0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdWORD2WORD_1, g_nStringIdIN), 2},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdWORD2WORD_1, g_nStringIdOUT), 2, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdOutCmd), -1},
};

const SCFB_FBNData FORTE_ReSetCmd_WORD::scm_stFBNData = {
  3, scm_astInternalFBs,
  4, scm_astEventConnections,
  0, nullptr,
  5, scm_astDataConnections,
  0, nullptr,
  0, nullptr
};



