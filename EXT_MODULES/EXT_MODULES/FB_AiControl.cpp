/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: FB_AiControl
 *** Description: Simple FB with one algorithm
 *** Version:
***     1.0: 2025-03-14/ivan -  - 
 *************************************************************************/

#include "FB_AiControl.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "FB_AiControl_gen.cpp"
#endif

#include "forte_real.h"
#include "forte_array_at.h"

DEFINE_FIRMWARE_FB(FORTE_FB_AiControl, g_nStringIdFB_AiControl)

const CStringDictionary::TStringId FORTE_FB_AiControl::scm_anDataInputNames[] = {g_nStringIdValue, g_nStringIdmax, g_nStringIdmin, g_nStringIddiv};

const CStringDictionary::TStringId FORTE_FB_AiControl::scm_anDataInputTypeIds[] = {g_nStringIdREAL, g_nStringIdREAL, g_nStringIdREAL, g_nStringIdREAL};

const CStringDictionary::TStringId FORTE_FB_AiControl::scm_anDataOutputNames[] = {g_nStringIdOutValue, g_nStringIdAlarm};

const CStringDictionary::TStringId FORTE_FB_AiControl::scm_anDataOutputTypeIds[] = {g_nStringIdREAL, g_nStringIdBOOL};

const TDataIOID FORTE_FB_AiControl::scm_anEIWith[] = {0, 1, 2, 3, 255};
const TForteInt16 FORTE_FB_AiControl::scm_anEIWithIndexes[] = {0};
const CStringDictionary::TStringId FORTE_FB_AiControl::scm_anEventInputNames[] = {g_nStringIdREQ};

const TDataIOID FORTE_FB_AiControl::scm_anEOWith[] = {0, 1, 255};
const TForteInt16 FORTE_FB_AiControl::scm_anEOWithIndexes[] = {0};
const CStringDictionary::TStringId FORTE_FB_AiControl::scm_anEventOutputNames[] = {g_nStringIdCNF};


const SFBInterfaceSpec FORTE_FB_AiControl::scm_stFBInterfaceSpec = {
  1, scm_anEventInputNames, scm_anEIWith, scm_anEIWithIndexes,
  1, scm_anEventOutputNames, scm_anEOWith, scm_anEOWithIndexes,
  4, scm_anDataInputNames, scm_anDataInputTypeIds,
  2, scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, nullptr
};

void FORTE_FB_AiControl::setInitialValues() {
}
void FORTE_FB_AiControl::alg_REQ(void) {
  CIEC_REAL st_TempValue;
  st_TempValue = DIV(st_Value(), st_div());
  if(((st_TempValue > st_min()) && (st_TempValue < st_max()))) {
  	st_OutValue() = st_TempValue;
  	st_Alarm() = false;
  }
  else {
  	st_Alarm() = true;
  }
}


