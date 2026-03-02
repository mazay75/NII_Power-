/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: FB_INT_TO_BOOL
 *** Description: Simple FB with one algorithm
 *** Version:
***     1.0: 2024-11-29/sergdebwork -  - 
 *************************************************************************/

#include "FB_INT_TO_BOOL.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "FB_INT_TO_BOOL_gen.cpp"
#endif


DEFINE_FIRMWARE_FB(FORTE_FB_INT_TO_BOOL, g_nStringIdFB_INT_TO_BOOL)

const CStringDictionary::TStringId FORTE_FB_INT_TO_BOOL::scm_anDataInputNames[] = {g_nStringIdin};

const CStringDictionary::TStringId FORTE_FB_INT_TO_BOOL::scm_anDataInputTypeIds[] = {g_nStringIdINT};

const CStringDictionary::TStringId FORTE_FB_INT_TO_BOOL::scm_anDataOutputNames[] = {g_nStringIdout};

const CStringDictionary::TStringId FORTE_FB_INT_TO_BOOL::scm_anDataOutputTypeIds[] = {g_nStringIdBOOL};

const TDataIOID FORTE_FB_INT_TO_BOOL::scm_anEIWith[] = {0, 255};
const TForteInt16 FORTE_FB_INT_TO_BOOL::scm_anEIWithIndexes[] = {0};
const CStringDictionary::TStringId FORTE_FB_INT_TO_BOOL::scm_anEventInputNames[] = {g_nStringIdREQ};

const TDataIOID FORTE_FB_INT_TO_BOOL::scm_anEOWith[] = {0, 255};
const TForteInt16 FORTE_FB_INT_TO_BOOL::scm_anEOWithIndexes[] = {0};
const CStringDictionary::TStringId FORTE_FB_INT_TO_BOOL::scm_anEventOutputNames[] = {g_nStringIdCNF};


const SFBInterfaceSpec FORTE_FB_INT_TO_BOOL::scm_stFBInterfaceSpec = {
  1, scm_anEventInputNames, scm_anEIWith, scm_anEIWithIndexes,
  1, scm_anEventOutputNames, scm_anEOWith, scm_anEOWithIndexes,
  1, scm_anDataInputNames, scm_anDataInputTypeIds,
  1, scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, nullptr
};

void FORTE_FB_INT_TO_BOOL::setInitialValues() {
}
void FORTE_FB_INT_TO_BOOL::alg_REQ(void) {
  if((st_in() == 0)) {
  	st_out() = 0;
  }
  else {
  	st_out() = 1;
  }
}


