/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: FB_cManModPID_TEN
 *** Description: Simple FB with one algorithm
 *** Version:
***     1.0: 2025-10-02/sergdeb -  - 
 *************************************************************************/

#include "FB_cManModPID_TEN.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "FB_cManModPID_TEN_gen.cpp"
#endif


DEFINE_FIRMWARE_FB(FORTE_FB_cManModPID_TEN, g_nStringIdFB_cManModPID_TEN)

const CStringDictionary::TStringId FORTE_FB_cManModPID_TEN::scm_anDataInputNames[] = {g_nStringIdxStart, g_nStringIdxAlarmTEN, g_nStringIdxInitialize, g_nStringIdYout};

const CStringDictionary::TStringId FORTE_FB_cManModPID_TEN::scm_anDataInputTypeIds[] = {g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdREAL};

const CStringDictionary::TStringId FORTE_FB_cManModPID_TEN::scm_anDataOutputNames[] = {g_nStringIdrManVal, g_nStringIdManMod, g_nStringIdNotManMod};

const CStringDictionary::TStringId FORTE_FB_cManModPID_TEN::scm_anDataOutputTypeIds[] = {g_nStringIdREAL, g_nStringIdBOOL, g_nStringIdBOOL};

const TDataIOID FORTE_FB_cManModPID_TEN::scm_anEIWith[] = {0, 1, 2, 3, 255};
const TForteInt16 FORTE_FB_cManModPID_TEN::scm_anEIWithIndexes[] = {0};
const CStringDictionary::TStringId FORTE_FB_cManModPID_TEN::scm_anEventInputNames[] = {g_nStringIdREQ};

const TDataIOID FORTE_FB_cManModPID_TEN::scm_anEOWith[] = {0, 1, 2, 255};
const TForteInt16 FORTE_FB_cManModPID_TEN::scm_anEOWithIndexes[] = {0};
const CStringDictionary::TStringId FORTE_FB_cManModPID_TEN::scm_anEventOutputNames[] = {g_nStringIdCNF};


const SFBInterfaceSpec FORTE_FB_cManModPID_TEN::scm_stFBInterfaceSpec = {
  1, scm_anEventInputNames, scm_anEIWith, scm_anEIWithIndexes,
  1, scm_anEventOutputNames, scm_anEOWith, scm_anEOWithIndexes,
  4, scm_anDataInputNames, scm_anDataInputTypeIds,
  3, scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, nullptr
};

void FORTE_FB_cManModPID_TEN::setInitialValues() {
}
void FORTE_FB_cManModPID_TEN::alg_REQ(void) {
  if(st_xAlarmTEN()) {
  	st_rManVal() = 0;
  	st_ManMod() = 1;
  }
  else if((! st_xStart())) {
  	st_rManVal() = 0;
  	st_ManMod() = 1;
  }
  else {
  	st_ManMod() = 0;
  	st_rManVal() = 0;
  }
  if((st_xInitialize() == 1)) {
  	st_ManMod() = 1;
  	st_rManVal() = st_Yout();
  }
  st_NotManMod() = (! st_ManMod());
}


