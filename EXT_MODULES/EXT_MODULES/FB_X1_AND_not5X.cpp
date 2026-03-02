/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: FB_X1_AND_not5X
 *** Description: Simple FB with one algorithm
 *** Version:
***     1.0: 2024-11-17/sergdebwork -  - 
 *************************************************************************/

#include "FB_X1_AND_not5X.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "FB_X1_AND_not5X_gen.cpp"
#endif


DEFINE_FIRMWARE_FB(FORTE_FB_X1_AND_not5X, g_nStringIdFB_X1_AND_not5X)

const CStringDictionary::TStringId FORTE_FB_X1_AND_not5X::scm_anDataInputNames[] = {g_nStringIdxIn1, g_nStringIdxIn2N, g_nStringIdxIn3N, g_nStringIdxIn4N, g_nStringIdxIn5N, g_nStringIdxIn6N};

const CStringDictionary::TStringId FORTE_FB_X1_AND_not5X::scm_anDataInputTypeIds[] = {g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL};

const CStringDictionary::TStringId FORTE_FB_X1_AND_not5X::scm_anDataOutputNames[] = {g_nStringIdxOut};

const CStringDictionary::TStringId FORTE_FB_X1_AND_not5X::scm_anDataOutputTypeIds[] = {g_nStringIdBOOL};

const TDataIOID FORTE_FB_X1_AND_not5X::scm_anEIWith[] = {0, 1, 2, 3, 4, 5, 255};
const TForteInt16 FORTE_FB_X1_AND_not5X::scm_anEIWithIndexes[] = {0};
const CStringDictionary::TStringId FORTE_FB_X1_AND_not5X::scm_anEventInputNames[] = {g_nStringIdREQ};

const TDataIOID FORTE_FB_X1_AND_not5X::scm_anEOWith[] = {0, 255};
const TForteInt16 FORTE_FB_X1_AND_not5X::scm_anEOWithIndexes[] = {0};
const CStringDictionary::TStringId FORTE_FB_X1_AND_not5X::scm_anEventOutputNames[] = {g_nStringIdCNF};


const SFBInterfaceSpec FORTE_FB_X1_AND_not5X::scm_stFBInterfaceSpec = {
  1, scm_anEventInputNames, scm_anEIWith, scm_anEIWithIndexes,
  1, scm_anEventOutputNames, scm_anEOWith, scm_anEOWithIndexes,
  6, scm_anDataInputNames, scm_anDataInputTypeIds,
  1, scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, nullptr
};

void FORTE_FB_X1_AND_not5X::setInitialValues() {
}
void FORTE_FB_X1_AND_not5X::alg_REQ(void) {
  st_xOut() = (((((st_xIn1() && (! st_xIn2N())) && (! st_xIn3N())) && (! st_xIn4N())) && (! st_xIn5N())) && (! st_xIn6N()));
}


