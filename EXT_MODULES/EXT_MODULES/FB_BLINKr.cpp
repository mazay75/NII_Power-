/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: FB_BLINKr
 *** Description: Composite FB wrapping other FBs
 *** Version:
***     1.0: 2025-10-01/sergdeb -  - 
 *************************************************************************/

#include "FB_BLINKr.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "FB_BLINKr_gen.cpp"
#endif


DEFINE_FIRMWARE_FB(FORTE_FB_BLINKr, g_nStringIdFB_BLINKr)

const CStringDictionary::TStringId FORTE_FB_BLINKr::scm_anDataInputNames[] = {g_nStringIdENABLE, g_nStringIdTIMEHIGH, g_nStringIdTIMELOW};

const CStringDictionary::TStringId FORTE_FB_BLINKr::scm_anDataInputTypeIds[] = {g_nStringIdBOOL, g_nStringIdREAL, g_nStringIdUINT};

const CStringDictionary::TStringId FORTE_FB_BLINKr::scm_anDataOutputNames[] = {g_nStringIdOUT};

const CStringDictionary::TStringId FORTE_FB_BLINKr::scm_anDataOutputTypeIds[] = {g_nStringIdBOOL};

const TDataIOID FORTE_FB_BLINKr::scm_anEIWith[] = {0, 2, 1, 255};
const TForteInt16 FORTE_FB_BLINKr::scm_anEIWithIndexes[] = {0};
const CStringDictionary::TStringId FORTE_FB_BLINKr::scm_anEventInputNames[] = {g_nStringIdREQ};

const TDataIOID FORTE_FB_BLINKr::scm_anEOWith[] = {0, 255};
const TForteInt16 FORTE_FB_BLINKr::scm_anEOWithIndexes[] = {0};
const CStringDictionary::TStringId FORTE_FB_BLINKr::scm_anEventOutputNames[] = {g_nStringIdCNF};


const SFBInterfaceSpec FORTE_FB_BLINKr::scm_stFBInterfaceSpec = {
  1, scm_anEventInputNames, scm_anEIWith, scm_anEIWithIndexes,
  1, scm_anEventOutputNames, scm_anEOWith, scm_anEOWithIndexes,
  3, scm_anDataInputNames, scm_anDataInputTypeIds,
  1, scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, nullptr
};

const SCFB_FBInstanceData FORTE_FB_BLINKr::scm_astInternalFBs[] = {
  {g_nStringIdFB_TON, g_nStringIdFB_TON},
  {g_nStringIdFB_TOF, g_nStringIdFB_TOF},
  {g_nStringIdFB_NOT, g_nStringIdFB_NOT},
  {g_nStringIdFB_And, g_nStringIdFB_And},
  {g_nStringIdFB_UINT_TO_TIME, g_nStringIdFB_UINT_TO_TIME},
  {g_nStringIdFB_UINT_TO_TIME_1, g_nStringIdFB_REAL_TO_TIME}
};

const SCFB_FBParameter FORTE_FB_BLINKr::scm_astParamters[] = {
  {4, g_nStringIdMultiplier, "1000000000"},
};

const SCFB_FBConnectionData FORTE_FB_BLINKr::scm_astEventConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdREQ), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_NOT, g_nStringIdREQ), 2},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_NOT, g_nStringIdCNF), 2, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TON, g_nStringIdREQ), 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TON, g_nStringIdCNF), 0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TOF, g_nStringIdREQ), 1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TOF, g_nStringIdCNF), 1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_And, g_nStringIdREQ), 3},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_And, g_nStringIdCNF), 3, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_UINT_TO_TIME, g_nStringIdREQ), 4},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_UINT_TO_TIME, g_nStringIdCNF), 4, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_UINT_TO_TIME_1, g_nStringIdREQ), 5},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_UINT_TO_TIME_1, g_nStringIdCNF), 5, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdCNF), -1},
};

const SCFB_FBConnectionData FORTE_FB_BLINKr::scm_astDataConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TON, g_nStringIdQ), 0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TOF, g_nStringIdIN), 1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TOF, g_nStringIdQ), 1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_NOT, g_nStringIdxIn1), 2},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_NOT, g_nStringIdxOut), 2, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TON, g_nStringIdIN), 0},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdENABLE), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_And, g_nStringIdxIn1), 3},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdTIMELOW), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_UINT_TO_TIME, g_nStringIdInValue), 4},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_UINT_TO_TIME, g_nStringIdTime), 4, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TON, g_nStringIdPT), 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_And, g_nStringIdxOut), 3, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdOUT), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_UINT_TO_TIME_1, g_nStringIdtTime), 5, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TOF, g_nStringIdPT), 1},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdTIMEHIGH), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_UINT_TO_TIME_1, g_nStringIdrInValue), 5},
};

const SCFB_FBFannedOutConnectionData FORTE_FB_BLINKr::scm_astFannedOutDataConnections[] = {
  {1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_And, g_nStringIdxIn2), 3},
};

const SCFB_FBNData FORTE_FB_BLINKr::scm_stFBNData = {
  6, scm_astInternalFBs,
  7, scm_astEventConnections,
  0, nullptr,
  9, scm_astDataConnections,
  1, scm_astFannedOutDataConnections,
  1, scm_astParamters
};



