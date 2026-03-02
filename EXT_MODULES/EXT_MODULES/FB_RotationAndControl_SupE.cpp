/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: FB_RotationAndControl_SupE
 *** Description: Simple FB with one algorithm
 *** Version:
***     1.0: 2025-09-13/sergdeb -  - 
 *************************************************************************/

#include "FB_RotationAndControl_SupE.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "FB_RotationAndControl_SupE_gen.cpp"
#endif


DEFINE_FIRMWARE_FB(FORTE_FB_RotationAndControl_SupE, g_nStringIdFB_RotationAndControl_SupE)

const CStringDictionary::TStringId FORTE_FB_RotationAndControl_SupE::scm_anDataInputNames[] = {g_nStringIdxWork, g_nStringIdxSwFanChoice, g_nStringIdxStatusDamps1, g_nStringIdxStatusDamps2, g_nStringIdxStatusFan1, g_nStringIdxStatusFan2, g_nStringIdxStatusTEN1, g_nStringIdxStatusTEN2, g_nStringIdxAlarmDamps1, g_nStringIdxAlarmDamps2, g_nStringIdxAlarmFan1, g_nStringIdxAlarmFan2, g_nStringIdxAlarmTEN1, g_nStringIdxAlarmTEN2};

const CStringDictionary::TStringId FORTE_FB_RotationAndControl_SupE::scm_anDataInputTypeIds[] = {g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL};

const CStringDictionary::TStringId FORTE_FB_RotationAndControl_SupE::scm_anDataOutputNames[] = {g_nStringIdxDamps1, g_nStringIdxDamps2, g_nStringIdxFan1, g_nStringIdxFan2, g_nStringIdxTEN1, g_nStringIdxTEN2};

const CStringDictionary::TStringId FORTE_FB_RotationAndControl_SupE::scm_anDataOutputTypeIds[] = {g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL};

const TDataIOID FORTE_FB_RotationAndControl_SupE::scm_anEIWith[] = {0, 1, 2, 3, 4, 5, 8, 9, 10, 11, 6, 7, 12, 13, 255};
const TForteInt16 FORTE_FB_RotationAndControl_SupE::scm_anEIWithIndexes[] = {0};
const CStringDictionary::TStringId FORTE_FB_RotationAndControl_SupE::scm_anEventInputNames[] = {g_nStringIdREQ};

const TDataIOID FORTE_FB_RotationAndControl_SupE::scm_anEOWith[] = {0, 1, 2, 3, 4, 5, 255};
const TForteInt16 FORTE_FB_RotationAndControl_SupE::scm_anEOWithIndexes[] = {0};
const CStringDictionary::TStringId FORTE_FB_RotationAndControl_SupE::scm_anEventOutputNames[] = {g_nStringIdCNF};


const SFBInterfaceSpec FORTE_FB_RotationAndControl_SupE::scm_stFBInterfaceSpec = {
  1, scm_anEventInputNames, scm_anEIWith, scm_anEIWithIndexes,
  1, scm_anEventOutputNames, scm_anEOWith, scm_anEOWithIndexes,
  14, scm_anDataInputNames, scm_anDataInputTypeIds,
  6, scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, nullptr
};

        const CStringDictionary::TStringId FORTE_FB_RotationAndControl_SupE::scm_anInternalsNames[] = {g_nStringIdState};
        const CStringDictionary::TStringId FORTE_FB_RotationAndControl_SupE::scm_anInternalsTypeIds[] = {g_nStringIdINT};
        const SInternalVarsInformation FORTE_FB_RotationAndControl_SupE::scm_stInternalVars = {1, scm_anInternalsNames, scm_anInternalsTypeIds};

