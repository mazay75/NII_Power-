/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: Sub_Fan1
 *** Description: Subapplication Type
 *** Version:
***     1.0: 2024-11-11/sergdebwork -  - 
 *************************************************************************/

#include "Sub_Fan1.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "Sub_Fan1_gen.cpp"
#endif


DEFINE_FIRMWARE_FB(FORTE_Sub_Fan1, g_nStringIdSub_Fan1)

const CStringDictionary::TStringId FORTE_Sub_Fan1::scm_anDataInputNames[] = {g_nStringIdxAuto, g_nStringIdxStart, g_nStringIdxFire, g_nStringIdxDPD, g_nStringIdxKM, g_nStringIdxQF, g_nStringIdxTK, g_nStringIdxStatusFC, g_nStringIdxHeatKM, g_nStringIdSP_DelAlrmDPD_Fan, g_nStringIdSP_Blowing, g_nStringIdvar_EngineMinutes, g_nStringIdvar_EngineHours, g_nStringIdxReset};

const CStringDictionary::TStringId FORTE_Sub_Fan1::scm_anDataInputTypeIds[] = {g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdUINT, g_nStringIdUINT, g_nStringIdWSTRING, g_nStringIdWSTRING, g_nStringIdBOOL};

const CStringDictionary::TStringId FORTE_Sub_Fan1::scm_anDataOutputNames[] = {g_nStringIdxFan, g_nStringIdxAlarmFan, g_nStringIdxAlarmDPD, g_nStringIdxAlarmKM, g_nStringIdxAlarmQF, g_nStringIdxAlarmTK, g_nStringIdxAlarmFC, g_nStringIdxBlowing, g_nStringIdEngineMinutes, g_nStringIdEngineHours, g_nStringIdwEngineMinutes_0, g_nStringIdwEngineMinutes_1, g_nStringIdwEngineHours_0, g_nStringIdwEngineHours_1, g_nStringIdiETBlow};

const CStringDictionary::TStringId FORTE_Sub_Fan1::scm_anDataOutputTypeIds[] = {g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdUDINT, g_nStringIdUDINT, g_nStringIdWORD, g_nStringIdWORD, g_nStringIdWORD, g_nStringIdWORD, g_nStringIdINT};

const TForteInt16 FORTE_Sub_Fan1::scm_anEIWithIndexes[] = {-1, -1};
const CStringDictionary::TStringId FORTE_Sub_Fan1::scm_anEventInputNames[] = {g_nStringIdINIT, g_nStringIdREQ};

const TForteInt16 FORTE_Sub_Fan1::scm_anEOWithIndexes[] = {-1, -1};
const CStringDictionary::TStringId FORTE_Sub_Fan1::scm_anEventOutputNames[] = {g_nStringIdINITO, g_nStringIdCNF};


const SFBInterfaceSpec FORTE_Sub_Fan1::scm_stFBInterfaceSpec = {
  2, scm_anEventInputNames, nullptr, scm_anEIWithIndexes,
  2, scm_anEventOutputNames, nullptr, scm_anEOWithIndexes,
  14, scm_anDataInputNames, scm_anDataInputTypeIds,
  15, scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, nullptr
};

const SCFB_FBInstanceData FORTE_Sub_Fan1::scm_astInternalFBs[] = {
  {g_nStringIdin_EM, g_nStringIdSUBSCRIBE_1},
  {g_nStringIdFB_EngineHours, g_nStringIdFB_EngineHours},
  {g_nStringIdout_EH, g_nStringIdPUBLISH_1},
  {g_nStringIdout_EM, g_nStringIdPUBLISH_1},
  {g_nStringIdUDINT_TO_2WORD, g_nStringIdUDINT_TO_2WORD},
  {g_nStringIdUDINT_TO_2WORD_1, g_nStringIdUDINT_TO_2WORD},
  {g_nStringIdFB_X1_AND_notX2, g_nStringIdFB_X1_AND_notX2},
  {g_nStringIdSub_Blowing2, g_nStringIdSub_Blowing2},
  {g_nStringIdFB_And, g_nStringIdFB_And},
  {g_nStringIdSub_AlarmFan, g_nStringIdSub_AlarmFan}
};

const SCFB_FBParameter FORTE_Sub_Fan1::scm_astParamters[] = {
  {0, g_nStringIdQI, "1"},
  {2, g_nStringIdQI, "1"},
  {3, g_nStringIdQI, "1"},
  {9, g_nStringIdSP_DelAlarmKM_Fan, "3"},
};

