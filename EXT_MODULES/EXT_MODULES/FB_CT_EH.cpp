/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: FB_CT_EH
 *** Description: Simple FB with one algorithm
 *** Version:
***     1.0: 2024-11-29/sergdebwork -  - 
 *************************************************************************/

#include "FB_CT_EH.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "FB_CT_EH_gen.cpp"
#endif


DEFINE_FIRMWARE_FB(FORTE_FB_CT_EH, g_nStringIdFB_CT_EH)

const CStringDictionary::TStringId FORTE_FB_CT_EH::scm_anDataInputNames[] = {g_nStringIdinCT, g_nStringIdinitVal, g_nStringIdReSet};

const CStringDictionary::TStringId FORTE_FB_CT_EH::scm_anDataInputTypeIds[] = {g_nStringIdBOOL, g_nStringIdUDINT, g_nStringIdBOOL};

const CStringDictionary::TStringId FORTE_FB_CT_EH::scm_anDataOutputNames[] = {g_nStringIdoutEH, g_nStringIdclk};

const CStringDictionary::TStringId FORTE_FB_CT_EH::scm_anDataOutputTypeIds[] = {g_nStringIdUDINT, g_nStringIdBOOL};

const TDataIOID FORTE_FB_CT_EH::scm_anEIWith[] = {0, 1, 2, 255};
const TForteInt16 FORTE_FB_CT_EH::scm_anEIWithIndexes[] = {0};
const CStringDictionary::TStringId FORTE_FB_CT_EH::scm_anEventInputNames[] = {g_nStringIdREQ};

const TDataIOID FORTE_FB_CT_EH::scm_anEOWith[] = {0, 1, 255};
const TForteInt16 FORTE_FB_CT_EH::scm_anEOWithIndexes[] = {0};
const CStringDictionary::TStringId FORTE_FB_CT_EH::scm_anEventOutputNames[] = {g_nStringIdCNF};


const SFBInterfaceSpec FORTE_FB_CT_EH::scm_stFBInterfaceSpec = {
  1, scm_anEventInputNames, scm_anEIWith, scm_anEIWithIndexes,
  1, scm_anEventOutputNames, scm_anEOWith, scm_anEOWithIndexes,
  3, scm_anDataInputNames, scm_anDataInputTypeIds,
  2, scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, nullptr
};

        const CStringDictionary::TStringId FORTE_FB_CT_EH::scm_anInternalsNames[] = {g_nStringIdzero, g_nStringIdone, g_nStringIdFIRST, g_nStringIdflag};
        const CStringDictionary::TStringId FORTE_FB_CT_EH::scm_anInternalsTypeIds[] = {g_nStringIdUDINT, g_nStringIdUDINT, g_nStringIdBOOL, g_nStringIdBOOL};
        const SInternalVarsInformation FORTE_FB_CT_EH::scm_stInternalVars = {4, scm_anInternalsNames, scm_anInternalsTypeIds};

void FORTE_FB_CT_EH::setInitialValues() {
  st_zero() = 0;
  st_one() = 1;
  st_FIRST() = true;
  st_flag() = false;
}
void FORTE_FB_CT_EH::alg_REQ(void) {
  if((st_FIRST() == true)) {
  	st_outEH() = st_initVal();
  	st_FIRST() = false;
  }
  else {
  	if(((st_flag() == false) && (st_inCT() == true))) {
  		st_outEH() = ADD(st_outEH(), st_one());
  		st_clk() = true;
  		st_flag() = true;
  	}
  	else {
  		st_flag() = false;
  		st_clk() = false;
  	}
  	if((st_ReSet() == true)) {
  		st_outEH() = st_zero();
  		st_clk() = true;
  	}
  }
}


