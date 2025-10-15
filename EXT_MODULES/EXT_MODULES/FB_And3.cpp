/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: FB_And3
 *** Description: Simple FB with one algorithm
 *** Version:
***     1.0: 2024-11-11/sergdebwork -  - 
 *************************************************************************/

#include "FB_And3.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "FB_And3_gen.cpp"
#endif


DEFINE_FIRMWARE_FB(FORTE_FB_And3, g_nStringIdFB_And3)

const CStringDictionary::TStringId FORTE_FB_And3::scm_anDataInputNames[] = {g_nStringIdxIn1, g_nStringIdxIn2, g_nStringIdxIn3};

const CStringDictionary::TStringId FORTE_FB_And3::scm_anDataInputTypeIds[] = {g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL};

const CStringDictionary::TStringId FORTE_FB_And3::scm_anDataOutputNames[] = {g_nStringIdxOut};

const CStringDictionary::TStringId FORTE_FB_And3::scm_anDataOutputTypeIds[] = {g_nStringIdBOOL};

const TDataIOID FORTE_FB_And3::scm_anEIWith[] = {0, 1, 2, 255};
const TForteInt16 FORTE_FB_And3::scm_anEIWithIndexes[] = {0};
const CStringDictionary::TStringId FORTE_FB_And3::scm_anEventInputNames[] = {g_nStringIdREQ};

const TDataIOID FORTE_FB_And3::scm_anEOWith[] = {0, 255};
const TForteInt16 FORTE_FB_And3::scm_anEOWithIndexes[] = {0};
const CStringDictionary::TStringId FORTE_FB_And3::scm_anEventOutputNames[] = {g_nStringIdCNF};


const SFBInterfaceSpec FORTE_FB_And3::scm_stFBInterfaceSpec = {
  1, scm_anEventInputNames, scm_anEIWith, scm_anEIWithIndexes,
  1, scm_anEventOutputNames, scm_anEOWith, scm_anEOWithIndexes,
  3, scm_anDataInputNames, scm_anDataInputTypeIds,
  1, scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, nullptr
};

void FORTE_FB_And3::setInitialValues() {
}
void FORTE_FB_And3::alg_REQ(void) {
  st_xOut() = ((st_xIn1() && st_xIn2()) && st_xIn3());
}


