/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: FB_BOOL_TO_INT
 *** Description: Simple FB with one algorithm
 *** Version:
***     1.0: 2024-11-29/sergdebwork -  - 
 *************************************************************************/

#include "FB_BOOL_TO_INT.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "FB_BOOL_TO_INT_gen.cpp"
#endif


DEFINE_FIRMWARE_FB(FORTE_FB_BOOL_TO_INT, g_nStringIdFB_BOOL_TO_INT)

const CStringDictionary::TStringId FORTE_FB_BOOL_TO_INT::scm_anDataInputNames[] = {g_nStringIdin};

const CStringDictionary::TStringId FORTE_FB_BOOL_TO_INT::scm_anDataInputTypeIds[] = {g_nStringIdBOOL};

const CStringDictionary::TStringId FORTE_FB_BOOL_TO_INT::scm_anDataOutputNames[] = {g_nStringIdout};

const CStringDictionary::TStringId FORTE_FB_BOOL_TO_INT::scm_anDataOutputTypeIds[] = {g_nStringIdINT};

const TDataIOID FORTE_FB_BOOL_TO_INT::scm_anEIWith[] = {0, 255};
const TForteInt16 FORTE_FB_BOOL_TO_INT::scm_anEIWithIndexes[] = {0};
const CStringDictionary::TStringId FORTE_FB_BOOL_TO_INT::scm_anEventInputNames[] = {g_nStringIdREQ};

const TDataIOID FORTE_FB_BOOL_TO_INT::scm_anEOWith[] = {0, 255};
const TForteInt16 FORTE_FB_BOOL_TO_INT::scm_anEOWithIndexes[] = {0};
const CStringDictionary::TStringId FORTE_FB_BOOL_TO_INT::scm_anEventOutputNames[] = {g_nStringIdCNF};


const SFBInterfaceSpec FORTE_FB_BOOL_TO_INT::scm_stFBInterfaceSpec = {
  1, scm_anEventInputNames, scm_anEIWith, scm_anEIWithIndexes,
  1, scm_anEventOutputNames, scm_anEOWith, scm_anEOWithIndexes,
  1, scm_anDataInputNames, scm_anDataInputTypeIds,
  1, scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, nullptr
};

void FORTE_FB_BOOL_TO_INT::setInitialValues() {
}
void FORTE_FB_BOOL_TO_INT::alg_REQ(void) {
  if((st_in() == true)) {
  	st_out() = 1;
  }
  else {
  	st_out() = 0;
  }
}


