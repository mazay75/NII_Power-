/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: FB_ControlSup
 *** Description: Simple FB with one algorithm
 *** Version:
***     1.0: 2025-10-09/sergdeb -  - 
 *************************************************************************/

#include "FB_ControlSup.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "FB_ControlSup_gen.cpp"
#endif


DEFINE_FIRMWARE_FB(FORTE_FB_ControlSup, g_nStringIdFB_ControlSup)

const CStringDictionary::TStringId FORTE_FB_ControlSup::scm_anDataInputNames[] = {g_nStringIdxWork, g_nStringIdxStatusDamp1, g_nStringIdxStatusFan1, g_nStringIdxStatusTEN1, g_nStringIdxAlarmDamp1, g_nStringIdxAlarmFan1, g_nStringIdxAlarmTEN1};

const CStringDictionary::TStringId FORTE_FB_ControlSup::scm_anDataInputTypeIds[] = {g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL};

const CStringDictionary::TStringId FORTE_FB_ControlSup::scm_anDataOutputNames[] = {g_nStringIdxDamp1, g_nStringIdxFan1, g_nStringIdxTEN1, g_nStringIdSTATE};

const CStringDictionary::TStringId FORTE_FB_ControlSup::scm_anDataOutputTypeIds[] = {g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdUINT};

const TDataIOID FORTE_FB_ControlSup::scm_anEIWith[] = {0, 1, 2, 3, 4, 5, 6, 255};
const TForteInt16 FORTE_FB_ControlSup::scm_anEIWithIndexes[] = {0};
const CStringDictionary::TStringId FORTE_FB_ControlSup::scm_anEventInputNames[] = {g_nStringIdREQ};

const TDataIOID FORTE_FB_ControlSup::scm_anEOWith[] = {0, 1, 2, 3, 255};
const TForteInt16 FORTE_FB_ControlSup::scm_anEOWithIndexes[] = {0};
const CStringDictionary::TStringId FORTE_FB_ControlSup::scm_anEventOutputNames[] = {g_nStringIdCNF};


const SFBInterfaceSpec FORTE_FB_ControlSup::scm_stFBInterfaceSpec = {
  1, scm_anEventInputNames, scm_anEIWith, scm_anEIWithIndexes,
  1, scm_anEventOutputNames, scm_anEOWith, scm_anEOWithIndexes,
  7, scm_anDataInputNames, scm_anDataInputTypeIds,
  4, scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, nullptr
};

        const CStringDictionary::TStringId FORTE_FB_ControlSup::scm_anInternalsNames[] = {g_nStringIdState};
        const CStringDictionary::TStringId FORTE_FB_ControlSup::scm_anInternalsTypeIds[] = {g_nStringIdUINT};
        const SInternalVarsInformation FORTE_FB_ControlSup::scm_stInternalVars = {1, scm_anInternalsNames, scm_anInternalsTypeIds};

void FORTE_FB_ControlSup::setInitialValues() {
}
void FORTE_FB_ControlSup::alg_REQ(void) {
  if((st_xWork() == 0)) {
  	st_STATE() = 1;
  }
  if((st_xWork() == 1)) {
  	st_STATE() = 2;
  }
  if((st_xWork() && ((st_xAlarmDamp1() || st_xAlarmFan1()) || st_xAlarmTEN1()))) {
  	st_STATE() = 3;
  }
  switch (st_STATE()) {
  	case 1:
  		if(((st_xStatusFan1() == 0) && (st_xStatusTEN1() == 0))) {
  			st_xDamp1() = 0;
  		}
  		st_xFan1() = 0;
  		st_xTEN1() = 0;
  		break;
  	case 2:
  		st_xDamp1() = 1;
  		if((st_xStatusDamp1() && st_xDamp1())) {
  			st_xFan1() = 1;
  		}
  		if((st_xStatusDamp1() && st_xStatusFan1())) {
  			st_xTEN1() = 1;
  		}
  		break;
  	case 3:
  		if(((((st_xAlarmDamp1() || st_xAlarmFan1()) || st_xAlarmTEN1()) && (st_xStatusFan1() == 0)) && (st_xStatusTEN1() == 0))) {
  			st_xDamp1() = 0;
  		}
  		if(((st_xAlarmDamp1() || st_xAlarmFan1()) || st_xAlarmTEN1())) {
  			st_xFan1() = 0;
  		}
  		if(((st_xAlarmDamp1() || st_xAlarmFan1()) || st_xAlarmTEN1())) {
  			st_xTEN1() = 0;
  		}
  		break;
  }
  st_STATE() = st_STATE();
}


