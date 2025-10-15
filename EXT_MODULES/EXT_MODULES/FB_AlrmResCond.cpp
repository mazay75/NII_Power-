/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: FB_AlrmResCond
 *** Description: Simple FB with one algorithm
 *** Version:
***     1.0: 2024-12-02/sergdebwork -  - 
 *************************************************************************/

#include "FB_AlrmResCond.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "FB_AlrmResCond_gen.cpp"
#endif


DEFINE_FIRMWARE_FB(FORTE_FB_AlrmResCond, g_nStringIdFB_AlrmResCond)

const CStringDictionary::TStringId FORTE_FB_AlrmResCond::scm_anDataInputNames[] = {g_nStringIdwAlarmReset};

const CStringDictionary::TStringId FORTE_FB_AlrmResCond::scm_anDataInputTypeIds[] = {g_nStringIdWORD};

const CStringDictionary::TStringId FORTE_FB_AlrmResCond::scm_anDataOutputNames[] = {g_nStringIdxAlarmReset};

const CStringDictionary::TStringId FORTE_FB_AlrmResCond::scm_anDataOutputTypeIds[] = {g_nStringIdBOOL};

const TDataIOID FORTE_FB_AlrmResCond::scm_anEIWith[] = {0, 255};
const TForteInt16 FORTE_FB_AlrmResCond::scm_anEIWithIndexes[] = {0};
const CStringDictionary::TStringId FORTE_FB_AlrmResCond::scm_anEventInputNames[] = {g_nStringIdREQ};

const TDataIOID FORTE_FB_AlrmResCond::scm_anEOWith[] = {0, 255};
const TForteInt16 FORTE_FB_AlrmResCond::scm_anEOWithIndexes[] = {0};
const CStringDictionary::TStringId FORTE_FB_AlrmResCond::scm_anEventOutputNames[] = {g_nStringIdCNF};


const SFBInterfaceSpec FORTE_FB_AlrmResCond::scm_stFBInterfaceSpec = {
  1, scm_anEventInputNames, scm_anEIWith, scm_anEIWithIndexes,
  1, scm_anEventOutputNames, scm_anEOWith, scm_anEOWithIndexes,
  1, scm_anDataInputNames, scm_anDataInputTypeIds,
  1, scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, nullptr
};

void FORTE_FB_AlrmResCond::setInitialValues() {
}
void FORTE_FB_AlrmResCond::alg_REQ(void) {
  if((st_wAlarmReset() == 3)) {
  	st_xAlarmReset() = 1;
  }
  else {
  	st_xAlarmReset() = 0;
  }
}


