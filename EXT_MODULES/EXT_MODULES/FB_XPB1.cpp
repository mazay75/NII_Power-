/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: FB_XPB1
 *** Description: Simple FB with one algorithm
 *** Version:
***     1.0: 2024-11-17/sergdebwork -  - 
 *************************************************************************/

#include "FB_XPB1.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "FB_XPB1_gen.cpp"
#endif


DEFINE_FIRMWARE_FB(FORTE_FB_XPB1, g_nStringIdFB_XPB1)

const CStringDictionary::TStringId FORTE_FB_XPB1::scm_anDataInputNames[] = {g_nStringIdxAuto, g_nStringIdxAlarmDPD, g_nStringIdxAlarmKM, g_nStringIdxAlarmQF, g_nStringIdxAlarmTK, g_nStringIdxAlarmFC};

const CStringDictionary::TStringId FORTE_FB_XPB1::scm_anDataInputTypeIds[] = {g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL};

const CStringDictionary::TStringId FORTE_FB_XPB1::scm_anDataOutputNames[] = {g_nStringIdxAlarmFan};

const CStringDictionary::TStringId FORTE_FB_XPB1::scm_anDataOutputTypeIds[] = {g_nStringIdBOOL};

const TDataIOID FORTE_FB_XPB1::scm_anEIWith[] = {0, 1, 2, 3, 4, 5, 255};
const TForteInt16 FORTE_FB_XPB1::scm_anEIWithIndexes[] = {0};
const CStringDictionary::TStringId FORTE_FB_XPB1::scm_anEventInputNames[] = {g_nStringIdREQ};

const TDataIOID FORTE_FB_XPB1::scm_anEOWith[] = {0, 255};
const TForteInt16 FORTE_FB_XPB1::scm_anEOWithIndexes[] = {0};
const CStringDictionary::TStringId FORTE_FB_XPB1::scm_anEventOutputNames[] = {g_nStringIdCNF};


const SFBInterfaceSpec FORTE_FB_XPB1::scm_stFBInterfaceSpec = {
  1, scm_anEventInputNames, scm_anEIWith, scm_anEIWithIndexes,
  1, scm_anEventOutputNames, scm_anEOWith, scm_anEOWithIndexes,
  6, scm_anDataInputNames, scm_anDataInputTypeIds,
  1, scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, nullptr
};

void FORTE_FB_XPB1::setInitialValues() {
}
void FORTE_FB_XPB1::alg_REQ(void) {
  if((st_xAuto() && ((((st_xAlarmDPD() || st_xAlarmKM()) || st_xAlarmQF()) || st_xAlarmTK()) || st_xAlarmFC()))) {
  	st_xAlarmFan() = true;
  }
  else {
  	st_xAlarmFan() = false;
  }
}


