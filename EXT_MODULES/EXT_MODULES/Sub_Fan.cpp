/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: Sub_Fan
 *** Description: Subapplication Type
 *** Version:
***     1.0: 2024-11-11/sergdebwork -  - 
 *************************************************************************/

#include "Sub_Fan.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "Sub_Fan_gen.cpp"
#endif


DEFINE_FIRMWARE_FB(FORTE_Sub_Fan, g_nStringIdSub_Fan)

const CStringDictionary::TStringId FORTE_Sub_Fan::scm_anDataInputNames[] = {g_nStringIdxAuto, g_nStringIdxStart, g_nStringIdxDPD, g_nStringIdxKM, g_nStringIdxQF, g_nStringIdxTK, g_nStringIdxHeatDisEnable, g_nStringIdxHeatKM, g_nStringIdxReset, g_nStringIdSP_DelAlrmDPD_OnFan, g_nStringIdSP_DelAlrmDPD_OffFan, g_nStringIdSP_DelAlrmKM_OnFan, g_nStringIdSP_DelAlrmKM_OffFan, g_nStringIdSP_Blowing, g_nStringIdvar_EngineMinutes, g_nStringIdvar_EngineHours};

const CStringDictionary::TStringId FORTE_Sub_Fan::scm_anDataInputTypeIds[] = {g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdUINT, g_nStringIdUINT, g_nStringIdUINT, g_nStringIdUINT, g_nStringIdUINT, g_nStringIdWSTRING, g_nStringIdWSTRING};

const CStringDictionary::TStringId FORTE_Sub_Fan::scm_anDataOutputNames[] = {g_nStringIdxFan, g_nStringIdxAlarmFan, g_nStringIdxAlarmDPD, g_nStringIdxAlarmKM, g_nStringIdxAlarmQF, g_nStringIdxAlarmTK, g_nStringIdxExeHeating, g_nStringIdxHeatWorkOnce, g_nStringIdxBlowing, g_nStringIdEngineMinutes, g_nStringIdEngineHours, g_nStringIdwEngineMinutes_0, g_nStringIdwEngineMinutes_1, g_nStringIdwEngineHours_0, g_nStringIdwEngineHours_1};

const CStringDictionary::TStringId FORTE_Sub_Fan::scm_anDataOutputTypeIds[] = {g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdUDINT, g_nStringIdUDINT, g_nStringIdWORD, g_nStringIdWORD, g_nStringIdWORD, g_nStringIdWORD};

const TForteInt16 FORTE_Sub_Fan::scm_anEIWithIndexes[] = {-1, -1};
const CStringDictionary::TStringId FORTE_Sub_Fan::scm_anEventInputNames[] = {g_nStringIdINIT, g_nStringIdREQ};

const TForteInt16 FORTE_Sub_Fan::scm_anEOWithIndexes[] = {-1, -1};
const CStringDictionary::TStringId FORTE_Sub_Fan::scm_anEventOutputNames[] = {g_nStringIdINITO, g_nStringIdCNF};


const SFBInterfaceSpec FORTE_Sub_Fan::scm_stFBInterfaceSpec = {
  2, scm_anEventInputNames, nullptr, scm_anEIWithIndexes,
  2, scm_anEventOutputNames, nullptr, scm_anEOWithIndexes,
  16, scm_anDataInputNames, scm_anDataInputTypeIds,
  15, scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, nullptr
};

const SCFB_FBInstanceData FORTE_Sub_Fan::scm_astInternalFBs[] = {
  {g_nStringIdF_NOT, g_nStringIdF_NOT},
  {g_nStringIdSub_AlarmQF, g_nStringIdSub_AlarmQF},
  {g_nStringIdSub_AlarmTK, g_nStringIdSub_AlarmTK},
  {g_nStringIdF_NOT_1, g_nStringIdF_NOT},
  {g_nStringIdF_NOT_2, g_nStringIdF_NOT},
  {g_nStringIdF_NOT_3, g_nStringIdF_NOT},
  {g_nStringIdFB_AND_5, g_nStringIdFB_AND_5},
  {g_nStringIdSub_AlarmDPD, g_nStringIdSub_AlarmDPD},
  {g_nStringIdSub_AlarmKM, g_nStringIdSub_AlarmKM},
  {g_nStringIdFB_And, g_nStringIdFB_And},
  {g_nStringIdFB_XPB1, g_nStringIdFB_XPB1},
  {g_nStringIdin_EM, g_nStringIdSUBSCRIBE_1},
  {g_nStringIdFB_EngineHours, g_nStringIdFB_EngineHours},
  {g_nStringIdout_EH, g_nStringIdPUBLISH_1},
  {g_nStringIdout_EM, g_nStringIdPUBLISH_1},
  {g_nStringIdFB_NOT_AND, g_nStringIdFB_X1_AND_notX2},
  {g_nStringIdBlowing, g_nStringIdBlowing},
  {g_nStringIdUDINT_TO_2WORD, g_nStringIdUDINT_TO_2WORD},
  {g_nStringIdUDINT_TO_2WORD_1, g_nStringIdUDINT_TO_2WORD}
};

