/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: FB_AND7
 *** Description: Simple FB with one algorithm
 *** Version:
***     1.0: 2024-10-24/sergdebwork -  - 
 *************************************************************************/

#include "FB_AND7.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "FB_AND7_gen.cpp"
#endif


DEFINE_FIRMWARE_FB(FORTE_FB_AND7, g_nStringIdFB_AND7)

const CStringDictionary::TStringId FORTE_FB_AND7::scm_anDataInputNames[] = {g_nStringIdIn1, g_nStringIdIn2, g_nStringIdIn3, g_nStringIdIn4, g_nStringIdIn5, g_nStringIdIn6, g_nStringIdIn7};

const CStringDictionary::TStringId FORTE_FB_AND7::scm_anDataInputTypeIds[] = {g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL};

const CStringDictionary::TStringId FORTE_FB_AND7::scm_anDataOutputNames[] = {g_nStringIdOut1};

const CStringDictionary::TStringId FORTE_FB_AND7::scm_anDataOutputTypeIds[] = {g_nStringIdBOOL};

const TDataIOID FORTE_FB_AND7::scm_anEIWith[] = {0, 1, 2, 3, 4, 5, 6, 255};
const TForteInt16 FORTE_FB_AND7::scm_anEIWithIndexes[] = {0};
const CStringDictionary::TStringId FORTE_FB_AND7::scm_anEventInputNames[] = {g_nStringIdREQ};

const TDataIOID FORTE_FB_AND7::scm_anEOWith[] = {0, 255};
const TForteInt16 FORTE_FB_AND7::scm_anEOWithIndexes[] = {0};
const CStringDictionary::TStringId FORTE_FB_AND7::scm_anEventOutputNames[] = {g_nStringIdCNF};


const SFBInterfaceSpec FORTE_FB_AND7::scm_stFBInterfaceSpec = {
  1, scm_anEventInputNames, scm_anEIWith, scm_anEIWithIndexes,
  1, scm_anEventOutputNames, scm_anEOWith, scm_anEOWithIndexes,
  7, scm_anDataInputNames, scm_anDataInputTypeIds,
  1, scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, nullptr
};

void FORTE_FB_AND7::setInitialValues() {
}
void FORTE_FB_AND7::alg_REQ(void) {
  st_Out1() = ((((((st_In1() && st_In2()) && st_In3()) && st_In4()) && st_In5()) && st_In6()) && st_In7());
}


