/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: Sub_Work
 *** Description: Subapplication Type
 *** Version:
***     1.0: 2024-11-27/sergdebwork -  - 
 *************************************************************************/

#include "Sub_Work.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "Sub_Work_gen.cpp"
#endif


DEFINE_FIRMWARE_FB(FORTE_Sub_Work, g_nStringIdSub_Work)

const CStringDictionary::TStringId FORTE_Sub_Work::scm_anDataInputNames[] = {g_nStringIdxStart, g_nStringIdxStop, g_nStringIdxAlarm, g_nStringIdxFire, g_nStringIdxAutoMode, g_nStringIdxRemoteMode, g_nStringIdxBlockStatus, g_nStringIdvarName};

const CStringDictionary::TStringId FORTE_Sub_Work::scm_anDataInputTypeIds[] = {g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdWSTRING};

const CStringDictionary::TStringId FORTE_Sub_Work::scm_anDataOutputNames[] = {g_nStringIdxRemoteStdby, g_nStringIdxWork, g_nStringIdcmdToBroker, g_nStringIdxAlarmReset};

const CStringDictionary::TStringId FORTE_Sub_Work::scm_anDataOutputTypeIds[] = {g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdWORD, g_nStringIdBOOL};

const TForteInt16 FORTE_Sub_Work::scm_anEIWithIndexes[] = {-1, -1};
const CStringDictionary::TStringId FORTE_Sub_Work::scm_anEventInputNames[] = {g_nStringIdINIT, g_nStringIdREQ};

const TForteInt16 FORTE_Sub_Work::scm_anEOWithIndexes[] = {-1, -1};
const CStringDictionary::TStringId FORTE_Sub_Work::scm_anEventOutputNames[] = {g_nStringIdINITO, g_nStringIdCNF};


const SFBInterfaceSpec FORTE_Sub_Work::scm_stFBInterfaceSpec = {
  2, scm_anEventInputNames, nullptr, scm_anEIWithIndexes,
  2, scm_anEventOutputNames, nullptr, scm_anEOWithIndexes,
  8, scm_anDataInputNames, scm_anDataInputTypeIds,
  4, scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, nullptr
};

const SCFB_FBInstanceData FORTE_Sub_Work::scm_astInternalFBs[] = {
  {g_nStringIdReSetCmd_WORD, g_nStringIdReSetCmd_WORD},
  {g_nStringIdSUBSCRIBE_1, g_nStringIdSUBSCRIBE_1},
  {g_nStringIdPUBLISH_1, g_nStringIdPUBLISH_1},
  {g_nStringIdFB_AlrmResCond, g_nStringIdFB_AlrmResCond},
  {g_nStringIdFB_R_TRIG, g_nStringIdFB_R_TRIG},
  {g_nStringIdFB_F_TRIG, g_nStringIdFB_F_TRIG},
  {g_nStringIdFB_OR, g_nStringIdFB_OR},
  {g_nStringIdFB_TOF, g_nStringIdFB_TOF},
  {g_nStringIdFB_OR_1, g_nStringIdFB_OR},
  {g_nStringIdFB_F_TRIG_1, g_nStringIdFB_F_TRIG},
  {g_nStringIdFB_R_TRIG_1, g_nStringIdFB_R_TRIG},
  {g_nStringIdFB_AlgStartStop, g_nStringIdFB_AlgStartStop}
};

const SCFB_FBParameter FORTE_Sub_Work::scm_astParamters[] = {
  {0, g_nStringIdDelay, "T#3s"},
  {1, g_nStringIdQI, "1"},
  {2, g_nStringIdQI, "1"},
  {7, g_nStringIdPT, "T#3s"},
};

