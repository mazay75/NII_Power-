/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: Sub_AlarmDPD
 *** Description: Subapplication Type
 *** Version:
***     1.0: 2024-11-11/sergdebwork -  - 
 *************************************************************************/

#include "Sub_AlarmDPD.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "Sub_AlarmDPD_gen.cpp"
#endif


DEFINE_FIRMWARE_FB(FORTE_Sub_AlarmDPD, g_nStringIdSub_AlarmDPD)

const CStringDictionary::TStringId FORTE_Sub_AlarmDPD::scm_anDataInputNames[] = {g_nStringIdxAuto, g_nStringIdxStart, g_nStringIdxDPD, g_nStringIdxReset, g_nStringIdSP_DelAlrmDPD_OnFan, g_nStringIdSP_DelAlrmDPD_OffFan};

const CStringDictionary::TStringId FORTE_Sub_AlarmDPD::scm_anDataInputTypeIds[] = {g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdUINT, g_nStringIdUINT};

const CStringDictionary::TStringId FORTE_Sub_AlarmDPD::scm_anDataOutputNames[] = {g_nStringIdxAlarmDPD, g_nStringIdET_On, g_nStringIdET_Off};

const CStringDictionary::TStringId FORTE_Sub_AlarmDPD::scm_anDataOutputTypeIds[] = {g_nStringIdBOOL, g_nStringIdTIME, g_nStringIdTIME};

const TForteInt16 FORTE_Sub_AlarmDPD::scm_anEIWithIndexes[] = {-1};
const CStringDictionary::TStringId FORTE_Sub_AlarmDPD::scm_anEventInputNames[] = {g_nStringIdREQ};

const TForteInt16 FORTE_Sub_AlarmDPD::scm_anEOWithIndexes[] = {-1};
const CStringDictionary::TStringId FORTE_Sub_AlarmDPD::scm_anEventOutputNames[] = {g_nStringIdCNF};


const SFBInterfaceSpec FORTE_Sub_AlarmDPD::scm_stFBInterfaceSpec = {
  1, scm_anEventInputNames, nullptr, scm_anEIWithIndexes,
  1, scm_anEventOutputNames, nullptr, scm_anEOWithIndexes,
  6, scm_anDataInputNames, scm_anDataInputTypeIds,
  3, scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, nullptr
};

const SCFB_FBInstanceData FORTE_Sub_AlarmDPD::scm_astInternalFBs[] = {
  {g_nStringIdFB_TON, g_nStringIdFB_TON},
  {g_nStringIdFB_SR, g_nStringIdFB_SR},
  {g_nStringIdFB_UINT_TO_TIME, g_nStringIdFB_UINT_TO_TIME},
  {g_nStringIdF_AND, g_nStringIdF_AND},
  {g_nStringIdFB_TOF, g_nStringIdFB_TOF},
  {g_nStringIdF_NOT, g_nStringIdF_NOT},
  {g_nStringIdFB_UINT_TO_TIME_1, g_nStringIdFB_UINT_TO_TIME},
  {g_nStringIdBOOL2BOOL, g_nStringIdBOOL2BOOL},
  {g_nStringIdFB_And, g_nStringIdFB_And}
};

const SCFB_FBParameter FORTE_Sub_AlarmDPD::scm_astParamters[] = {
  {2, g_nStringIdMultiplier, "1000000000"},
  {6, g_nStringIdMultiplier, "1000000000"},
};

const SCFB_FBConnectionData FORTE_Sub_AlarmDPD::scm_astEventConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_SR, g_nStringIdCNF), 1, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdCNF), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_UINT_TO_TIME, g_nStringIdCNF), 2, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TON, g_nStringIdREQ), 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TON, g_nStringIdCNF), 0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_UINT_TO_TIME_1, g_nStringIdREQ), 6},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_UINT_TO_TIME_1, g_nStringIdCNF), 6, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TOF, g_nStringIdREQ), 4},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TOF, g_nStringIdCNF), 4, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_NOT, g_nStringIdREQ), 5},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_AND, g_nStringIdCNF), 3, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_SR, g_nStringIdREQ), 1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_NOT, g_nStringIdCNF), 5, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdBOOL2BOOL, g_nStringIdREQ), 7},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdBOOL2BOOL, g_nStringIdCNF), 7, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_AND, g_nStringIdREQ), 3},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdREQ), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_And, g_nStringIdREQ), 8},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_And, g_nStringIdCNF), 8, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_UINT_TO_TIME, g_nStringIdREQ), 2},
};

const SCFB_FBConnectionData FORTE_Sub_AlarmDPD::scm_astDataConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TON, g_nStringIdET), 0, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdET_On), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_SR, g_nStringIdQ1), 1, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxAlarmDPD), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_UINT_TO_TIME, g_nStringIdTime), 2, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TON, g_nStringIdPT), 0},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxReset), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_SR, g_nStringIdR), 1},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdSP_DelAlrmDPD_OnFan), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_UINT_TO_TIME, g_nStringIdInValue), 2},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_AND, g_nStringIdOUT), 3, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_SR, g_nStringIdS1), 1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TON, g_nStringIdQ), 0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_AND, g_nStringIdIN1), 3},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_UINT_TO_TIME_1, g_nStringIdTime), 6, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TOF, g_nStringIdPT), 4},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxDPD), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TOF, g_nStringIdIN), 4},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdSP_DelAlrmDPD_OffFan), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_UINT_TO_TIME_1, g_nStringIdInValue), 6},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TOF, g_nStringIdET), 4, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdET_Off), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_NOT, g_nStringIdOUT), 5, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdBOOL2BOOL, g_nStringIdIN), 7},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdBOOL2BOOL, g_nStringIdOUT), 7, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_AND, g_nStringIdIN2), 3},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TOF, g_nStringIdQ), 4, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_NOT, g_nStringIdIN), 5},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxStart), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_And, g_nStringIdxIn2), 8},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxAuto), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_And, g_nStringIdxIn1), 8},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_And, g_nStringIdxOut), 8, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TON, g_nStringIdIN), 0},
};

const SCFB_FBNData FORTE_Sub_AlarmDPD::scm_stFBNData = {
  9, scm_astInternalFBs,
  10, scm_astEventConnections,
  0, nullptr,
  17, scm_astDataConnections,
  0, nullptr,
  2, scm_astParamters
};



