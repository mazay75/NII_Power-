/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: FB_And
 *** Description: Simple FB with one algorithm
 *** Version:
***     1.0: 2024-11-11/sergdebwork -  - 
 *************************************************************************/

#include "FB_And.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "FB_And_gen.cpp"
#endif


DEFINE_FIRMWARE_FB(FORTE_FB_And, g_nStringIdFB_And)

const CStringDictionary::TStringId FORTE_FB_And::scm_anDataInputNames[] = {g_nStringIdxIn1, g_nStringIdxIn2};

const CStringDictionary::TStringId FORTE_FB_And::scm_anDataInputTypeIds[] = {g_nStringIdBOOL, g_nStringIdBOOL};

const CStringDictionary::TStringId FORTE_FB_And::scm_anDataOutputNames[] = {g_nStringIdxOut};

const CStringDictionary::TStringId FORTE_FB_And::scm_anDataOutputTypeIds[] = {g_nStringIdBOOL};

const TDataIOID FORTE_FB_And::scm_anEIWith[] = {0, 1, 255};
const TForteInt16 FORTE_FB_And::scm_anEIWithIndexes[] = {0};
const CStringDictionary::TStringId FORTE_FB_And::scm_anEventInputNames[] = {g_nStringIdREQ};

const TDataIOID FORTE_FB_And::scm_anEOWith[] = {0, 255};
const TForteInt16 FORTE_FB_And::scm_anEOWithIndexes[] = {0};
const CStringDictionary::TStringId FORTE_FB_And::scm_anEventOutputNames[] = {g_nStringIdCNF};


const SFBInterfaceSpec FORTE_FB_And::scm_stFBInterfaceSpec = {
  1, scm_anEventInputNames, scm_anEIWith, scm_anEIWithIndexes,
  1, scm_anEventOutputNames, scm_anEOWith, scm_anEOWithIndexes,
  2, scm_anDataInputNames, scm_anDataInputTypeIds,
  1, scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, nullptr
};

void FORTE_FB_And::setInitialValues() {
}
void FORTE_FB_And::alg_REQ(void) {
  st_xOut() = (st_xIn1() && st_xIn2());
}


