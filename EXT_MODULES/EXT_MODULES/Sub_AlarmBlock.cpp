/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: Sub_AlarmBlock
 *** Description: Subapplication Type
 *** Version:
***     1.0: 2025-10-08/sergdeb -  - 
 *************************************************************************/

#include "Sub_AlarmBlock.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "Sub_AlarmBlock_gen.cpp"
#endif


DEFINE_FIRMWARE_FB(FORTE_Sub_AlarmBlock, g_nStringIdSub_AlarmBlock)

const CStringDictionary::TStringId FORTE_Sub_AlarmBlock::scm_anDataInputNames[] = {g_nStringIdxAuto, g_nStringIdxFan, g_nStringIdxStatusBlock, g_nStringIdSP_DelAlarmBlock, g_nStringIdxResetAlarm};

const CStringDictionary::TStringId FORTE_Sub_AlarmBlock::scm_anDataInputTypeIds[] = {g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdUINT, g_nStringIdBOOL};

const CStringDictionary::TStringId FORTE_Sub_AlarmBlock::scm_anDataOutputNames[] = {g_nStringIdxAlarmBlock};

const CStringDictionary::TStringId FORTE_Sub_AlarmBlock::scm_anDataOutputTypeIds[] = {g_nStringIdBOOL};

const TForteInt16 FORTE_Sub_AlarmBlock::scm_anEIWithIndexes[] = {-1};
const CStringDictionary::TStringId FORTE_Sub_AlarmBlock::scm_anEventInputNames[] = {g_nStringIdREQ};

const TForteInt16 FORTE_Sub_AlarmBlock::scm_anEOWithIndexes[] = {-1};
const CStringDictionary::TStringId FORTE_Sub_AlarmBlock::scm_anEventOutputNames[] = {g_nStringIdCNF};


const SFBInterfaceSpec FORTE_Sub_AlarmBlock::scm_stFBInterfaceSpec = {
  1, scm_anEventInputNames, nullptr, scm_anEIWithIndexes,
  1, scm_anEventOutputNames, nullptr, scm_anEOWithIndexes,
  5, scm_anDataInputNames, scm_anDataInputTypeIds,
  1, scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, nullptr
};

const SCFB_FBInstanceData FORTE_Sub_AlarmBlock::scm_astInternalFBs[] = {
  {g_nStringIdFB_TON, g_nStringIdFB_TON},
  {g_nStringIdFB_X1_AND_notX2, g_nStringIdFB_X1_AND_notX2},
  {g_nStringIdFB_RS, g_nStringIdFB_RS},
  {g_nStringIdFB_And, g_nStringIdFB_And3},
  {g_nStringIdFB_NOT, g_nStringIdFB_NOT},
  {g_nStringIdFB_UINT_TO_TIME2, g_nStringIdFB_UINT_TO_TIME}
};


const SCFB_FBConnectionData FORTE_Sub_AlarmBlock::scm_astEventConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TON, g_nStringIdCNF), 0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_X1_AND_notX2, g_nStringIdREQ), 1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_X1_AND_notX2, g_nStringIdCNF), 1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_RS, g_nStringIdREQ), 2},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_RS, g_nStringIdCNF), 2, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdCNF), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_NOT, g_nStringIdCNF), 4, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_And, g_nStringIdREQ), 3},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdREQ), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_NOT, g_nStringIdREQ), 4},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_UINT_TO_TIME2, g_nStringIdCNF), 5, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TON, g_nStringIdREQ), 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_And, g_nStringIdCNF), 3, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_UINT_TO_TIME2, g_nStringIdREQ), 5},
};

const SCFB_FBConnectionData FORTE_Sub_AlarmBlock::scm_astDataConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TON, g_nStringIdQ), 0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_X1_AND_notX2, g_nStringIdxIn1), 1},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxStatusBlock), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_X1_AND_notX2, g_nStringIdxIn2), 1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_X1_AND_notX2, g_nStringIdxOut), 1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_RS, g_nStringIdS), 2},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxResetAlarm), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_RS, g_nStringIdR1), 2},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_RS, g_nStringIdQ1), 2, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxAlarmBlock), -1},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxAuto), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_And, g_nStringIdxIn1), 3},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxFan), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_And, g_nStringIdxIn2), 3},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_And, g_nStringIdxOut), 3, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TON, g_nStringIdIN), 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_NOT, g_nStringIdxOut), 4, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_And, g_nStringIdxIn3), 3},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdSP_DelAlarmBlock), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_UINT_TO_TIME2, g_nStringIdInValue), 5},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_UINT_TO_TIME2, g_nStringIdTime), 5, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TON, g_nStringIdPT), 0},
};

const SCFB_FBFannedOutConnectionData FORTE_Sub_AlarmBlock::scm_astFannedOutDataConnections[] = {
  {1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_NOT, g_nStringIdxIn1), 4},
};

const SCFB_FBNData FORTE_Sub_AlarmBlock::scm_stFBNData = {
  6, scm_astInternalFBs,
  7, scm_astEventConnections,
  0, nullptr,
  11, scm_astDataConnections,
  1, scm_astFannedOutDataConnections,
  0, nullptr
};



