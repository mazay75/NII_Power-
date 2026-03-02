/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: FB_FanOfShield
 *** Description: Simple FB with one algorithm
 *** Version:
***     1.0: 2025-09-21/SERGSYSTH -  - 
 *************************************************************************/

#include "FB_FanOfShield.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "FB_FanOfShield_gen.cpp"
#endif


DEFINE_FIRMWARE_FB(FORTE_FB_FanOfShield, g_nStringIdFB_FanOfShield)

const CStringDictionary::TStringId FORTE_FB_FanOfShield::scm_anDataInputNames[] = {g_nStringIdxAuto, g_nStringIdxTS_Shield};

const CStringDictionary::TStringId FORTE_FB_FanOfShield::scm_anDataInputTypeIds[] = {g_nStringIdBOOL, g_nStringIdBOOL};

const CStringDictionary::TStringId FORTE_FB_FanOfShield::scm_anDataOutputNames[] = {g_nStringIdxFanShield};

const CStringDictionary::TStringId FORTE_FB_FanOfShield::scm_anDataOutputTypeIds[] = {g_nStringIdBOOL};

const TDataIOID FORTE_FB_FanOfShield::scm_anEIWith[] = {0, 1, 255};
const TForteInt16 FORTE_FB_FanOfShield::scm_anEIWithIndexes[] = {0};
const CStringDictionary::TStringId FORTE_FB_FanOfShield::scm_anEventInputNames[] = {g_nStringIdREQ};

const TDataIOID FORTE_FB_FanOfShield::scm_anEOWith[] = {0, 255};
const TForteInt16 FORTE_FB_FanOfShield::scm_anEOWithIndexes[] = {0};
const CStringDictionary::TStringId FORTE_FB_FanOfShield::scm_anEventOutputNames[] = {g_nStringIdCNF};


const SFBInterfaceSpec FORTE_FB_FanOfShield::scm_stFBInterfaceSpec = {
  1, scm_anEventInputNames, scm_anEIWith, scm_anEIWithIndexes,
  1, scm_anEventOutputNames, scm_anEOWith, scm_anEOWithIndexes,
  2, scm_anDataInputNames, scm_anDataInputTypeIds,
  1, scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, nullptr
};

        const CStringDictionary::TStringId FORTE_FB_FanOfShield::scm_anInternalsNames[] = {g_nStringIdINTERNALVAR1};
        const CStringDictionary::TStringId FORTE_FB_FanOfShield::scm_anInternalsTypeIds[] = {g_nStringIdBOOL};
        const SInternalVarsInformation FORTE_FB_FanOfShield::scm_stInternalVars = {1, scm_anInternalsNames, scm_anInternalsTypeIds};

void FORTE_FB_FanOfShield::setInitialValues() {
}
void FORTE_FB_FanOfShield::alg_REQ(void) {
  st_xFanShield() = (st_xAuto() && st_xTS_Shield());
}


