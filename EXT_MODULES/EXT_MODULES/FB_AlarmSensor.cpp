/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: FB_AlarmSensor
 *** Description: Composite FB wrapping other FBs
 *** Version:
***     1.0: 2025-10-08/sergdeb -  - 
 *************************************************************************/

#include "FB_AlarmSensor.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "FB_AlarmSensor_gen.cpp"
#endif


DEFINE_FIRMWARE_FB(FORTE_FB_AlarmSensor, g_nStringIdFB_AlarmSensor)

const CStringDictionary::TStringId FORTE_FB_AlarmSensor::scm_anDataInputNames[] = {g_nStringIdxAuto, g_nStringIdxAlrmSensTEsup};

const CStringDictionary::TStringId FORTE_FB_AlarmSensor::scm_anDataInputTypeIds[] = {g_nStringIdBOOL, g_nStringIdBOOL};

const CStringDictionary::TStringId FORTE_FB_AlarmSensor::scm_anDataOutputNames[] = {g_nStringIdxAlarmSensorTEsup};

const CStringDictionary::TStringId FORTE_FB_AlarmSensor::scm_anDataOutputTypeIds[] = {g_nStringIdBOOL};

const TDataIOID FORTE_FB_AlarmSensor::scm_anEIWith[] = {0, 1, 255};
const TForteInt16 FORTE_FB_AlarmSensor::scm_anEIWithIndexes[] = {0};
const CStringDictionary::TStringId FORTE_FB_AlarmSensor::scm_anEventInputNames[] = {g_nStringIdREQ};

const TDataIOID FORTE_FB_AlarmSensor::scm_anEOWith[] = {0, 255};
const TForteInt16 FORTE_FB_AlarmSensor::scm_anEOWithIndexes[] = {0};
const CStringDictionary::TStringId FORTE_FB_AlarmSensor::scm_anEventOutputNames[] = {g_nStringIdCNF};


const SFBInterfaceSpec FORTE_FB_AlarmSensor::scm_stFBInterfaceSpec = {
  1, scm_anEventInputNames, scm_anEIWith, scm_anEIWithIndexes,
  1, scm_anEventOutputNames, scm_anEOWith, scm_anEOWithIndexes,
  2, scm_anDataInputNames, scm_anDataInputTypeIds,
  1, scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, nullptr
};

const SCFB_FBInstanceData FORTE_FB_AlarmSensor::scm_astInternalFBs[] = {
  {g_nStringIdFB_TON, g_nStringIdFB_TON},
  {g_nStringIdFB_TOF, g_nStringIdFB_TOF},
  {g_nStringIdFB_And, g_nStringIdFB_And}
};

const SCFB_FBParameter FORTE_FB_AlarmSensor::scm_astParamters[] = {
  {0, g_nStringIdPT, "T#1s"},
  {1, g_nStringIdPT, "T#1s"},
};

const SCFB_FBConnectionData FORTE_FB_AlarmSensor::scm_astEventConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdREQ), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TON, g_nStringIdREQ), 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TON, g_nStringIdCNF), 0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TOF, g_nStringIdREQ), 1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TOF, g_nStringIdCNF), 1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_And, g_nStringIdREQ), 2},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_And, g_nStringIdCNF), 2, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdCNF), -1},
};

const SCFB_FBConnectionData FORTE_FB_AlarmSensor::scm_astDataConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TON, g_nStringIdQ), 0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TOF, g_nStringIdIN), 1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TOF, g_nStringIdQ), 1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_And, g_nStringIdxIn2), 2},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxAuto), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_And, g_nStringIdxIn1), 2},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxAlrmSensTEsup), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TON, g_nStringIdIN), 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_And, g_nStringIdxOut), 2, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxAlarmSensorTEsup), -1},
};

const SCFB_FBNData FORTE_FB_AlarmSensor::scm_stFBNData = {
  3, scm_astInternalFBs,
  4, scm_astEventConnections,
  0, nullptr,
  5, scm_astDataConnections,
  0, nullptr,
  2, scm_astParamters
};



