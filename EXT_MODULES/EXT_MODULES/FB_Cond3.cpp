/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: FB_Cond3
 *** Description: Simple FB with one algorithm
 *** Version:
***     1.0: 2025-09-27/sergdeb -  - 
 *************************************************************************/

#include "FB_Cond3.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "FB_Cond3_gen.cpp"
#endif


DEFINE_FIRMWARE_FB(FORTE_FB_Cond3, g_nStringIdFB_Cond3)

const CStringDictionary::TStringId FORTE_FB_Cond3::scm_anDataInputNames[] = {g_nStringIdxStart, g_nStringIdrTsup, g_nStringIdSP_Tsup, g_nStringIdSP_dT};

const CStringDictionary::TStringId FORTE_FB_Cond3::scm_anDataInputTypeIds[] = {g_nStringIdBOOL, g_nStringIdREAL, g_nStringIdREAL, g_nStringIdUINT};

const CStringDictionary::TStringId FORTE_FB_Cond3::scm_anDataOutputNames[] = {g_nStringIdxStatusCond3, g_nStringIdxStage2, g_nStringIdSTATE};

const CStringDictionary::TStringId FORTE_FB_Cond3::scm_anDataOutputTypeIds[] = {g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdINT};

const TDataIOID FORTE_FB_Cond3::scm_anEIWith[] = {1, 2, 3, 0, 255};
const TForteInt16 FORTE_FB_Cond3::scm_anEIWithIndexes[] = {0};
const CStringDictionary::TStringId FORTE_FB_Cond3::scm_anEventInputNames[] = {g_nStringIdREQ};

const TDataIOID FORTE_FB_Cond3::scm_anEOWith[] = {1, 2, 0, 255};
const TForteInt16 FORTE_FB_Cond3::scm_anEOWithIndexes[] = {0};
const CStringDictionary::TStringId FORTE_FB_Cond3::scm_anEventOutputNames[] = {g_nStringIdCNF};


const SFBInterfaceSpec FORTE_FB_Cond3::scm_stFBInterfaceSpec = {
  1, scm_anEventInputNames, scm_anEIWith, scm_anEIWithIndexes,
  1, scm_anEventOutputNames, scm_anEOWith, scm_anEOWithIndexes,
  4, scm_anDataInputNames, scm_anDataInputTypeIds,
  3, scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, nullptr
};

        const CStringDictionary::TStringId FORTE_FB_Cond3::scm_anInternalsNames[] = {g_nStringIdStateBlock};
        const CStringDictionary::TStringId FORTE_FB_Cond3::scm_anInternalsTypeIds[] = {g_nStringIdINT};
        const SInternalVarsInformation FORTE_FB_Cond3::scm_stInternalVars = {1, scm_anInternalsNames, scm_anInternalsTypeIds};

void FORTE_FB_Cond3::setInitialValues() {
}
void FORTE_FB_Cond3::alg_REQ(void) {
  if(((st_rTsup() > 45.0) || (st_xStart() == 0))) {
  	st_StateBlock() = 3;
  }
  else {
  	if((st_rTsup() > ADD(st_SP_Tsup(), st_SP_dT()))) {
  		st_StateBlock() = 2;
  	}
  	else if(((st_xStart() == 1) && (st_rTsup() < SUB(st_SP_Tsup(), st_SP_dT())))) {
  		st_StateBlock() = 1;
  	}
  }
  switch (st_StateBlock()) {
  	case 1:
  		st_xStage2() = 1;
  		st_xStatusCond3() = 1;
  		break;
  	case 2:
  		st_xStage2() = 0;
  		st_xStatusCond3() = 1;
  		break;
  	case 3:
  		st_xStage2() = 0;
  		st_xStatusCond3() = 0;
  		break;
  }
  st_STATE() = st_StateBlock();
}