const SCFB_FBParameter FORTE_Sub_Fan::scm_astParamters[] = {
  {11, g_nStringIdQI, "1"},
  {13, g_nStringIdQI, "1"},
  {14, g_nStringIdQI, "1"},
};

const SCFB_FBConnectionData FORTE_Sub_Fan::scm_astEventConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_AlarmDPD, g_nStringIdCNF), 7, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_NOT, g_nStringIdREQ), 0},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdREQ), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_And, g_nStringIdREQ), 9},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_And, g_nStringIdCNF), 9, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_AlarmDPD, g_nStringIdREQ), 7},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_NOT, g_nStringIdCNF), 0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_AlarmKM, g_nStringIdREQ), 8},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_AlarmKM, g_nStringIdCNF), 8, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_NOT_1, g_nStringIdREQ), 3},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_NOT_1, g_nStringIdCNF), 3, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_AlarmQF, g_nStringIdREQ), 1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_AlarmQF, g_nStringIdCNF), 1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_NOT_2, g_nStringIdREQ), 4},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_NOT_2, g_nStringIdCNF), 4, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_AlarmTK, g_nStringIdREQ), 2},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_AlarmTK, g_nStringIdCNF), 2, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_NOT_3, g_nStringIdREQ), 5},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdINIT), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdin_EM, g_nStringIdINIT), 11},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdin_EM, g_nStringIdINITO), 11, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdout_EH, g_nStringIdINIT), 13},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdout_EH, g_nStringIdINITO), 13, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdout_EM, g_nStringIdINIT), 14},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_XPB1, g_nStringIdCNF), 10, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_EngineHours, g_nStringIdREQ), 12},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_EngineHours, g_nStringIdCNF), 12, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdout_EH, g_nStringIdREQ), 13},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_EngineHours, g_nStringIdWRTM), 12, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdout_EM, g_nStringIdREQ), 14},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdout_EM, g_nStringIdINITO), 14, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdINITO), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_AND_5, g_nStringIdCNF), 6, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_NOT_AND, g_nStringIdREQ), 15},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_NOT_AND, g_nStringIdCNF), 15, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdBlowing, g_nStringIdREQ), 16},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdBlowing, g_nStringIdCNF), 16, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_XPB1, g_nStringIdREQ), 10},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdout_EH, g_nStringIdCNF), 13, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdUDINT_TO_2WORD, g_nStringIdREQ), 17},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdUDINT_TO_2WORD, g_nStringIdCNF), 17, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdUDINT_TO_2WORD_1, g_nStringIdREQ), 18},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdUDINT_TO_2WORD_1, g_nStringIdCNF), 18, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdCNF), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_NOT_3, g_nStringIdCNF), 5, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_AND_5, g_nStringIdREQ), 6},
};

