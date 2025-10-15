/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: Sub_2TENs
 *** Description: Subapplication Type
 *** Version:
***     1.0: 2025-09-21/SERGSYSTH -  - 
 *************************************************************************/

#include "Sub_2TENs.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "Sub_2TENs_gen.cpp"
#endif


DEFINE_FIRMWARE_FB(FORTE_Sub_2TENs, g_nStringIdSub_2TENs)

const CStringDictionary::TStringId FORTE_Sub_2TENs::scm_anDataInputNames[] = {g_nStringIdxAuto, g_nStringIdxEnCntrlTTR, g_nStringIdxStartTEN1, g_nStringIdxStartTEN2, g_nStringIdMV, g_nStringIdSP, g_nStringIdDZpid1, g_nStringIdDZpid2, g_nStringIdDZ_KM_TEN1, g_nStringIdDZ_KM_TEN2, g_nStringIdHYS1, g_nStringIdHYS2, g_nStringIdKp1, g_nStringIdKp2, g_nStringIdTi1, g_nStringIdTi2, g_nStringIdxStatusQF_TEN1, g_nStringIdxStatusQF_TEN2, g_nStringIdxStatusKM_TTR1, g_nStringIdxStatusKM_TTR2};

const CStringDictionary::TStringId FORTE_Sub_2TENs::scm_anDataInputTypeIds[] = {g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdREAL, g_nStringIdREAL, g_nStringIdREAL, g_nStringIdREAL, g_nStringIdREAL, g_nStringIdREAL, g_nStringIdREAL, g_nStringIdREAL, g_nStringIdREAL, g_nStringIdREAL, g_nStringIdREAL, g_nStringIdREAL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL};

const CStringDictionary::TStringId FORTE_Sub_2TENs::scm_anDataOutputNames[] = {g_nStringIdQO};

const CStringDictionary::TStringId FORTE_Sub_2TENs::scm_anDataOutputTypeIds[] = {g_nStringIdBOOL};

const TForteInt16 FORTE_Sub_2TENs::scm_anEIWithIndexes[] = {-1, -1};
const CStringDictionary::TStringId FORTE_Sub_2TENs::scm_anEventInputNames[] = {g_nStringIdINIT, g_nStringIdREQ};

const TForteInt16 FORTE_Sub_2TENs::scm_anEOWithIndexes[] = {-1, -1};
const CStringDictionary::TStringId FORTE_Sub_2TENs::scm_anEventOutputNames[] = {g_nStringIdINITO, g_nStringIdCNF};


const SFBInterfaceSpec FORTE_Sub_2TENs::scm_stFBInterfaceSpec = {
  2, scm_anEventInputNames, nullptr, scm_anEIWithIndexes,
  2, scm_anEventOutputNames, nullptr, scm_anEOWithIndexes,
  20, scm_anDataInputNames, scm_anDataInputTypeIds,
  1, scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, nullptr
};

const SCFB_FBInstanceData FORTE_Sub_2TENs::scm_astInternalFBs[] = {
  {g_nStringIdSub_SequenceHeatx2_0, g_nStringIdSub_SequenceHeatx2},
  {g_nStringIdSub_SequenceHeatx2_1, g_nStringIdSub_SequenceHeatx2}
};


const SCFB_FBConnectionData FORTE_Sub_2TENs::scm_astEventConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdINIT), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_SequenceHeatx2_0, g_nStringIdINIT), 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_SequenceHeatx2_0, g_nStringIdINITO), 0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_SequenceHeatx2_1, g_nStringIdINIT), 1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_SequenceHeatx2_1, g_nStringIdINITO), 1, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdINITO), -1},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdREQ), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_SequenceHeatx2_0, g_nStringIdREQ), 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_SequenceHeatx2_0, g_nStringIdCNF), 0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_SequenceHeatx2_1, g_nStringIdREQ), 1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_SequenceHeatx2_1, g_nStringIdCNF), 1, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdCNF), -1},
};

const SCFB_FBNData FORTE_Sub_2TENs::scm_stFBNData = {
  2, scm_astInternalFBs,
  6, scm_astEventConnections,
  0, nullptr,
  0, nullptr,
  0, nullptr,
  0, nullptr
};



