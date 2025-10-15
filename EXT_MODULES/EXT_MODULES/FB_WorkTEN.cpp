/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: FB_WorkTEN
 *** Description: Simple FB with one algorithm
 *** Version:
***     1.0: 2025-09-26/SERGSYSTH -  - 
 *************************************************************************/

#include "FB_WorkTEN.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "FB_WorkTEN_gen.cpp"
#endif


DEFINE_FIRMWARE_FB(FORTE_FB_WorkTEN, g_nStringIdFB_WorkTEN)

const CStringDictionary::TStringId FORTE_FB_WorkTEN::scm_anDataInputNames[] = {g_nStringIdxAuto, g_nStringIdxStart, g_nStringIdxStatusDPD, g_nStringIdxStatusKM_Fan, g_nStringIdxStatusDamp, g_nStringIdxStatusQF_TEN, g_nStringIdxStatusTK_TEN, g_nStringIdxAlarmTEN, g_nStringIdrTE_Sup};

const CStringDictionary::TStringId FORTE_FB_WorkTEN::scm_anDataInputTypeIds[] = {g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdREAL};

const CStringDictionary::TStringId FORTE_FB_WorkTEN::scm_anDataOutputNames[] = {g_nStringIdxHeatingBan, g_nStringIdxWork_TEN};

const CStringDictionary::TStringId FORTE_FB_WorkTEN::scm_anDataOutputTypeIds[] = {g_nStringIdBOOL, g_nStringIdBOOL};

const TDataIOID FORTE_FB_WorkTEN::scm_anEIWith[] = {2, 4, 5, 7, 3, 0, 8, 6, 1, 255};
const TForteInt16 FORTE_FB_WorkTEN::scm_anEIWithIndexes[] = {0};
const CStringDictionary::TStringId FORTE_FB_WorkTEN::scm_anEventInputNames[] = {g_nStringIdREQ};

const TDataIOID FORTE_FB_WorkTEN::scm_anEOWith[] = {0, 1, 255};
const TForteInt16 FORTE_FB_WorkTEN::scm_anEOWithIndexes[] = {0};
const CStringDictionary::TStringId FORTE_FB_WorkTEN::scm_anEventOutputNames[] = {g_nStringIdCNF};


const SFBInterfaceSpec FORTE_FB_WorkTEN::scm_stFBInterfaceSpec = {
  1, scm_anEventInputNames, scm_anEIWith, scm_anEIWithIndexes,
  1, scm_anEventOutputNames, scm_anEOWith, scm_anEOWithIndexes,
  9, scm_anDataInputNames, scm_anDataInputTypeIds,
  2, scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, nullptr
};

        const CStringDictionary::TStringId FORTE_FB_WorkTEN::scm_anInternalsNames[] = {g_nStringIdxFlag1, g_nStringIdxFlag2};
        const CStringDictionary::TStringId FORTE_FB_WorkTEN::scm_anInternalsTypeIds[] = {g_nStringIdBOOL, g_nStringIdBOOL};
        const SInternalVarsInformation FORTE_FB_WorkTEN::scm_stInternalVars = {2, scm_anInternalsNames, scm_anInternalsTypeIds};

void FORTE_FB_WorkTEN::setInitialValues() {
}
void FORTE_FB_WorkTEN::alg_REQ(void) {
  st_xFlag1() = (((((((st_xAuto() && st_xStart()) && st_xStatusDPD()) && st_xStatusKM_Fan()) && st_xStatusDamp()) && st_xStatusQF_TEN()) && st_xStatusTK_TEN()) && (! st_xAlarmTEN()));
  st_xFlag2() = (st_rTE_Sup() > 60);
  st_xWork_TEN() = (st_xFlag1() && (! st_xFlag2()));
  st_xHeatingBan() = (! st_xWork_TEN());
  if((! st_xAuto())) {
  	st_xHeatingBan() = 0;
  }
}