const SCFB_FBConnectionData FORTE_Sub_Fan::scm_astDataConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxDPD), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_AlarmDPD, g_nStringIdxDPD), 7},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxReset), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_AlarmDPD, g_nStringIdxReset), 7},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdSP_DelAlrmDPD_OnFan), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_AlarmDPD, g_nStringIdSP_DelAlrmDPD_OnFan), 7},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdSP_DelAlrmDPD_OffFan), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_AlarmDPD, g_nStringIdSP_DelAlrmDPD_OffFan), 7},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_AlarmDPD, g_nStringIdxAlarmDPD), 7, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxAlarmDPD), -1},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxAuto), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_AlarmDPD, g_nStringIdxAuto), 7},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxStart), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_AlarmDPD, g_nStringIdxStart), 7},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxKM), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_AlarmKM, g_nStringIdxKM), 8},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxQF), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_AlarmQF, g_nStringIdxQF), 1},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxTK), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_AlarmTK, g_nStringIdxTK), 2},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_AlarmKM, g_nStringIdxAlarmKM), 8, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxAlarmKM), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_AlarmQF, g_nStringIdxAlarmQF), 1, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxAlarmQF), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_AlarmTK, g_nStringIdxAlarmTK), 2, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxAlarmTK), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_And, g_nStringIdxOut), 9, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_AND_5, g_nStringIdIn1), 6},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_NOT, g_nStringIdOUT), 0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_AND_5, g_nStringIdIn2), 6},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_NOT_1, g_nStringIdOUT), 3, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_AND_5, g_nStringIdIn3), 6},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_NOT_2, g_nStringIdOUT), 4, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_AND_5, g_nStringIdIn4), 6},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_NOT_3, g_nStringIdOUT), 5, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_AND_5, g_nStringIdIn5), 6},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdSP_DelAlrmKM_OnFan), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_AlarmKM, g_nStringIdSP_DelAlrmKM_OnFan), 8},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdSP_DelAlrmKM_OffFan), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_AlarmKM, g_nStringIdSP_DelAlrmKM_OffFan), 8},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_XPB1, g_nStringIdxAlarmFan), 10, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxAlarmFan), -1},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdvar_EngineMinutes), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdin_EM, g_nStringIdID), 11},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdin_EM, g_nStringIdRD_1), 11, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_EngineHours, g_nStringIdinitEM), 12},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_EngineHours, g_nStringIdoutEH), 12, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdEngineHours), -1},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdvar_EngineHours), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdout_EH, g_nStringIdID), 13},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_EngineHours, g_nStringIdoutEM), 12, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdEngineMinutes), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_AND_5, g_nStringIdOut1), 6, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_NOT_AND, g_nStringIdxIn1), 15},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxHeatDisEnable), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_NOT_AND, g_nStringIdxIn2), 15},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_NOT_AND, g_nStringIdxOut), 15, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxExeHeating), -1},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxHeatKM), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdBlowing, g_nStringIdHeat), 16},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdSP_Blowing), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdBlowing, g_nStringIdToff), 16},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdBlowing, g_nStringIdOunFan), 16, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxFan), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdBlowing, g_nStringIdHeatWorkOnce), 16, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxHeatWorkOnce), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdBlowing, g_nStringIdBlowing), 16, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxBlowing), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdUDINT_TO_2WORD, g_nStringIdWORD0), 17, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdwEngineMinutes_0), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdUDINT_TO_2WORD, g_nStringIdWORD1), 17, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdwEngineMinutes_1), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdUDINT_TO_2WORD_1, g_nStringIdWORD0), 18, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdwEngineHours_0), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdUDINT_TO_2WORD_1, g_nStringIdWORD1), 18, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdwEngineHours_1), -1},
};

const SCFB_FBFannedOutConnectionData FORTE_Sub_Fan::scm_astFannedOutDataConnections[] = {
  {1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_AlarmKM, g_nStringIdxReset), 8},
  {1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_AlarmQF, g_nStringIdxReset), 1},
  {1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_AlarmTK, g_nStringIdxReset), 2},
  {4, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_NOT, g_nStringIdIN), 0},
  {4, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_XPB1, g_nStringIdxAlarmDPD), 10},
  {5, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_AlarmKM, g_nStringIdxAuto), 8},
  {5, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_AlarmQF, g_nStringIdxAuto), 1},
  {5, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_AlarmTK, g_nStringIdxAuto), 2},
  {5, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_And, g_nStringIdxIn1), 9},
  {5, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_XPB1, g_nStringIdxAuto), 10},
  {5, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdBlowing, g_nStringIdAuto), 16},
  {6, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_AlarmKM, g_nStringIdxStart), 8},
  {6, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_And, g_nStringIdxIn2), 9},
  {10, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_NOT_1, g_nStringIdIN), 3},
  {10, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_XPB1, g_nStringIdxAlarmKM), 10},
  {11, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_NOT_2, g_nStringIdIN), 4},
  {11, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_XPB1, g_nStringIdxAlarmQF), 10},
  {12, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_NOT_3, g_nStringIdIN), 5},
  {12, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_XPB1, g_nStringIdxAlarmTK), 10},
  {21, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdout_EM, g_nStringIdID), 14},
  {23, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdout_EH, g_nStringIdSD_1), 13},
  {23, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdUDINT_TO_2WORD_1, g_nStringIdin), 18},
  {25, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdout_EM, g_nStringIdSD_1), 14},
  {25, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdUDINT_TO_2WORD, g_nStringIdin), 17},
  {26, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdBlowing, g_nStringIdInFan), 16},
  {31, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_EngineHours, g_nStringIdInFan), 12},
};

const SCFB_FBNData FORTE_Sub_Fan::scm_stFBNData = {
  19, scm_astInternalFBs,
  23, scm_astEventConnections,
  0, nullptr,
  38, scm_astDataConnections,
  26, scm_astFannedOutDataConnections,
  3, scm_astParamters
};



