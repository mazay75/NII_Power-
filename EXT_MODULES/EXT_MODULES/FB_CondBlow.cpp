/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: FB_CondBlow
 *** Description: Simple FB with one algorithm
 *** Version:
***     1.0: 2025-10-08/sergdeb -  - 
 *************************************************************************/

#include "FB_CondBlow.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "FB_CondBlow_gen.cpp"
#endif


DEFINE_FIRMWARE_FB(FORTE_FB_CondBlow, g_nStringIdFB_CondBlow)

const CStringDictionary::TStringId FORTE_FB_CondBlow::scm_anDataInputNames[] = {g_nStringIdxAuto, g_nStringIdxFire, g_nStringIdxInFan, g_nStringIdxFanBlow, g_nStringIdxTENonce};

const CStringDictionary::TStringId FORTE_FB_CondBlow::scm_anDataInputTypeIds[] = {g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL};

const CStringDictionary::TStringId FORTE_FB_CondBlow::scm_anDataOutputNames[] = {g_nStringIdxFan, g_nStringIdxBlowing};

const CStringDictionary::TStringId FORTE_FB_CondBlow::scm_anDataOutputTypeIds[] = {g_nStringIdBOOL, g_nStringIdBOOL};

const TDataIOID FORTE_FB_CondBlow::scm_anEIWith[] = {4, 3, 2, 0, 1, 255};
const TForteInt16 FORTE_FB_CondBlow::scm_anEIWithIndexes[] = {0};
const CStringDictionary::TStringId FORTE_FB_CondBlow::scm_anEventInputNames[] = {g_nStringIdREQ};

const TDataIOID FORTE_FB_CondBlow::scm_anEOWith[] = {1, 0, 255};
const TForteInt16 FORTE_FB_CondBlow::scm_anEOWithIndexes[] = {0};
const CStringDictionary::TStringId FORTE_FB_CondBlow::scm_anEventOutputNames[] = {g_nStringIdCNF};


const SFBInterfaceSpec FORTE_FB_CondBlow::scm_stFBInterfaceSpec = {
  1, scm_anEventInputNames, scm_anEIWith, scm_anEIWithIndexes,
  1, scm_anEventOutputNames, scm_anEOWith, scm_anEOWithIndexes,
  5, scm_anDataInputNames, scm_anDataInputTypeIds,
  2, scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, nullptr
};

void FORTE_FB_CondBlow::setInitialValues() {
}
void FORTE_FB_CondBlow::alg_REQ(void) {
  if((st_xInFan() == true)) {
  	st_xBlowing() = false;
  }
  else if((st_xInFan() == false)) {
  	st_xBlowing() = (((st_xFanBlow() && st_xTENonce()) && st_xAuto()) && (! st_xFire()));
  }
  else {
  	st_xBlowing() = false;
  }
  st_xFan() = (st_xBlowing() || st_xInFan());
}