void FORTE_FB_RotationAndControl_SupE::setInitialValues() {
}
void FORTE_FB_RotationAndControl_SupE::alg_REQ(void) {
  switch (st_State()) {
  	case 0:
  		st_xFan1() = 0;
  		st_xFan2() = 0;
  		st_xDamps1() = 0;
  		st_xDamps2() = 0;
  		st_xTEN1() = 0;
  		st_xTEN2() = 0;
  		if((st_xWork() == 0)) {
  			st_State() = 1;
  		}
  		break;
  	case 1:
  		if(((st_xStatusFan1() == 0) && (st_xStatusTEN1() == 0))) {
  			st_xDamps1() = 0;
  		}
  		if(((st_xStatusFan2() == 0) && (st_xStatusTEN2() == 0))) {
  			st_xDamps2() = 0;
  		}
  		st_xFan1() = 0;
  		st_xFan2() = 0;
  		st_xTEN1() = 0;
  		st_xTEN2() = 0;
  		if((st_xWork() == 0)) {
  			st_State() = 1;
  		}
  		if((st_xWork() == 1)) {
  			st_State() = 2;
  		}
  		if((st_xWork() && (((st_xAlarmDamps1() || st_xAlarmDamps2()) || (st_xAlarmFan1() || st_xAlarmFan2())) || (st_xAlarmTEN1() || st_xAlarmTEN2())))) {
  			st_State() = 3;
  		}
  		break;
  	case 2:
  		if(((st_xSwFanChoice() == 1) && (st_xStatusFan1() == 0))) {
  			st_xDamps1() = 0;
  		}
  		else if((((st_xSwFanChoice() == 0) && (st_xStatusFan2() == 0)) && (st_xStatusDamps2() == 0))) {
  			st_xDamps1() = 1;
  		}
  		if(((st_xSwFanChoice() == 0) && (st_xStatusFan2() == 0))) {
  			st_xDamps2() = 0;
  		}
  		else if((((st_xSwFanChoice() == 1) && (st_xStatusFan1() == 0)) && (st_xStatusDamps1() == 0))) {
  			st_xDamps2() = 1;
  		}
  		if((st_xSwFanChoice() == 1)) {
  			st_xFan1() = 0;
  		}
  		else if(((st_xSwFanChoice() == 0) && st_xStatusDamps1())) {
  			st_xFan1() = 1;
  		}
  		if((st_xSwFanChoice() == 0)) {
  			st_xFan2() = 0;
  		}
  		else if(((st_xSwFanChoice() == 1) && st_xStatusDamps2())) {
  			st_xFan2() = 1;
  		}
  		if((st_xSwFanChoice() == 1)) {
  			st_xTEN1() = 0;
  		}
  		else if((((st_xSwFanChoice() == 0) && st_xStatusDamps1()) && st_xStatusFan1())) {
  			st_xTEN1() = 1;
  		}
  		if((st_xSwFanChoice() == 0)) {
  			st_xTEN2() = 0;
  		}
  		else if((((st_xSwFanChoice() == 1) && st_xStatusDamps2()) && st_xStatusFan2())) {
  			st_xTEN2() = 1;
  		}
  		if((st_xWork() == 0)) {
  			st_State() = 1;
  		}
  		if((st_xWork() == 1)) {
  			st_State() = 2;
  		}
  		if((st_xWork() && (((st_xAlarmDamps1() || st_xAlarmDamps2()) || (st_xAlarmFan1() || st_xAlarmFan2())) || (st_xAlarmTEN1() || st_xAlarmTEN2())))) {
  			st_State() = 3;
  		}
  		break;
  	case 3:
  		if(((((st_xAlarmDamps1() || st_xAlarmFan1()) || st_xAlarmTEN1()) && (st_xStatusFan1() == 0)) && (st_xStatusTEN1() == 0))) {
  			st_xDamps1() = 0;
  		}
  		else if((((((st_xAlarmDamps2() || st_xAlarmFan2()) || st_xAlarmTEN2()) && (st_xStatusFan2() == 0)) && (st_xStatusTEN2() == 0)) && (st_xStatusDamps2() == 0))) {
  			st_xDamps1() = 1;
  		}
  		if(((((st_xAlarmDamps2() || st_xAlarmFan2()) || st_xAlarmTEN2()) && (st_xStatusFan2() == 0)) && (st_xStatusTEN2() == 0))) {
  			st_xDamps2() = 0;
  		}
  		else if((((((st_xAlarmDamps1() || st_xAlarmFan1()) || st_xAlarmTEN1()) && (st_xStatusFan1() == 0)) && (st_xStatusTEN1() == 0)) && (st_xStatusDamps1() == 0))) {
  			st_xDamps2() = 1;
  		}
  		if(((st_xAlarmDamps1() || st_xAlarmFan1()) || st_xAlarmTEN1())) {
  			st_xFan1() = 0;
  		}
  		else if(((((st_xAlarmDamps2() || st_xAlarmFan2()) || st_xAlarmTEN2()) && st_xStatusDamps1()) && (st_xStatusTEN2() == 0))) {
  			st_xFan1() = 1;
  		}
  		if(((st_xAlarmDamps2() || st_xAlarmFan2()) || st_xAlarmTEN2())) {
  			st_xFan2() = 0;
  		}
  		else if(((((st_xAlarmDamps1() || st_xAlarmFan1()) || st_xAlarmTEN1()) && st_xStatusDamps2()) && (st_xStatusTEN1() == 0))) {
  			st_xFan2() = 1;
  		}
  		if(((st_xAlarmDamps1() || st_xAlarmFan1()) || st_xAlarmTEN1())) {
  			st_xTEN1() = 0;
  		}
  		else if((((((st_xAlarmDamps2() || st_xAlarmFan2()) || st_xAlarmTEN2()) && st_xStatusDamps1()) && st_xStatusFan1()) && (st_xStatusTEN2() == 0))) {
  			st_xTEN1() = 1;
  		}
  		if(((st_xAlarmDamps2() || st_xAlarmFan2()) || st_xAlarmTEN2())) {
  			st_xTEN2() = 0;
  		}
  		else if((((((st_xAlarmDamps1() || st_xAlarmFan1()) || st_xAlarmTEN1()) && st_xStatusDamps2()) && st_xStatusFan2()) && (st_xStatusTEN1() == 0))) {
  			st_xTEN2() = 1;
  		}
  		if((st_xWork() == 0)) {
  			st_State() = 1;
  		}
  		if((st_xWork() == 1)) {
  			st_State() = 2;
  		}
  		if((st_xWork() && (((st_xAlarmDamps1() || st_xAlarmDamps2()) || (st_xAlarmFan1() || st_xAlarmFan2())) || (st_xAlarmTEN1() || st_xAlarmTEN2())))) {
  			st_State() = 3;
  		}
  		break;
  }
}


