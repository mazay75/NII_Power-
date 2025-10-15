/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: Sub_AlarmReset
 *** Description: Subapplication Type
 *** Version:
***     1.0: 2024-12-02/sergdebwork -  - 
 *************************************************************************/

#include "Sub_AlarmReset.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "Sub_AlarmReset_gen.cpp"
#endif


DEFINE_FIRMWARE_FB(FORTE_Sub_AlarmReset, g_nStringIdSub_AlarmReset)

const CStringDictionary::TStringId FORTE_Sub_AlarmReset::scm_anDataInputNames[] = {g_nStringIdxRemote, g_nStringIdID};

const CStringDictionary::TStringId FORTE_Sub_AlarmReset::scm_anDataInputTypeIds[] = {g_nStringIdBOOL, g_nStringIdWSTRING};

const CStringDictionary::TStringId FORTE_Sub_AlarmReset::scm_anDataOutputNames[] = {g_nStringIdxAlarmReset, g_nStringIdwAlarmReset};

const CStringDictionary::TStringId FORTE_Sub_AlarmReset::scm_anDataOutputTypeIds[] = {g_nStringIdBOOL, g_nStringIdWORD};

const TForteInt16 FORTE_Sub_AlarmReset::scm_anEIWithIndexes[] = {-1, -1};
const CStringDictionary::TStringId FORTE_Sub_AlarmReset::scm_anEventInputNames[] = {g_nStringIdINIT, g_nStringIdREQ};

const TForteInt16 FORTE_Sub_AlarmReset::scm_anEOWithIndexes[] = {-1, -1};
const CStringDictionary::TStringId FORTE_Sub_AlarmReset::scm_anEventOutputNames[] = {g_nStringIdINITO, g_nStringIdCNF};


const SFBInterfaceSpec FORTE_Sub_AlarmReset::scm_stFBInterfaceSpec = {
  2, scm_anEventInputNames, nullptr, scm_anEIWithIndexes,
  2, scm_anEventOutputNames, nullptr, scm_anEOWithIndexes,
  2, scm_anDataInputNames, scm_anDataInputTypeIds,
  2, scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, nullptr
};

const SCFB_FBInstanceData FORTE_Sub_AlarmReset::scm_astInternalFBs[] = {
  {g_nStringIdFB_AlrmResCond, g_nStringIdFB_AlrmResCond},
  {g_nStringIdSUBSCRIBE_1, g_nStringIdSUBSCRIBE_1},
  {g_nStringIdPUBLISH_1, g_nStringIdPUBLISH_1},
  {g_nStringIdReSetCmd_WORD, g_nStringIdReSetCmd_WORD},
  {g_nStringIdFB_TOF, g_nStringIdFB_TOF},
  {g_nStringIdFB_F_TRIG, g_nStringIdFB_F_TRIG},
  {g_nStringIdFB_R_TRIG, g_nStringIdFB_R_TRIG},
  {g_nStringIdFB_OR, g_nStringIdFB_OR},
  {g_nStringIdFB_OR_1, g_nStringIdFB_OR}
};

const SCFB_FBParameter FORTE_Sub_AlarmReset::scm_astParamters[] = {
  {1, g_nStringIdQI, "1"},
  {2, g_nStringIdQI, "1"},
  {3, g_nStringIdDelay, "T#3s"},
  {4, g_nStringIdPT, "T#3s"},
};

const SCFB_FBConnectionData FORTE_Sub_AlarmReset::scm_astEventConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_AlrmResCond, g_nStringIdCNF), 0, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdCNF), -1},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdREQ), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_AlrmResCond, g_nStringIdREQ), 0},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdINIT), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSUBSCRIBE_1, g_nStringIdINIT), 1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSUBSCRIBE_1, g_nStringIdINITO), 1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdPUBLISH_1, g_nStringIdINIT), 2},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSUBSCRIBE_1, g_nStringIdIND), 1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdReSetCmd_WORD, g_nStringIdREQ), 3},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdReSetCmd_WORD, g_nStringIdCNF), 3, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdPUBLISH_1, g_nStringIdREQ), 2},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdPUBLISH_1, g_nStringIdINITO), 2, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdINITO), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_F_TRIG, g_nStringIdCNF), 5, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_OR, g_nStringIdREQ), 7},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_OR, g_nStringIdCNF), 7, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TOF, g_nStringIdREQ), 4},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TOF, g_nStringIdCNF), 4, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_OR_1, g_nStringIdREQ), 8},
};

const SCFB_FBFannedOutConnectionData FORTE_Sub_AlarmReset::scm_astFannedOutEventConnections[] = {
  {1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_F_TRIG, g_nStringIdREQ), 5},
  {1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_R_TRIG, g_nStringIdREQ), 6},
};

const SCFB_FBConnectionData FORTE_Sub_AlarmReset::scm_astDataConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdReSetCmd_WORD, g_nStringIdOutCmd), 3, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdPUBLISH_1, g_nStringIdSD_1), 2},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSUBSCRIBE_1, g_nStringIdRD_1), 1, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdwAlarmReset), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_OR, g_nStringIdxOut), 7, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TOF, g_nStringIdIN), 4},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_F_TRIG, g_nStringIdQ), 5, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_OR, g_nStringIdxIn1), 7},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_R_TRIG, g_nStringIdQ), 6, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_OR, g_nStringIdxIn2), 7},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TOF, g_nStringIdQ), 4, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_OR_1, g_nStringIdxIn2), 8},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_AlrmResCond, g_nStringIdxAlarmReset), 0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_OR_1, g_nStringIdxIn1), 8},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_OR_1, g_nStringIdxOut), 8, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxAlarmReset), -1},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdxRemote), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_F_TRIG, g_nStringIdCLK), 5},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdID), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSUBSCRIBE_1, g_nStringIdID), 1},
};

const SCFB_FBFannedOutConnectionData FORTE_Sub_AlarmReset::scm_astFannedOutDataConnections[] = {
  {1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdReSetCmd_WORD, g_nStringIdInCmd), 3},
  {1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_AlrmResCond, g_nStringIdwAlarmReset), 0},
  {8, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_R_TRIG, g_nStringIdCLK), 6},
  {9, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdPUBLISH_1, g_nStringIdID), 2},
};

const SCFB_FBNData FORTE_Sub_AlarmReset::scm_stFBNData = {
  9, scm_astInternalFBs,
  10, scm_astEventConnections,
  2, scm_astFannedOutEventConnections,
  10, scm_astDataConnections,
  4, scm_astFannedOutDataConnections,
  4, scm_astParamters
};



