/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: Sub_AlarmQFsimple
 *** Description: Subapplication Type
 *** Version:
***     1.0: 2024-11-11/sergdebwork -  - 
 *************************************************************************/

#include "Sub_AlarmQFsimple.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "Sub_AlarmQFsimple_gen.cpp"
#endif


DEFINE_FIRMWARE_FB(FORTE_Sub_AlarmQFsimple, g_nStringIdSub_AlarmQFsimple)

const CStringDictionary::TStringId FORTE_Sub_AlarmQFsimple::scm_anDataInputNames[] = {g_nStringIdxAuto, g_nStringIdxQF};

const CStringDictionary::TStringId FORTE_Sub_AlarmQFsimple::scm_anDataInputTypeIds[] = {g_nStringIdBOOL, g_nStringIdBOOL};

const CStringDictionary::TStringId FORTE_Sub_AlarmQFsimple::scm_anDataOutputNames[] = {g_nStringIdxAlarmQF};

const CStringDictionary::TStringId FORTE_Sub_AlarmQFsimple::scm_anDataOutputTypeIds[] = {g_nStringIdBOOL};

const TForteInt16 FORTE_Sub_AlarmQFsimple::scm_anEIWithIndexes[] = {-1};
const CStringDictionary::TStringId FORTE_Sub_AlarmQFsimple::scm_anEventInputNames[] = {g_nStringIdREQ};

const TForteInt16 FORTE_Sub_AlarmQFsimple::scm_anEOWithIndexes[] = {-1};
const CStringDictionary::TStringId FORTE_Sub_AlarmQFsimple::scm_anEventOutputNames[] = {g_nStringIdCNF};


const SFBInterfaceSpec FORTE_Sub_AlarmQFsimple::scm_stFBInterfaceSpec = {
  1, scm_anEventInputNames, nullptr, scm_anEIWithIndexes,
  1, scm_anEventOutputNames, nullptr, scm_anEOWithIndexes,
  2, scm_anDataInputNames, scm_anDataInputTypeIds,
  1, scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, nullptr
};

const SCFB_FBInstanceData FORTE_Sub_AlarmQFsimple::scm_astInternalFBs[] = {
  {g_nStringIdFB_X1_AND_notX2, g_nStringIdFB_X1_AND_notX2}
};


const SCFB_FBConnectionData FORTE_Sub_AlarmQFsimple::scm_astEventConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdREQ), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_X1_AND_notX2, g_nStringIdREQ), 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_X1_AND_notX2, g_nStringIdCNF), 0, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdCNF), -1},
};

const SCFB_FBConnectionData FORTE_Sub_AlarmQFsimple::scm_astDataConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxAuto), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_X1_AND_notX2, g_nStringIdxIn1), 0},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxQF), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_X1_AND_notX2, g_nStringIdxIn2), 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_X1_AND_notX2, g_nStringIdxOut), 0, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxAlarmQF), -1},
};

const SCFB_FBNData FORTE_Sub_AlarmQFsimple::scm_stFBNData = {
  1, scm_astInternalFBs,
  2, scm_astEventConnections,
  0, nullptr,
  3, scm_astDataConnections,
  0, nullptr,
  0, nullptr
};



