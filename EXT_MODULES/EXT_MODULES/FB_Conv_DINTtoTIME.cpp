/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: FB_Conv_DINTtoTIME
 *** Description: Composite FB wrapping other FBs
 *** Version:
***     1.0: 2024-07-22/SERGWORK -  - 
 *************************************************************************/

#include "FB_Conv_DINTtoTIME.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "FB_Conv_DINTtoTIME_gen.cpp"
#endif


DEFINE_FIRMWARE_FB(FORTE_FB_Conv_DINTtoTIME, g_nStringIdFB_Conv_DINTtoTIME)

const CStringDictionary::TStringId FORTE_FB_Conv_DINTtoTIME::scm_anDataInputNames[] = {g_nStringIdIn1};

const CStringDictionary::TStringId FORTE_FB_Conv_DINTtoTIME::scm_anDataInputTypeIds[] = {g_nStringIdINT};

const CStringDictionary::TStringId FORTE_FB_Conv_DINTtoTIME::scm_anDataOutputNames[] = {g_nStringIdOut1};

const CStringDictionary::TStringId FORTE_FB_Conv_DINTtoTIME::scm_anDataOutputTypeIds[] = {g_nStringIdTIME};

const TDataIOID FORTE_FB_Conv_DINTtoTIME::scm_anEIWith[] = {0, 255};
const TForteInt16 FORTE_FB_Conv_DINTtoTIME::scm_anEIWithIndexes[] = {0};
const CStringDictionary::TStringId FORTE_FB_Conv_DINTtoTIME::scm_anEventInputNames[] = {g_nStringIdREQ};

const TDataIOID FORTE_FB_Conv_DINTtoTIME::scm_anEOWith[] = {0, 255};
const TForteInt16 FORTE_FB_Conv_DINTtoTIME::scm_anEOWithIndexes[] = {0};
const CStringDictionary::TStringId FORTE_FB_Conv_DINTtoTIME::scm_anEventOutputNames[] = {g_nStringIdCNF};


const SFBInterfaceSpec FORTE_FB_Conv_DINTtoTIME::scm_stFBInterfaceSpec = {
  1, scm_anEventInputNames, scm_anEIWith, scm_anEIWithIndexes,
  1, scm_anEventOutputNames, scm_anEOWith, scm_anEOWithIndexes,
  1, scm_anDataInputNames, scm_anDataInputTypeIds,
  1, scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, nullptr
};

const SCFB_FBInstanceData FORTE_FB_Conv_DINTtoTIME::scm_astInternalFBs[] = {
  {g_nStringIdF_MUL, g_nStringIdF_MUL},
  {g_nStringIdDINT2DINT, g_nStringIdDINT2DINT},
  {g_nStringIdF_DINT_TO_STRING, g_nStringIdF_DINT_TO_STRING},
  {g_nStringIdF_STRING_TO_TIME, g_nStringIdF_STRING_TO_TIME}
};

const SCFB_FBParameter FORTE_FB_Conv_DINTtoTIME::scm_astParamters[] = {
  {1, g_nStringIdIN, "1000000000"},
};

const SCFB_FBConnectionData FORTE_FB_Conv_DINTtoTIME::scm_astEventConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdREQ), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdDINT2DINT, g_nStringIdREQ), 1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdDINT2DINT, g_nStringIdCNF), 1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_MUL, g_nStringIdREQ), 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_MUL, g_nStringIdCNF), 0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_DINT_TO_STRING, g_nStringIdREQ), 2},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_DINT_TO_STRING, g_nStringIdCNF), 2, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_STRING_TO_TIME, g_nStringIdREQ), 3},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_STRING_TO_TIME, g_nStringIdCNF), 3, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdCNF), -1},
};

const SCFB_FBConnectionData FORTE_FB_Conv_DINTtoTIME::scm_astDataConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdIn1), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_MUL, g_nStringIdIN1), 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_MUL, g_nStringIdOUT), 0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_DINT_TO_STRING, g_nStringIdIN), 2},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_DINT_TO_STRING, g_nStringIdOUT), 2, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_STRING_TO_TIME, g_nStringIdIN), 3},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_STRING_TO_TIME, g_nStringIdOUT), 3, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdOut1), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdDINT2DINT, g_nStringIdOUT), 1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_MUL, g_nStringIdIN2), 0},
};

const SCFB_FBNData FORTE_FB_Conv_DINTtoTIME::scm_stFBNData = {
  4, scm_astInternalFBs,
  5, scm_astEventConnections,
  0, nullptr,
  5, scm_astDataConnections,
  0, nullptr,
  1, scm_astParamters
};



