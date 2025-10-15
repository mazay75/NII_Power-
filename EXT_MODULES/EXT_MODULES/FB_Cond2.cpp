/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: FB_Cond2
 *** Description: Simple FB with one algorithm
 *** Version:
***     1.0: 2025-09-27/sergdeb -  - 
 *************************************************************************/

#include "FB_Cond2.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "FB_Cond2_gen.cpp"
#endif


DEFINE_FIRMWARE_FB(FORTE_FB_Cond2, g_nStringIdFB_Cond2)

const CStringDictionary::TStringId FORTE_FB_Cond2::scm_anDataInputNames[] = {g_nStringIdxStart, g_nStringIdrTsup, g_nStringIdSP_Tsup, g_nStringIdSP_dT};

const CStringDictionary::TStringId FORTE_FB_Cond2::scm_anDataInputTypeIds[] = {g_nStringIdBOOL, g_nStringIdREAL, g_nStringIdREAL, g_nStringIdUINT};

const CStringDictionary::TStringId FORTE_FB_Cond2::scm_anDataOutputNames[] = {g_nStringIdxStatusCond2, g_nStringIdxStage1};

const CStringDictionary::TStringId FORTE_FB_Cond2::scm_anDataOutputTypeIds[] = {g_nStringIdBOOL, g_nStringIdBOOL};

const TDataIOID FORTE_FB_Cond2::scm_anEIWith[] = {1, 2, 3, 0, 255};
const TForteInt16 FORTE_FB_Cond2::scm_anEIWithIndexes[] = {0};
const CStringDictionary::TStringId FORTE_FB_Cond2::scm_anEventInputNames[] = {g_nStringIdREQ};

const TDataIOID FORTE_FB_Cond2::scm_anEOWith[] = {1, 0, 255};
const TForteInt16 FORTE_FB_Cond2::scm_anEOWithIndexes[] = {0};
const CStringDictionary::TStringId FORTE_FB_Cond2::scm_anEventOutputNames[] = {g_nStringIdCNF};


const SFBInterfaceSpec FORTE_FB_Cond2::scm_stFBInterfaceSpec = {
  1, scm_anEventInputNames, scm_anEIWith, scm_anEIWithIndexes,
  1, scm_anEventOutputNames, scm_anEOWith, scm_anEOWithIndexes,
  4, scm_anDataInputNames, scm_anDataInputTypeIds,
  2, scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, nullptr
};

        const CStringDictionary::TStringId FORTE_FB_Cond2::scm_anInternalsNames[] = {g_nStringIdStateBlock};
        const CStringDictionary::TStringId FORTE_FB_Cond2::scm_anInternalsTypeIds[] = {g_nStringIdINT};
        const SInternalVarsInformation FORTE_FB_Cond2::scm_stInternalVars = {1, scm_anInternalsNames, scm_anInternalsTypeIds};

void FORTE_FB_Cond2::setInitialValues() {
}
void FORTE_FB_Cond2::alg_REQ(void) {
  if((st_xStart() && (st_rTsup() < SUB(st_SP_Tsup(), st_SP_dT())))) {
  	st_xStatusCond2() = 1;
  	st_xStage1() = 1;
  }
  else {
  	st_xStatusCond2() = 0;
  	st_xStage1() = 0;
  }
}


