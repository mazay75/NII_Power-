/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: FB_AlgStartStop
 *** Description: Simple FB with one algorithm
 *** Version:
***     1.0: 2024-11-27/sergdebwork -  - 
 *************************************************************************/

#include "FB_AlgStartStop.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "FB_AlgStartStop_gen.cpp"
#endif


DEFINE_FIRMWARE_FB(FORTE_FB_AlgStartStop, g_nStringIdFB_AlgStartStop)

const CStringDictionary::TStringId FORTE_FB_AlgStartStop::scm_anDataInputNames[] = {g_nStringIdxStart, g_nStringIdxStop, g_nStringIdwCmdStartStop, g_nStringIdxAlarm, g_nStringIdxFire, g_nStringIdxAuto, g_nStringIdxRemote, g_nStringIdrBlockStatus, g_nStringIdfBlockStatus};

const CStringDictionary::TStringId FORTE_FB_AlgStartStop::scm_anDataInputTypeIds[] = {g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdWORD, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL};

const CStringDictionary::TStringId FORTE_FB_AlgStartStop::scm_anDataOutputNames[] = {g_nStringIdxWork, g_nStringIdxRemoteStdby, g_nStringIdAuto_local};

const CStringDictionary::TStringId FORTE_FB_AlgStartStop::scm_anDataOutputTypeIds[] = {g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL};

const TDataIOID FORTE_FB_AlgStartStop::scm_anEIWith[] = {5, 3, 6, 4, 0, 1, 2, 7, 8, 255};
const TForteInt16 FORTE_FB_AlgStartStop::scm_anEIWithIndexes[] = {0};
const CStringDictionary::TStringId FORTE_FB_AlgStartStop::scm_anEventInputNames[] = {g_nStringIdREQ};

const TDataIOID FORTE_FB_AlgStartStop::scm_anEOWith[] = {0, 1, 2, 255};
const TForteInt16 FORTE_FB_AlgStartStop::scm_anEOWithIndexes[] = {0};
const CStringDictionary::TStringId FORTE_FB_AlgStartStop::scm_anEventOutputNames[] = {g_nStringIdCNF};


const SFBInterfaceSpec FORTE_FB_AlgStartStop::scm_stFBInterfaceSpec = {
  1, scm_anEventInputNames, scm_anEIWith, scm_anEIWithIndexes,
  1, scm_anEventOutputNames, scm_anEOWith, scm_anEOWithIndexes,
  9, scm_anDataInputNames, scm_anDataInputTypeIds,
  3, scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, nullptr
};

void FORTE_FB_AlgStartStop::setInitialValues() {
}
void FORTE_FB_AlgStartStop::alg_REQ(void) {
  if((((st_xAlarm() == 1) || (st_xFire() == 1)) || (st_xAuto() == 0))) {
  	st_xWork() = 0;
  }
  else if(((st_xAuto() == 1) && (! st_xRemote()))) {
  	st_xWork() = 1;
  	st_Auto_local() = true;
  }
  else if((((st_xAuto() == 1) && st_xRemote()) && (st_Auto_local() == true))) {
  	st_xWork() = false;
  	st_Auto_local() = false;
  }
  else if(((st_xAuto() == 1) && st_xRemote())) {
  	if(((st_xStart() || (st_wCmdStartStop() == 1)) || st_rBlockStatus())) {
  		st_xWork() = 1;
  	}
  	if(((st_xStop() || (st_wCmdStartStop() == 2)) || st_fBlockStatus())) {
  		st_xWork() = 0;
  	}
  }
  if((st_wCmdStartStop() > 3)) {
  	st_wCmdStartStop() = 0;
  }
  if((((st_xAuto() && st_xRemote()) && (! st_xAlarm())) && (! st_xFire()))) {
  	st_xRemoteStdby() = 1;
  }
  else {
  	st_xRemoteStdby() = 0;
  }
}


