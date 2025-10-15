/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: Sub_Alarm_Sup
 *** Description: Subapplication Type
 *** Version:
***     1.0: 2025-03-12/ivan -  - 
 *************************************************************************/

#include "Sub_Alarm_Sup.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "Sub_Alarm_Sup_gen.cpp"
#endif


DEFINE_FIRMWARE_FB(FORTE_Sub_Alarm_Sup, g_nStringIdSub_Alarm_Sup)

const CStringDictionary::TStringId FORTE_Sub_Alarm_Sup::scm_anDataInputNames[] = {g_nStringIdxAuto, g_nStringIdxStart, g_nStringIdxAlarmDamp, g_nStringIdxAlarmFan, g_nStringIdxAlarmTEN, g_nStringIdxAlrmSensTEsup, g_nStringIdxStatusU, g_nStringIdxStatusExtLine, g_nStringIdxFan, g_nStringIdxBlowing, g_nStringIdxStatusBlock, g_nStringIdSP_DelAlarmBlock, g_nStringIdxResetAlarm};

const CStringDictionary::TStringId FORTE_Sub_Alarm_Sup::scm_anDataInputTypeIds[] = {g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdUINT, g_nStringIdBOOL};

const CStringDictionary::TStringId FORTE_Sub_Alarm_Sup::scm_anDataOutputNames[] = {g_nStringIdGlobalAlarm, g_nStringIdAlarmU, g_nStringIdAlarmExtLine, g_nStringIdxAlarmSensor, g_nStringIdxAlarmBlock, g_nStringIdxAlarmNoTrig};

const CStringDictionary::TStringId FORTE_Sub_Alarm_Sup::scm_anDataOutputTypeIds[] = {g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL};

const TForteInt16 FORTE_Sub_Alarm_Sup::scm_anEIWithIndexes[] = {-1};
const CStringDictionary::TStringId FORTE_Sub_Alarm_Sup::scm_anEventInputNames[] = {g_nStringIdREQ};

const TForteInt16 FORTE_Sub_Alarm_Sup::scm_anEOWithIndexes[] = {-1};
const CStringDictionary::TStringId FORTE_Sub_Alarm_Sup::scm_anEventOutputNames[] = {g_nStringIdCNF};


const SFBInterfaceSpec FORTE_Sub_Alarm_Sup::scm_stFBInterfaceSpec = {
  1, scm_anEventInputNames, nullptr, scm_anEIWithIndexes,
  1, scm_anEventOutputNames, nullptr, scm_anEOWithIndexes,
  13, scm_anDataInputNames, scm_anDataInputTypeIds,
  6, scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, nullptr
};

const SCFB_FBInstanceData FORTE_Sub_Alarm_Sup::scm_astInternalFBs[] = {
  {g_nStringIdFB_TOF, g_nStringIdFB_TOF},
  {g_nStringIdFB_UINT_TO_TIME, g_nStringIdFB_UINT_TO_TIME},
  {g_nStringIdFB_NOT, g_nStringIdFB_NOT},
  {g_nStringIdFB_TOF_1, g_nStringIdFB_TOF},
  {g_nStringIdFB_NOT_1, g_nStringIdFB_NOT},
  {g_nStringIdFB_UINT_TO_TIME_2, g_nStringIdFB_UINT_TO_TIME},
  {g_nStringIdFB_OR5_0, g_nStringIdFB_OR_7},
  {g_nStringIdFB_And, g_nStringIdFB_And},
  {g_nStringIdSubAlarmBlock, g_nStringIdSub_AlarmBlock2},
  {g_nStringIdFB_OR, g_nStringIdFB_OR},
  {g_nStringIdFB_OR3, g_nStringIdFB_OR3},
  {g_nStringIdFB_OR_1, g_nStringIdFB_OR},
  {g_nStringIdSub_AlarmSensor, g_nStringIdSub_AlarmSens1}
};

const SCFB_FBParameter FORTE_Sub_Alarm_Sup::scm_astParamters[] = {
  {1, g_nStringIdInValue, "1"},
  {1, g_nStringIdMultiplier, "1000000000"},
  {5, g_nStringIdInValue, "1"},
  {5, g_nStringIdMultiplier, "1000000000"},
  {10, g_nStringIdxIn1, "0"},
  {12, g_nStringIdSP_DelAlrmDPD_OnFan, "1"},
  {12, g_nStringIdSP_DelAlrmDPD_OffFan, "1"},
};

