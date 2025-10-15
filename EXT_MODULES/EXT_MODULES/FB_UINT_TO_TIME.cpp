/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: FB_UINT_TO_TIME
 *** Description: Конвертор UINT в тип TIME
 *** Version:
***     1.0: 2024-08-29/NPC-IT -  - 
 *************************************************************************/

#include "FB_UINT_TO_TIME.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "FB_UINT_TO_TIME_gen.cpp"
#endif


DEFINE_FIRMWARE_FB(FORTE_FB_UINT_TO_TIME, g_nStringIdFB_UINT_TO_TIME)

const CStringDictionary::TStringId FORTE_FB_UINT_TO_TIME::scm_anDataInputNames[] = {g_nStringIdInValue, g_nStringIdMultiplier};

const CStringDictionary::TStringId FORTE_FB_UINT_TO_TIME::scm_anDataInputTypeIds[] = {g_nStringIdUINT, g_nStringIdUDINT};

const CStringDictionary::TStringId FORTE_FB_UINT_TO_TIME::scm_anDataOutputNames[] = {g_nStringIdTime};

const CStringDictionary::TStringId FORTE_FB_UINT_TO_TIME::scm_anDataOutputTypeIds[] = {g_nStringIdTIME};

const TDataIOID FORTE_FB_UINT_TO_TIME::scm_anEIWith[] = {0, 1, 255};
const TForteInt16 FORTE_FB_UINT_TO_TIME::scm_anEIWithIndexes[] = {0};
const CStringDictionary::TStringId FORTE_FB_UINT_TO_TIME::scm_anEventInputNames[] = {g_nStringIdREQ};

const TDataIOID FORTE_FB_UINT_TO_TIME::scm_anEOWith[] = {0, 255};
const TForteInt16 FORTE_FB_UINT_TO_TIME::scm_anEOWithIndexes[] = {0};
const CStringDictionary::TStringId FORTE_FB_UINT_TO_TIME::scm_anEventOutputNames[] = {g_nStringIdCNF};


const SFBInterfaceSpec FORTE_FB_UINT_TO_TIME::scm_stFBInterfaceSpec = {
  1, scm_anEventInputNames, scm_anEIWith, scm_anEIWithIndexes,
  1, scm_anEventOutputNames, scm_anEOWith, scm_anEOWithIndexes,
  2, scm_anDataInputNames, scm_anDataInputTypeIds,
  1, scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, nullptr
};

const SCFB_FBInstanceData FORTE_FB_UINT_TO_TIME::scm_astInternalFBs[] = {
  {g_nStringIdF_STRING_TO_TIME, g_nStringIdF_STRING_TO_TIME},
  {g_nStringIdTIME2TIME, g_nStringIdTIME2TIME},
  {g_nStringIdF_MULTIME, g_nStringIdF_MULTIME},
  {g_nStringIdF_UINT_TO_STRING, g_nStringIdF_UINT_TO_STRING}
};


const SCFB_FBConnectionData FORTE_FB_UINT_TO_TIME::scm_astEventConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_STRING_TO_TIME, g_nStringIdCNF), 0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdTIME2TIME, g_nStringIdREQ), 1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_MULTIME, g_nStringIdCNF), 2, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdCNF), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdTIME2TIME, g_nStringIdCNF), 1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_MULTIME, g_nStringIdREQ), 2},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_UINT_TO_STRING, g_nStringIdCNF), 3, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_STRING_TO_TIME, g_nStringIdREQ), 0},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdREQ), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_UINT_TO_STRING, g_nStringIdREQ), 3},
};

const SCFB_FBConnectionData FORTE_FB_UINT_TO_TIME::scm_astDataConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_STRING_TO_TIME, g_nStringIdOUT), 0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdTIME2TIME, g_nStringIdIN), 1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdTIME2TIME, g_nStringIdOUT), 1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_MULTIME, g_nStringIdIN1), 2},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_MULTIME, g_nStringIdOUT), 2, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdTime), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_UINT_TO_STRING, g_nStringIdOUT), 3, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_STRING_TO_TIME, g_nStringIdIN), 0},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdInValue), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_UINT_TO_STRING, g_nStringIdIN), 3},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdMultiplier), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_MULTIME, g_nStringIdIN2), 2},
};

const SCFB_FBNData FORTE_FB_UINT_TO_TIME::scm_stFBNData = {
  4, scm_astInternalFBs,
  5, scm_astEventConnections,
  0, nullptr,
  6, scm_astDataConnections,
  0, nullptr,
  0, nullptr
};