const SCFB_FBConnectionData FORTE_Sub_Work::scm_astEventConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdINIT), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSUBSCRIBE_1, g_nStringIdINIT), 1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSUBSCRIBE_1, g_nStringIdINITO), 1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdPUBLISH_1, g_nStringIdINIT), 2},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdPUBLISH_1, g_nStringIdINITO), 2, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdINITO), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSUBSCRIBE_1, g_nStringIdIND), 1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdReSetCmd_WORD, g_nStringIdREQ), 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdReSetCmd_WORD, g_nStringIdCNF), 0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdPUBLISH_1, g_nStringIdREQ), 2},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_OR, g_nStringIdCNF), 6, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TOF, g_nStringIdREQ), 7},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_F_TRIG, g_nStringIdCNF), 5, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_R_TRIG, g_nStringIdREQ), 4},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_R_TRIG, g_nStringIdCNF), 4, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_OR, g_nStringIdREQ), 6},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TOF, g_nStringIdCNF), 7, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_OR_1, g_nStringIdREQ), 8},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_AlrmResCond, g_nStringIdCNF), 3, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_F_TRIG, g_nStringIdREQ), 5},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_OR_1, g_nStringIdCNF), 8, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdCNF), -1},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdREQ), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_R_TRIG_1, g_nStringIdREQ), 10},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_R_TRIG_1, g_nStringIdCNF), 10, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_F_TRIG_1, g_nStringIdREQ), 9},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_F_TRIG_1, g_nStringIdCNF), 9, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_AlgStartStop, g_nStringIdREQ), 11},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_AlgStartStop, g_nStringIdCNF), 11, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_AlrmResCond, g_nStringIdREQ), 3},
};

const SCFB_FBConnectionData FORTE_Sub_Work::scm_astDataConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSUBSCRIBE_1, g_nStringIdRD_1), 1, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdcmdToBroker), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdReSetCmd_WORD, g_nStringIdOutCmd), 0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdPUBLISH_1, g_nStringIdSD_1), 2},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_R_TRIG, g_nStringIdQ), 4, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_OR, g_nStringIdxIn2), 6},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_F_TRIG, g_nStringIdQ), 5, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_OR, g_nStringIdxIn1), 6},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_OR, g_nStringIdxOut), 6, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TOF, g_nStringIdIN), 7},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_AlrmResCond, g_nStringIdxAlarmReset), 3, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_OR_1, g_nStringIdxIn1), 8},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TOF, g_nStringIdQ), 7, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_OR_1, g_nStringIdxIn2), 8},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_OR_1, g_nStringIdxOut), 8, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxAlarmReset), -1},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdvarName), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSUBSCRIBE_1, g_nStringIdID), 1},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxAutoMode), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_F_TRIG, g_nStringIdCLK), 5},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxBlockStatus), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_R_TRIG_1, g_nStringIdCLK), 10},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxStart), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_AlgStartStop, g_nStringIdxStart), 11},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxStop), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_AlgStartStop, g_nStringIdxStop), 11},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxAlarm), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_AlgStartStop, g_nStringIdxAlarm), 11},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxFire), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_AlgStartStop, g_nStringIdxFire), 11},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxRemoteMode), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_AlgStartStop, g_nStringIdxRemote), 11},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_R_TRIG_1, g_nStringIdQ), 10, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_AlgStartStop, g_nStringIdrBlockStatus), 11},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_F_TRIG_1, g_nStringIdQ), 9, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_AlgStartStop, g_nStringIdfBlockStatus), 11},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_AlgStartStop, g_nStringIdxWork), 11, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxWork), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_AlgStartStop, g_nStringIdxRemoteStdby), 11, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxRemoteStdby), -1},
};

const SCFB_FBFannedOutConnectionData FORTE_Sub_Work::scm_astFannedOutDataConnections[] = {
  {0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdReSetCmd_WORD, g_nStringIdInCmd), 0},
  {0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_AlrmResCond, g_nStringIdwAlarmReset), 3},
  {0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_AlgStartStop, g_nStringIdwCmdStartStop), 11},
  {8, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdPUBLISH_1, g_nStringIdID), 2},
  {9, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_R_TRIG, g_nStringIdCLK), 4},
  {9, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_AlgStartStop, g_nStringIdxAuto), 11},
  {10, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_F_TRIG_1, g_nStringIdCLK), 9},
};

const SCFB_FBNData FORTE_Sub_Work::scm_stFBNData = {
  12, scm_astInternalFBs,
  15, scm_astEventConnections,
  0, nullptr,
  20, scm_astDataConnections,
  7, scm_astFannedOutDataConnections,
  4, scm_astParamters
};



