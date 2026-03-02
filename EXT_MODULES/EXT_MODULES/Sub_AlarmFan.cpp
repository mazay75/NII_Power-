/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: Sub_AlarmFan
 *** Description: Subapplication Type
 *** Version:
***     1.0: 2025-10-08/sergdeb -  - 
 *************************************************************************/

#include "Sub_AlarmFan.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "Sub_AlarmFan_gen.cpp"
#endif


DEFINE_FIRMWARE_FB(FORTE_Sub_AlarmFan, g_nStringIdSub_AlarmFan)

const CStringDictionary::TStringId FORTE_Sub_AlarmFan::scm_anDataInputNames[] = {g_nStringIdxAuto, g_nStringIdxStart, g_nStringIdxStatusKM, g_nStringIdxStatusDPD, g_nStringIdxTK_Fan, g_nStringIdxQF_Fan, g_nStringIdxStatusFC, g_nStringIdSP_DelAlarmKM_Fan, g_nStringIdSP_DelAlarmDPD, g_nStringIdxResetAlarm};

const CStringDictionary::TStringId FORTE_Sub_AlarmFan::scm_anDataInputTypeIds[] = {g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdUINT, g_nStringIdUINT, g_nStringIdBOOL};

const CStringDictionary::TStringId FORTE_Sub_AlarmFan::scm_anDataOutputNames[] = {g_nStringIdxAlarmKM_Fan, g_nStringIdxAlarmDPD, g_nStringIdxAlarmTK_Fan, g_nStringIdxAlarmQF_Fan, g_nStringIdxAlarmFC, g_nStringIdxAlarmFan};

const CStringDictionary::TStringId FORTE_Sub_AlarmFan::scm_anDataOutputTypeIds[] = {g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL};

const TForteInt16 FORTE_Sub_AlarmFan::scm_anEIWithIndexes[] = {-1};
const CStringDictionary::TStringId FORTE_Sub_AlarmFan::scm_anEventInputNames[] = {g_nStringIdREQ};

const TForteInt16 FORTE_Sub_AlarmFan::scm_anEOWithIndexes[] = {-1};
const CStringDictionary::TStringId FORTE_Sub_AlarmFan::scm_anEventOutputNames[] = {g_nStringIdCNF};


const SFBInterfaceSpec FORTE_Sub_AlarmFan::scm_stFBInterfaceSpec = {
  1, scm_anEventInputNames, nullptr, scm_anEIWithIndexes,
  1, scm_anEventOutputNames, nullptr, scm_anEOWithIndexes,
  10, scm_anDataInputNames, scm_anDataInputTypeIds,
  6, scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, nullptr
};

const SCFB_FBInstanceData FORTE_Sub_AlarmFan::scm_astInternalFBs[] = {
  {g_nStringIdSub_AlarmKM, g_nStringIdSub_AlarmKM},
  {g_nStringIdSub_AlarmDPD, g_nStringIdSub_AlarmDPD},
  {g_nStringIdSub_AlarmQF, g_nStringIdSub_AlarmQF},
  {g_nStringIdSub_AlarmTK, g_nStringIdSub_AlarmTK},
  {g_nStringIdSub_AlarmFC, g_nStringIdSub_AlarmFC},
  {g_nStringIdFB_XPB1, g_nStringIdFB_XPB1}
};


const SCFB_FBConnectionData FORTE_Sub_AlarmFan::scm_astEventConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdREQ), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_AlarmKM, g_nStringIdREQ), 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_AlarmKM, g_nStringIdCNF), 0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_AlarmDPD, g_nStringIdREQ), 1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_AlarmDPD, g_nStringIdCNF), 1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_AlarmTK, g_nStringIdREQ), 3},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_AlarmTK, g_nStringIdCNF), 3, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_AlarmQF, g_nStringIdREQ), 2},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_AlarmQF, g_nStringIdCNF), 2, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_AlarmFC, g_nStringIdREQ), 4},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_XPB1, g_nStringIdCNF), 5, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdCNF), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_AlarmFC, g_nStringIdCNF), 4, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_XPB1, g_nStringIdREQ), 5},
};

const SCFB_FBConnectionData FORTE_Sub_AlarmFan::scm_astDataConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxAuto), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_AlarmKM, g_nStringIdxAuto), 0},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxStart), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_AlarmKM, g_nStringIdxStart), 0},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxStatusKM), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_AlarmKM, g_nStringIdxKM), 0},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxResetAlarm), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_AlarmKM, g_nStringIdxReset), 0},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdSP_DelAlarmKM_Fan), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_AlarmKM, g_nStringIdSP_DelAlrmKM_OnFan), 0},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxStatusDPD), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_AlarmDPD, g_nStringIdxDPD), 1},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdSP_DelAlarmDPD), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_AlarmDPD, g_nStringIdSP_DelAlrmDPD_OnFan), 1},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxTK_Fan), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_AlarmTK, g_nStringIdxTK), 3},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxQF_Fan), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_AlarmQF, g_nStringIdxQF), 2},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_AlarmKM, g_nStringIdxAlarmKM), 0, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxAlarmKM_Fan), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_AlarmDPD, g_nStringIdxAlarmDPD), 1, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxAlarmDPD), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_AlarmTK, g_nStringIdxAlarmTK), 3, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxAlarmTK_Fan), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_AlarmQF, g_nStringIdxAlarmQF), 2, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxAlarmQF_Fan), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_XPB1, g_nStringIdxAlarmFan), 5, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxAlarmFan), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_AlarmFC, g_nStringIdxAlarmFC), 4, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_XPB1, g_nStringIdxAlarmFC), 5},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxStatusFC), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_AlarmFC, g_nStringIdxFC), 4},
};

const SCFB_FBFannedOutConnectionData FORTE_Sub_AlarmFan::scm_astFannedOutDataConnections[] = {
  {0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_AlarmDPD, g_nStringIdxAuto), 1},
  {0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_AlarmTK, g_nStringIdxAuto), 3},
  {0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_AlarmQF, g_nStringIdxAuto), 2},
  {0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_XPB1, g_nStringIdxAuto), 5},
  {0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_AlarmFC, g_nStringIdxAuto), 4},
  {1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_AlarmDPD, g_nStringIdxStart), 1},
  {1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_AlarmFC, g_nStringIdxStart), 4},
  {3, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_AlarmDPD, g_nStringIdxReset), 1},
  {3, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_AlarmTK, g_nStringIdxReset), 3},
  {3, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_AlarmQF, g_nStringIdxReset), 2},
  {3, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_AlarmFC, g_nStringIdxReset), 4},
  {4, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_AlarmKM, g_nStringIdSP_DelAlrmKM_OffFan), 0},
  {6, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_AlarmDPD, g_nStringIdSP_DelAlrmDPD_OffFan), 1},
  {9, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_XPB1, g_nStringIdxAlarmKM), 5},
  {10, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_XPB1, g_nStringIdxAlarmDPD), 5},
  {11, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_XPB1, g_nStringIdxAlarmTK), 5},
  {12, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_XPB1, g_nStringIdxAlarmQF), 5},
};

const SCFB_FBNData FORTE_Sub_AlarmFan::scm_stFBNData = {
  6, scm_astInternalFBs,
  7, scm_astEventConnections,
  0, nullptr,
  16, scm_astDataConnections,
  17, scm_astFannedOutDataConnections,
  0, nullptr
};



