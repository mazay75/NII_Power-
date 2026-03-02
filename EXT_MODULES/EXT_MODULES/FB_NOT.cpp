/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: FB_NOT
 *** Description: Simple FB with one algorithm
 *** Version:
***     1.0: 2024-11-11/sergdebwork -  - 
 *************************************************************************/

#include "FB_NOT.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "FB_NOT_gen.cpp"
#endif


DEFINE_FIRMWARE_FB(FORTE_FB_NOT, g_nStringIdFB_NOT)

const CStringDictionary::TStringId FORTE_FB_NOT::scm_anDataInputNames[] = {g_nStringIdxIn1};

const CStringDictionary::TStringId FORTE_FB_NOT::scm_anDataInputTypeIds[] = {g_nStringIdBOOL};

const CStringDictionary::TStringId FORTE_FB_NOT::scm_anDataOutputNames[] = {g_nStringIdxOut};

const CStringDictionary::TStringId FORTE_FB_NOT::scm_anDataOutputTypeIds[] = {g_nStringIdBOOL};

const TDataIOID FORTE_FB_NOT::scm_anEIWith[] = {0, 255};
const TForteInt16 FORTE_FB_NOT::scm_anEIWithIndexes[] = {0};
const CStringDictionary::TStringId FORTE_FB_NOT::scm_anEventInputNames[] = {g_nStringIdREQ};

const TDataIOID FORTE_FB_NOT::scm_anEOWith[] = {0, 255};
const TForteInt16 FORTE_FB_NOT::scm_anEOWithIndexes[] = {0};
const CStringDictionary::TStringId FORTE_FB_NOT::scm_anEventOutputNames[] = {g_nStringIdCNF};


const SFBInterfaceSpec FORTE_FB_NOT::scm_stFBInterfaceSpec = {
  1, scm_anEventInputNames, scm_anEIWith, scm_anEIWithIndexes,
  1, scm_anEventOutputNames, scm_anEOWith, scm_anEOWithIndexes,
  1, scm_anDataInputNames, scm_anDataInputTypeIds,
  1, scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, nullptr
};

void FORTE_FB_NOT::setInitialValues() {
}
void FORTE_FB_NOT::alg_REQ(void) {
  st_xOut() = (! st_xIn1());
}


