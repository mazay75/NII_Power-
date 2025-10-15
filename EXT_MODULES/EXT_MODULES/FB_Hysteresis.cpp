/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: FB_Hysteresis
 *** Description: Simple FB with one algorithm
 *** Version:
***     1.0: 2025-03-10/ivan -  - 
 *************************************************************************/

#include "FB_Hysteresis.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "FB_Hysteresis_gen.cpp"
#endif


DEFINE_FIRMWARE_FB(FORTE_FB_Hysteresis, g_nStringIdFB_Hysteresis)

const CStringDictionary::TStringId FORTE_FB_Hysteresis::scm_anDataInputNames[] = {g_nStringIdValue, g_nStringIdVal_OFF, g_nStringIdVal_ON};

const CStringDictionary::TStringId FORTE_FB_Hysteresis::scm_anDataInputTypeIds[] = {g_nStringIdREAL, g_nStringIdREAL, g_nStringIdREAL};

const CStringDictionary::TStringId FORTE_FB_Hysteresis::scm_anDataOutputNames[] = {g_nStringIdQ};

const CStringDictionary::TStringId FORTE_FB_Hysteresis::scm_anDataOutputTypeIds[] = {g_nStringIdBOOL};

const TDataIOID FORTE_FB_Hysteresis::scm_anEIWith[] = {0, 1, 2, 255};
const TForteInt16 FORTE_FB_Hysteresis::scm_anEIWithIndexes[] = {0};
const CStringDictionary::TStringId FORTE_FB_Hysteresis::scm_anEventInputNames[] = {g_nStringIdREQ};

const TDataIOID FORTE_FB_Hysteresis::scm_anEOWith[] = {0, 255};
const TForteInt16 FORTE_FB_Hysteresis::scm_anEOWithIndexes[] = {0};
const CStringDictionary::TStringId FORTE_FB_Hysteresis::scm_anEventOutputNames[] = {g_nStringIdCNF};


const SFBInterfaceSpec FORTE_FB_Hysteresis::scm_stFBInterfaceSpec = {
  1, scm_anEventInputNames, scm_anEIWith, scm_anEIWithIndexes,
  1, scm_anEventOutputNames, scm_anEOWith, scm_anEOWithIndexes,
  3, scm_anDataInputNames, scm_anDataInputTypeIds,
  1, scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, nullptr
};

void FORTE_FB_Hysteresis::setInitialValues() {
}
void FORTE_FB_Hysteresis::alg_REQ(void) {
  if((st_Value() > st_Val_ON())) {
  	st_Q() = true;
  }
  else if((st_Value() <= st_Val_OFF())) {
  	st_Q() = false;
  }
}


