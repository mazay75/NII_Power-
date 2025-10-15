/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: FB_REAL_DIV
 *** Description: Simple FB with one algorithm
 *** Version:
***     1.0: 2024-11-11/sergdebwork -  - 
 *************************************************************************/

#include "FB_REAL_DIV.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "FB_REAL_DIV_gen.cpp"
#endif


DEFINE_FIRMWARE_FB(FORTE_FB_REAL_DIV, g_nStringIdFB_REAL_DIV)

const CStringDictionary::TStringId FORTE_FB_REAL_DIV::scm_anDataInputNames[] = {g_nStringIdrIn1, g_nStringIdrDiv};

const CStringDictionary::TStringId FORTE_FB_REAL_DIV::scm_anDataInputTypeIds[] = {g_nStringIdREAL, g_nStringIdREAL};

const CStringDictionary::TStringId FORTE_FB_REAL_DIV::scm_anDataOutputNames[] = {g_nStringIdrOut};

const CStringDictionary::TStringId FORTE_FB_REAL_DIV::scm_anDataOutputTypeIds[] = {g_nStringIdREAL};

const TDataIOID FORTE_FB_REAL_DIV::scm_anEIWith[] = {0, 255};
const TForteInt16 FORTE_FB_REAL_DIV::scm_anEIWithIndexes[] = {0};
const CStringDictionary::TStringId FORTE_FB_REAL_DIV::scm_anEventInputNames[] = {g_nStringIdREQ};

const TDataIOID FORTE_FB_REAL_DIV::scm_anEOWith[] = {0, 255};
const TForteInt16 FORTE_FB_REAL_DIV::scm_anEOWithIndexes[] = {0};
const CStringDictionary::TStringId FORTE_FB_REAL_DIV::scm_anEventOutputNames[] = {g_nStringIdCNF};


const SFBInterfaceSpec FORTE_FB_REAL_DIV::scm_stFBInterfaceSpec = {
  1, scm_anEventInputNames, scm_anEIWith, scm_anEIWithIndexes,
  1, scm_anEventOutputNames, scm_anEOWith, scm_anEOWithIndexes,
  2, scm_anDataInputNames, scm_anDataInputTypeIds,
  1, scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, nullptr
};

void FORTE_FB_REAL_DIV::setInitialValues() {
}
void FORTE_FB_REAL_DIV::alg_REQ(void) {
  st_rOut() = DIV(st_rIn1(), st_rDiv());
}