const SCFB_FBConnectionData FORTE_Sub_Fan1::scm_astEventConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdout_EH, g_nStringIdINITO), 2, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdout_EM, g_nStringIdINIT), 3},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_EngineHours, g_nStringIdCNF), 1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdout_EH, g_nStringIdREQ), 2},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_EngineHours, g_nStringIdWRTM), 1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdout_EM, g_nStringIdREQ), 3},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdout_EM, g_nStringIdINITO), 3, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdINITO), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdout_EH, g_nStringIdCNF), 2, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdUDINT_TO_2WORD, g_nStringIdREQ), 4},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdUDINT_TO_2WORD, g_nStringIdCNF), 4, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdUDINT_TO_2WORD_1, g_nStringIdREQ), 5},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdUDINT_TO_2WORD_1, g_nStringIdCNF), 5, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdCNF), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdin_EM, g_nStringIdINITO), 0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdout_EH, g_nStringIdINIT), 2},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdINIT), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdin_EM, g_nStringIdINIT), 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_X1_AND_notX2, g_nStringIdCNF), 6, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_Blowing2, g_nStringIdREQ), 7},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_Blowing2, g_nStringIdCNF), 7, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_EngineHours, g_nStringIdREQ), 1},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdREQ), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_And, g_nStringIdREQ), 8},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_And, g_nStringIdCNF), 8, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_AlarmFan, g_nStringIdREQ), 9},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_AlarmFan, g_nStringIdCNF), 9, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_X1_AND_notX2, g_nStringIdREQ), 6},
};

const SCFB_FBFannedOutConnectionData FORTE_Sub_Fan1::scm_astFannedOutEventConnections[] = {
  {8, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_Blowing2, g_nStringIdINIT), 7},
};

const SCFB_FBConnectionData FORTE_Sub_Fan1::scm_astDataConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdvar_EngineMinutes), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdin_EM, g_nStringIdID), 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdin_EM, g_nStringIdRD_1), 0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_EngineHours, g_nStringIdinitEM), 1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_EngineHours, g_nStringIdoutEH), 1, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdEngineHours), -1},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdvar_EngineHours), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdout_EH, g_nStringIdID), 2},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_EngineHours, g_nStringIdoutEM), 1, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdEngineMinutes), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdUDINT_TO_2WORD, g_nStringIdWORD0), 4, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdwEngineMinutes_0), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdUDINT_TO_2WORD, g_nStringIdWORD1), 4, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdwEngineMinutes_1), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdUDINT_TO_2WORD_1, g_nStringIdWORD0), 5, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdwEngineHours_0), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdUDINT_TO_2WORD_1, g_nStringIdWORD1), 5, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdwEngineHours_1), -1},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxKM), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_EngineHours, g_nStringIdInFan), 1},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxAuto), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_Blowing2, g_nStringIdxAuto), 7},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxFire), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_Blowing2, g_nStringIdxFire), 7},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_X1_AND_notX2, g_nStringIdxOut), 6, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_Blowing2, g_nStringIdxInFan), 7},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxHeatKM), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_Blowing2, g_nStringIdxTEN), 7},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdSP_Blowing), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_Blowing2, g_nStringIdSP_TimeBlow), 7},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_Blowing2, g_nStringIdxFan), 7, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxFan), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_Blowing2, g_nStringIdxBlowing), 7, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxBlowing), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_Blowing2, g_nStringIdiET), 7, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdiETBlow), -1},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxStart), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_And, g_nStringIdxIn2), 8},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_And, g_nStringIdxOut), 8, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_X1_AND_notX2, g_nStringIdxIn1), 6},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxDPD), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_AlarmFan, g_nStringIdxStatusDPD), 9},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxTK), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_AlarmFan, g_nStringIdxTK_Fan), 9},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxQF), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_AlarmFan, g_nStringIdxQF_Fan), 9},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdSP_DelAlrmDPD_Fan), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_AlarmFan, g_nStringIdSP_DelAlarmDPD), 9},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxReset), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_AlarmFan, g_nStringIdxResetAlarm), 9},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_AlarmFan, g_nStringIdxAlarmKM_Fan), 9, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxAlarmKM), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_AlarmFan, g_nStringIdxAlarmDPD), 9, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxAlarmDPD), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_AlarmFan, g_nStringIdxAlarmTK_Fan), 9, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxAlarmTK), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_AlarmFan, g_nStringIdxAlarmQF_Fan), 9, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxAlarmQF), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_AlarmFan, g_nStringIdxAlarmFan), 9, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxAlarmFan), -1},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxStatusFC), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_AlarmFan, g_nStringIdxStatusFC), 9},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_AlarmFan, g_nStringIdxAlarmFC), 9, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxAlarmFC), -1},
};

const SCFB_FBFannedOutConnectionData FORTE_Sub_Fan1::scm_astFannedOutDataConnections[] = {
  {0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdout_EM, g_nStringIdID), 3},
  {2, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdout_EH, g_nStringIdSD_1), 2},
  {2, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdUDINT_TO_2WORD_1, g_nStringIdin), 5},
  {4, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdout_EM, g_nStringIdSD_1), 3},
  {4, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdUDINT_TO_2WORD, g_nStringIdin), 4},
  {9, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_AlarmFan, g_nStringIdxStatusKM), 9},
  {10, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_And, g_nStringIdxIn1), 8},
  {10, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_AlarmFan, g_nStringIdxAuto), 9},
  {18, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_AlarmFan, g_nStringIdxStart), 9},
  {29, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_X1_AND_notX2, g_nStringIdxIn2), 6},
};

const SCFB_FBNData FORTE_Sub_Fan1::scm_stFBNData = {
  10, scm_astInternalFBs,
  14, scm_astEventConnections,
  1, scm_astFannedOutEventConnections,
  32, scm_astDataConnections,
  10, scm_astFannedOutDataConnections,
  4, scm_astParamters
};



