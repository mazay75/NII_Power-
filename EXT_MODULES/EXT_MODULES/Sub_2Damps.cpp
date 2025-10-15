/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: Sub_2Damps
 *** Description: Subapplication Type
 *** Version:
***     1.0: 2025-09-14/sergdeb -  - 
 *************************************************************************/

#include "Sub_2Damps.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "Sub_2Damps_gen.cpp"
#endif


DEFINE_FIRMWARE_FB(FORTE_Sub_2Damps, g_nStringIdSub_2Damps)

const CStringDictionary::TStringId FORTE_Sub_2Damps::scm_anDataInputNames[] = {g_nStringIdxAuto, g_nStringIdxStartDamp1, g_nStringIdxStartDamp2, g_nStringIdxStatusDamp1, g_nStringIdxStatusDamp2, g_nStringIdxAlarmReset, g_nStringIdSP_OpeningTime, g_nStringIdSP_DelOffOpen};

const CStringDictionary::TStringId FORTE_Sub_2Damps::scm_anDataInputTypeIds[] = {g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdUINT, g_nStringIdUINT};

const CStringDictionary::TStringId FORTE_Sub_2Damps::scm_anDataOutputNames[] = {g_nStringIdxDamp1, g_nStringIdxDamp2, g_nStringIdxAlarmDamp1, g_nStringIdxAlarmDamp2};

const CStringDictionary::TStringId FORTE_Sub_2Damps::scm_anDataOutputTypeIds[] = {g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL};

const TForteInt16 FORTE_Sub_2Damps::scm_anEIWithIndexes[] = {-1};
const CStringDictionary::TStringId FORTE_Sub_2Damps::scm_anEventInputNames[] = {g_nStringIdREQ};

const TForteInt16 FORTE_Sub_2Damps::scm_anEOWithIndexes[] = {-1};
const CStringDictionary::TStringId FORTE_Sub_2Damps::scm_anEventOutputNames[] = {g_nStringIdCNF};


const SFBInterfaceSpec FORTE_Sub_2Damps::scm_stFBInterfaceSpec = {
  1, scm_anEventInputNames, nullptr, scm_anEIWithIndexes,
  1, scm_anEventOutputNames, nullptr, scm_anEOWithIndexes,
  8, scm_anDataInputNames, scm_anDataInputTypeIds,
  4, scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, nullptr
};

const SCFB_FBInstanceData FORTE_Sub_2Damps::scm_astInternalFBs[] = {
  {g_nStringIdSub_Flap_0, g_nStringIdSub_Flap},
  {g_nStringIdSub_Flap_1, g_nStringIdSub_Flap}
};


const SCFB_FBConnectionData FORTE_Sub_2Damps::scm_astEventConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdREQ), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_Flap_0, g_nStringIdREQ), 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_Flap_0, g_nStringIdCNF), 0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_Flap_1, g_nStringIdREQ), 1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_Flap_1, g_nStringIdCNF), 1, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdCNF), -1},
};

const SCFB_FBConnectionData FORTE_Sub_2Damps::scm_astDataConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_Flap_0, g_nStringIdxOpenFlap), 0, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxDamp1), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_Flap_1, g_nStringIdxOpenFlap), 1, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxDamp2), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_Flap_0, g_nStringIdxAlarmFlap), 0, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxAlarmDamp1), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_Flap_1, g_nStringIdxAlarmFlap), 1, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxAlarmDamp2), -1},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxAuto), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_Flap_0, g_nStringIdxAuto), 0},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxStartDamp1), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_Flap_0, g_nStringIdxStart), 0},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxStatusDamp1), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_Flap_0, g_nStringIdxOpen), 0},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxAlarmReset), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_Flap_0, g_nStringIdxReset), 0},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdSP_OpeningTime), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_Flap_0, g_nStringIdSP_OpeningTime), 0},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdSP_DelOffOpen), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_Flap_0, g_nStringIdSP_DelOffOpen), 0},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxStartDamp2), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_Flap_1, g_nStringIdxStart), 1},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxStatusDamp2), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_Flap_1, g_nStringIdxOpen), 1},
};

const SCFB_FBFannedOutConnectionData FORTE_Sub_2Damps::scm_astFannedOutDataConnections[] = {
  {4, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_Flap_1, g_nStringIdxAuto), 1},
  {7, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_Flap_1, g_nStringIdxReset), 1},
  {8, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_Flap_1, g_nStringIdSP_OpeningTime), 1},
  {9, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_Flap_1, g_nStringIdSP_DelOffOpen), 1},
};

const SCFB_FBNData FORTE_Sub_2Damps::scm_stFBNData = {
  2, scm_astInternalFBs,
  3, scm_astEventConnections,
  0, nullptr,
  12, scm_astDataConnections,
  4, scm_astFannedOutDataConnections,
  0, nullptr
};



