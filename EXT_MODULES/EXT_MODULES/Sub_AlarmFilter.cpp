/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: Sub_AlarmFilter
 *** Description: Subapplication Type
 *** Version:
***     1.0: 2025-02-28/ivan -  - 
 *************************************************************************/

#include "Sub_AlarmFilter.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "Sub_AlarmFilter_gen.cpp"
#endif


DEFINE_FIRMWARE_FB(FORTE_Sub_AlarmFilter, g_nStringIdSub_AlarmFilter)

const CStringDictionary::TStringId FORTE_Sub_AlarmFilter::scm_anDataInputNames[] = {g_nStringIdxAuto, g_nStringIdxDPD_Fan, g_nStringIdxDPD_Filter, g_nStringIdSP_DelAlrmFilter_On, g_nStringIdSP_DelAlrmFilter_Off};

const CStringDictionary::TStringId FORTE_Sub_AlarmFilter::scm_anDataInputTypeIds[] = {g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdUINT, g_nStringIdUINT};

const CStringDictionary::TStringId FORTE_Sub_AlarmFilter::scm_anDataOutputNames[] = {g_nStringIdxAlarmFilter};

const CStringDictionary::TStringId FORTE_Sub_AlarmFilter::scm_anDataOutputTypeIds[] = {g_nStringIdBOOL};

const TForteInt16 FORTE_Sub_AlarmFilter::scm_anEIWithIndexes[] = {-1};
const CStringDictionary::TStringId FORTE_Sub_AlarmFilter::scm_anEventInputNames[] = {g_nStringIdREQ};

const TForteInt16 FORTE_Sub_AlarmFilter::scm_anEOWithIndexes[] = {-1};
const CStringDictionary::TStringId FORTE_Sub_AlarmFilter::scm_anEventOutputNames[] = {g_nStringIdCNF};


const SFBInterfaceSpec FORTE_Sub_AlarmFilter::scm_stFBInterfaceSpec = {
  1, scm_anEventInputNames, nullptr, scm_anEIWithIndexes,
  1, scm_anEventOutputNames, nullptr, scm_anEOWithIndexes,
  5, scm_anDataInputNames, scm_anDataInputTypeIds,
  1, scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, nullptr
};

const SCFB_FBInstanceData FORTE_Sub_AlarmFilter::scm_astInternalFBs[] = {
  {g_nStringIdFB_And, g_nStringIdFB_And},
  {g_nStringIdFB_TON, g_nStringIdFB_TON},
  {g_nStringIdFB_TOF, g_nStringIdFB_TOF},
  {g_nStringIdFB_And_1, g_nStringIdFB_And},
  {g_nStringIdFB_UINT_TO_TIME, g_nStringIdFB_UINT_TO_TIME},
  {g_nStringIdFB_UINT_TO_TIME_1, g_nStringIdFB_UINT_TO_TIME},
  {g_nStringIdFB_NOT, g_nStringIdFB_NOT}
};

const SCFB_FBParameter FORTE_Sub_AlarmFilter::scm_astParamters[] = {
  {4, g_nStringIdMultiplier, "1000000000"},
  {5, g_nStringIdMultiplier, "1000000000"},
};

const SCFB_FBConnectionData FORTE_Sub_AlarmFilter::scm_astEventConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdREQ), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_And, g_nStringIdREQ), 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_And, g_nStringIdCNF), 0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_UINT_TO_TIME, g_nStringIdREQ), 4},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_UINT_TO_TIME, g_nStringIdCNF), 4, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TON, g_nStringIdREQ), 1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TON, g_nStringIdCNF), 1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_UINT_TO_TIME_1, g_nStringIdREQ), 5},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_UINT_TO_TIME_1, g_nStringIdCNF), 5, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TOF, g_nStringIdREQ), 2},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TOF, g_nStringIdCNF), 2, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_NOT, g_nStringIdREQ), 6},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_NOT, g_nStringIdCNF), 6, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_And_1, g_nStringIdREQ), 3},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_And_1, g_nStringIdCNF), 3, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdCNF), -1},
};

const SCFB_FBConnectionData FORTE_Sub_AlarmFilter::scm_astDataConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxAuto), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_And, g_nStringIdxIn1), 0},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxDPD_Fan), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_And, g_nStringIdxIn2), 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_And_1, g_nStringIdxOut), 3, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxAlarmFilter), -1},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdSP_DelAlrmFilter_On), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_UINT_TO_TIME, g_nStringIdInValue), 4},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_UINT_TO_TIME, g_nStringIdTime), 4, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TON, g_nStringIdPT), 1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_UINT_TO_TIME_1, g_nStringIdTime), 5, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TOF, g_nStringIdPT), 2},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdSP_DelAlrmFilter_Off), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_UINT_TO_TIME_1, g_nStringIdInValue), 5},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_And, g_nStringIdxOut), 0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TON, g_nStringIdIN), 1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TON, g_nStringIdQ), 1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_And_1, g_nStringIdxIn1), 3},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxDPD_Filter), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TOF, g_nStringIdIN), 2},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TOF, g_nStringIdQ), 2, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_NOT, g_nStringIdxIn1), 6},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_NOT, g_nStringIdxOut), 6, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_And_1, g_nStringIdxIn2), 3},
};

const SCFB_FBNData FORTE_Sub_AlarmFilter::scm_stFBNData = {
  7, scm_astInternalFBs,
  8, scm_astEventConnections,
  0, nullptr,
  12, scm_astDataConnections,
  0, nullptr,
  2, scm_astParamters
};