const SCFB_FBConnectionData FORTE_Sub_Alarm_Sup::scm_astEventConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_UINT_TO_TIME, g_nStringIdCNF), 1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TOF, g_nStringIdREQ), 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TOF, g_nStringIdCNF), 0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_NOT, g_nStringIdREQ), 2},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_NOT, g_nStringIdCNF), 2, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_UINT_TO_TIME_2, g_nStringIdREQ), 5},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_UINT_TO_TIME_2, g_nStringIdCNF), 5, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TOF_1, g_nStringIdREQ), 3},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TOF_1, g_nStringIdCNF), 3, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_NOT_1, g_nStringIdREQ), 4},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_OR5_0, g_nStringIdCNF), 6, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_UINT_TO_TIME, g_nStringIdREQ), 1},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdREQ), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_OR5_0, g_nStringIdREQ), 6},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_NOT_1, g_nStringIdCNF), 4, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSubAlarmBlock, g_nStringIdREQ), 8},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSubAlarmBlock, g_nStringIdCNF), 8, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_And, g_nStringIdREQ), 7},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_OR, g_nStringIdCNF), 9, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_OR3, g_nStringIdREQ), 10},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_And, g_nStringIdCNF), 7, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_OR_1, g_nStringIdREQ), 11},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_OR_1, g_nStringIdCNF), 11, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_OR, g_nStringIdREQ), 9},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_OR3, g_nStringIdCNF), 10, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_AlarmSensor, g_nStringIdREQ), 12},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_AlarmSensor, g_nStringIdCNF), 12, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdCNF), -1},
};

const SCFB_FBConnectionData FORTE_Sub_Alarm_Sup::scm_astDataConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxStatusU), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TOF, g_nStringIdIN), 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_UINT_TO_TIME, g_nStringIdTime), 1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TOF, g_nStringIdPT), 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TOF, g_nStringIdQ), 0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_NOT, g_nStringIdxIn1), 2},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_NOT, g_nStringIdxOut), 2, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdAlarmU), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_UINT_TO_TIME_2, g_nStringIdTime), 5, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TOF_1, g_nStringIdPT), 3},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TOF_1, g_nStringIdQ), 3, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_NOT_1, g_nStringIdxIn1), 4},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxStatusExtLine), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TOF_1, g_nStringIdIN), 3},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxAlarmDamp), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_OR5_0, g_nStringIdxIn1), 6},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxAlarmFan), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_OR5_0, g_nStringIdxIn2), 6},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxAlarmTEN), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_OR5_0, g_nStringIdxIn3), 6},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxAlrmSensTEsup), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_OR5_0, g_nStringIdxIn4), 6},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_NOT_1, g_nStringIdxOut), 4, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdAlarmExtLine), -1},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxAuto), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_And, g_nStringIdxIn2), 7},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxFan), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSubAlarmBlock, g_nStringIdxFan), 8},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxBlowing), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSubAlarmBlock, g_nStringIdxBlowing), 8},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxStatusBlock), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSubAlarmBlock, g_nStringIdxStatusBlock), 8},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdSP_DelAlarmBlock), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSubAlarmBlock, g_nStringIdSP_DelAlarmBlock), 8},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxResetAlarm), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSubAlarmBlock, g_nStringIdxResetAlarm), 8},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSubAlarmBlock, g_nStringIdxAlarmBlock), 8, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxAlarmBlock), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_OR, g_nStringIdxOut), 9, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdGlobalAlarm), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_OR3, g_nStringIdxOut), 10, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxAlarmNoTrig), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_And, g_nStringIdxOut), 7, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_OR, g_nStringIdxIn1), 9},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_OR5_0, g_nStringIdxOut), 6, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_OR_1, g_nStringIdxIn1), 11},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_OR_1, g_nStringIdxOut), 11, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_And, g_nStringIdxIn1), 7},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxStart), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_AlarmSensor, g_nStringIdxStart), 12},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_AlarmSensor, g_nStringIdxAlarmDPD), 12, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxAlarmSensor), -1},
};

const SCFB_FBFannedOutConnectionData FORTE_Sub_Alarm_Sup::scm_astFannedOutDataConnections[] = {
  {0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_OR3, g_nStringIdxIn2), 10},
  {3, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_OR5_0, g_nStringIdxIn6), 6},
  {6, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_OR3, g_nStringIdxIn3), 10},
  {10, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_AlarmSensor, g_nStringIdxAlrmSnsr), 12},
  {11, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_OR5_0, g_nStringIdxIn7), 6},
  {11, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_OR, g_nStringIdxIn2), 9},
  {12, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSubAlarmBlock, g_nStringIdxAuto), 8},
  {12, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_AlarmSensor, g_nStringIdxAuto), 12},
  {17, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_AlarmSensor, g_nStringIdxReset), 12},
  {18, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_OR5_0, g_nStringIdxIn5), 6},
  {25, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_OR_1, g_nStringIdxIn2), 11},
};

const SCFB_FBNData FORTE_Sub_Alarm_Sup::scm_stFBNData = {
  13, scm_astInternalFBs,
  14, scm_astEventConnections,
  0, nullptr,
  26, scm_astDataConnections,
  11, scm_astFannedOutDataConnections,
  7, scm_astParamters
};



