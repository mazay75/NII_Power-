/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: FB_X1_AND_notX2
 *** Description: Simple FB with one algorithm
 *** Version:
***     1.0: 2024-11-17/sergdebwork -  - 
 *************************************************************************/

#include "FB_X1_AND_notX2.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "FB_X1_AND_notX2_gen.cpp"
#endif


DEFINE_FIRMWARE_FB(FORTE_FB_X1_AND_notX2, g_nStringIdFB_X1_AND_notX2)

const CStringDictionary::TStringId FORTE_FB_X1_AND_notX2::scm_anDataInputNames[] = {g_nStringIdxIn1, g_nStringIdxIn2};

const CStringDictionary::TStringId FORTE_FB_X1_AND_notX2::scm_anDataInputTypeIds[] = {g_nStringIdBOOL, g_nStringIdBOOL};

const CStringDictionary::TStringId FORTE_FB_X1_AND_notX2::scm_anDataOutputNames[] = {g_nStringIdxOut};

const CStringDictionary::TStringId FORTE_FB_X1_AND_notX2::scm_anDataOutputTypeIds[] = {g_nStringIdBOOL};

const TDataIOID FORTE_FB_X1_AND_notX2::scm_anEIWith[] = {0, 1, 255};
const TForteInt16 FORTE_FB_X1_AND_notX2::scm_anEIWithIndexes[] = {0};
const CStringDictionary::TStringId FORTE_FB_X1_AND_notX2::scm_anEventInputNames[] = {g_nStringIdREQ};

const TDataIOID FORTE_FB_X1_AND_notX2::scm_anEOWith[] = {0, 255};
const TForteInt16 FORTE_FB_X1_AND_notX2::scm_anEOWithIndexes[] = {0};
const CStringDictionary::TStringId FORTE_FB_X1_AND_notX2::scm_anEventOutputNames[] = {g_nStringIdCNF};


const SFBInterfaceSpec FORTE_FB_X1_AND_notX2::scm_stFBInterfaceSpec = {
  1, scm_anEventInputNames, scm_anEIWith, scm_anEIWithIndexes,
  1, scm_anEventOutputNames, scm_anEOWith, scm_anEOWithIndexes,
  2, scm_anDataInputNames, scm_anDataInputTypeIds,
  1, scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, nullptr
};

void FORTE_FB_X1_AND_notX2::setInitialValues() {
}
void FORTE_FB_X1_AND_notX2::alg_REQ(void) {
  st_xOut() = (st_xIn1() && (! st_xIn2()));
}


