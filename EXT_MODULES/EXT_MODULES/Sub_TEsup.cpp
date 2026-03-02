/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: Sub_TEsup
 *** Description: Subapplication Type
 *** Version:
***     1.0: 2024-12-02/sergdebwork -  - 
 *************************************************************************/

#include "Sub_TEsup.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "Sub_TEsup_gen.cpp"
#endif


DEFINE_FIRMWARE_FB(FORTE_Sub_TEsup, g_nStringIdSub_TEsup)

const CStringDictionary::TStringId FORTE_Sub_TEsup::scm_anDataInputNames[] = {g_nStringIdID};

const CStringDictionary::TStringId FORTE_Sub_TEsup::scm_anDataInputTypeIds[] = {g_nStringIdWSTRING};

const CStringDictionary::TStringId FORTE_Sub_TEsup::scm_anDataOutputNames[] = {g_nStringIdrTEsup};

const CStringDictionary::TStringId FORTE_Sub_TEsup::scm_anDataOutputTypeIds[] = {g_nStringIdREAL};

const TForteInt16 FORTE_Sub_TEsup::scm_anEIWithIndexes[] = {-1, -1};
const CStringDictionary::TStringId FORTE_Sub_TEsup::scm_anEventInputNames[] = {g_nStringIdINIT, g_nStringIdRSP};



const SFBInterfaceSpec FORTE_Sub_TEsup::scm_stFBInterfaceSpec = {
  2, scm_anEventInputNames, nullptr, scm_anEIWithIndexes,
  0, nullptr, nullptr, nullptr,
  1, scm_anDataInputNames, scm_anDataInputTypeIds,
  1, scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, nullptr
};

const SCFB_FBInstanceData FORTE_Sub_TEsup::scm_astInternalFBs[] = {
  {g_nStringIdFB_REAL_DIV, g_nStringIdFB_REAL_DIV},
  {g_nStringIdai1, g_nStringIdSUBSCRIBE_1}
};

const SCFB_FBParameter FORTE_Sub_TEsup::scm_astParamters[] = {
  {0, g_nStringIdrDiv, "100"},
  {1, g_nStringIdQI, "1"},
};

const SCFB_FBConnectionData FORTE_Sub_TEsup::scm_astEventConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdai1, g_nStringIdIND), 1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_REAL_DIV, g_nStringIdREQ), 0},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdRSP), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdai1, g_nStringIdRSP), 1},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdINIT), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdai1, g_nStringIdINIT), 1},
};

const SCFB_FBConnectionData FORTE_Sub_TEsup::scm_astDataConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdai1, g_nStringIdRD_1), 1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_REAL_DIV, g_nStringIdrIn1), 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_REAL_DIV, g_nStringIdrOut), 0, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdrTEsup), -1},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdID), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdai1, g_nStringIdID), 1},
};

const SCFB_FBNData FORTE_Sub_TEsup::scm_stFBNData = {
  2, scm_astInternalFBs,
  3, scm_astEventConnections,
  0, nullptr,
  3, scm_astDataConnections,
  0, nullptr,
  2, scm_astParamters
};



