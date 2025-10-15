/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: Sub_AlarmsFan
 *** Description: Subapplication Type
 *** Version:
***     1.0: 2024-11-11/sergdebwork -  - 
 *************************************************************************/

#include "Sub_AlarmsFan.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "Sub_AlarmsFan_gen.cpp"
#endif


DEFINE_FIRMWARE_FB(FORTE_Sub_AlarmsFan, g_nStringIdSub_AlarmsFan)

const CStringDictionary::TStringId FORTE_Sub_AlarmsFan::scm_anDataInputNames[] = {g_nStringIdxAuto, g_nStringIdxStart, g_nStringIdxDPD, g_nStringIdxKM, g_nStringIdxQF, g_nStringIdxTK, g_nStringIdxReset, g_nStringIdSP_DelAlrmDPD_OnFan, g_nStringIdSP_DelAlrmDPD_OffFan, g_nStringIdSP_DelAlrmKM_OnFan, g_nStringIdSP_DelAlrmKM_OffFan, g_nStringIdxResetMotoHours};

const CStringDictionary::TStringId FORTE_Sub_AlarmsFan::scm_anDataInputTypeIds[] = {g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdUINT, g_nStringIdUINT, g_nStringIdUINT, g_nStringIdUINT, g_nStringIdBOOL};

const CStringDictionary::TStringId FORTE_Sub_AlarmsFan::scm_anDataOutputNames[] = {g_nStringIdxFan, g_nStringIdxAlarmFan, g_nStringIdxAlarmDPD, g_nStringIdxAlarmKM, g_nStringIdxAlarmQF, g_nStringIdxAlarmTK, g_nStringIddwMotoHours};

const CStringDictionary::TStringId FORTE_Sub_AlarmsFan::scm_anDataOutputTypeIds[] = {g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdDWORD};

const TForteInt16 FORTE_Sub_AlarmsFan::scm_anEIWithIndexes[] = {-1};
const CStringDictionary::TStringId FORTE_Sub_AlarmsFan::scm_anEventInputNames[] = {g_nStringIdREQ};

const TForteInt16 FORTE_Sub_AlarmsFan::scm_anEOWithIndexes[] = {-1};
const CStringDictionary::TStringId FORTE_Sub_AlarmsFan::scm_anEventOutputNames[] = {g_nStringIdCNF};


const SFBInterfaceSpec FORTE_Sub_AlarmsFan::scm_stFBInterfaceSpec = {
  1, scm_anEventInputNames, nullptr, scm_anEIWithIndexes,
  1, scm_anEventOutputNames, nullptr, scm_anEOWithIndexes,
  12, scm_anDataInputNames, scm_anDataInputTypeIds,
  7, scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, nullptr
};

const SCFB_FBInstanceData FORTE_Sub_AlarmsFan::scm_astInternalFBs[] = {
  {g_nStringIdSub_AlarmDPD, g_nStringIdSub_AlarmDPD},
  {g_nStringIdSub_AlarmKM, g_nStringIdSub_AlarmKM},
  {g_nStringIdSub_AlarmQF, g_nStringIdSub_AlarmQF},
  {g_nStringIdSub_AlarmTK, g_nStringIdSub_AlarmTK}
};


const SCFB_FBConnectionData FORTE_Sub_AlarmsFan::scm_astEventConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdREQ), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSub_AlarmDPD, g_nStringIdREQ), 0},
};

const SCFB_FBNData FORTE_Sub_AlarmsFan::scm_stFBNData = {
  4, scm_astInternalFBs,
  1, scm_astEventConnections,
  0, nullptr,
  0, nullptr,
  0, nullptr,
  0, nullptr
};



