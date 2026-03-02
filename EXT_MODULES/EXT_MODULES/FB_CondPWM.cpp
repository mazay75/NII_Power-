/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: FB_CondPWM
 *** Description: Simple FB with one algorithm
 *** Version:
***     1.0: 2025-10-03/sergdeb -  - 
 *************************************************************************/

#include "FB_CondPWM.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "FB_CondPWM_gen.cpp"
#endif


DEFINE_FIRMWARE_FB(FORTE_FB_CondPWM, g_nStringIdFB_CondPWM)

const CStringDictionary::TStringId FORTE_FB_CondPWM::scm_anDataInputNames[] = {g_nStringIdxStart, g_nStringIdrY, g_nStringIdSP_Tp};

const CStringDictionary::TStringId FORTE_FB_CondPWM::scm_anDataInputTypeIds[] = {g_nStringIdBOOL, g_nStringIdREAL, g_nStringIdUINT};

const CStringDictionary::TStringId FORTE_FB_CondPWM::scm_anDataOutputNames[] = {g_nStringIdrYout, g_nStringIdiTimeYout, g_nStringIdxYnol, g_nStringIdxFull, g_nStringIdSTAGE};

const CStringDictionary::TStringId FORTE_FB_CondPWM::scm_anDataOutputTypeIds[] = {g_nStringIdREAL, g_nStringIdUINT, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdUINT};

const TDataIOID FORTE_FB_CondPWM::scm_anEIWith[] = {0, 1, 2, 255};
const TForteInt16 FORTE_FB_CondPWM::scm_anEIWithIndexes[] = {0};
const CStringDictionary::TStringId FORTE_FB_CondPWM::scm_anEventInputNames[] = {g_nStringIdREQ};

const TDataIOID FORTE_FB_CondPWM::scm_anEOWith[] = {0, 4, 1, 2, 3, 255};
const TForteInt16 FORTE_FB_CondPWM::scm_anEOWithIndexes[] = {0};
const CStringDictionary::TStringId FORTE_FB_CondPWM::scm_anEventOutputNames[] = {g_nStringIdCNF};


const SFBInterfaceSpec FORTE_FB_CondPWM::scm_stFBInterfaceSpec = {
  1, scm_anEventInputNames, scm_anEIWith, scm_anEIWithIndexes,
  1, scm_anEventOutputNames, scm_anEOWith, scm_anEOWithIndexes,
  3, scm_anDataInputNames, scm_anDataInputTypeIds,
  5, scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, nullptr
};

        const CStringDictionary::TStringId FORTE_FB_CondPWM::scm_anInternalsNames[] = {g_nStringIdStage, g_nStringIdiY, g_nStringIdrTimeYout, g_nStringIdiTimeYout1, g_nStringIdrSP_Tp};
        const CStringDictionary::TStringId FORTE_FB_CondPWM::scm_anInternalsTypeIds[] = {g_nStringIdUINT, g_nStringIdUINT, g_nStringIdREAL, g_nStringIdINT, g_nStringIdREAL};
        const SInternalVarsInformation FORTE_FB_CondPWM::scm_stInternalVars = {5, scm_anInternalsNames, scm_anInternalsTypeIds};

void FORTE_FB_CondPWM::setInitialValues() {
}
void FORTE_FB_CondPWM::alg_REQ(void) {
  if((((! st_xStart()) || (st_rY() < 0)) || (st_SP_Tp() <= 0))) {
  	st_STAGE() = 1;
  }
  else if((st_xStart() && (st_rY() >= 100))) {
  	st_STAGE() = 2;
  }
  else if(((st_xStart() && (st_rY() >= 0)) && (st_rY() < 100))) {
  	st_STAGE() = 3;
  }
  switch (st_STAGE()) {
  	case 1:
  		st_rYout() = 0;
  		st_xYnol() = false;
  		st_xFull() = false;
  		break;
  	case 2:
  		st_rYout() = 100.0;
  		st_xYnol() = true;
  		st_xFull() = true;
  		break;
  	case 3:
  		st_rYout() = st_rY();
  		st_xYnol() = true;
  		st_xFull() = false;
  		break;
  	default:
  		st_rYout() = 0;
  		st_xYnol() = false;
  		st_xFull() = false;
  		break;
  }
  st_STAGE() = st_STAGE();
  st_rSP_Tp() = UINT_TO_REAL(st_SP_Tp());
  if((st_rYout() != 0)) {
  	st_rTimeYout() = DIV(MUL(st_rSP_Tp(), st_rYout()), 100.0);
  }
  else {
  	st_rTimeYout() = 0;
  	st_xYnol() = false;
  }
  st_iTimeYout() = REAL_TO_UINT(st_rTimeYout());
}


