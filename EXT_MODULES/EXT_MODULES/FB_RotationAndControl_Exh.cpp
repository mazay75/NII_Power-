/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: FB_RotationAndControl_Exh
 *** Description: Simple FB with one algorithm
 *** Version:
***     1.0: 2025-09-13/sergdeb -  - 
 *************************************************************************/

#include "FB_RotationAndControl_Exh.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "FB_RotationAndControl_Exh_gen.cpp"
#endif


DEFINE_FIRMWARE_FB(FORTE_FB_RotationAndControl_Exh, g_nStringIdFB_RotationAndControl_Exh)

const CStringDictionary::TStringId FORTE_FB_RotationAndControl_Exh::scm_anDataInputNames[] = {g_nStringIdxWork, g_nStringIdxSwFanChoice, g_nStringIdxStatusDamps1, g_nStringIdxStatusDamps2, g_nStringIdxStatusFan1, g_nStringIdxStatusFan2, g_nStringIdxAlarmDamps1, g_nStringIdxAlarmDamps2, g_nStringIdxAlarmFan1, g_nStringIdxAlarmFan2};

const CStringDictionary::TStringId FORTE_FB_RotationAndControl_Exh::scm_anDataInputTypeIds[] = {g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL};

const CStringDictionary::TStringId FORTE_FB_RotationAndControl_Exh::scm_anDataOutputNames[] = {g_nStringIdxDamps1, g_nStringIdxDamps2, g_nStringIdxFan1, g_nStringIdxFan2};

const CStringDictionary::TStringId FORTE_FB_RotationAndControl_Exh::scm_anDataOutputTypeIds[] = {g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL};

const TDataIOID FORTE_FB_RotationAndControl_Exh::scm_anEIWith[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 255};
const TForteInt16 FORTE_FB_RotationAndControl_Exh::scm_anEIWithIndexes[] = {0};
const CStringDictionary::TStringId FORTE_FB_RotationAndControl_Exh::scm_anEventInputNames[] = {g_nStringIdREQ};

const TDataIOID FORTE_FB_RotationAndControl_Exh::scm_anEOWith[] = {0, 1, 2, 3, 255};
const TForteInt16 FORTE_FB_RotationAndControl_Exh::scm_anEOWithIndexes[] = {0};
const CStringDictionary::TStringId FORTE_FB_RotationAndControl_Exh::scm_anEventOutputNames[] = {g_nStringIdCNF};


const SFBInterfaceSpec FORTE_FB_RotationAndControl_Exh::scm_stFBInterfaceSpec = {
  1, scm_anEventInputNames, scm_anEIWith, scm_anEIWithIndexes,
  1, scm_anEventOutputNames, scm_anEOWith, scm_anEOWithIndexes,
  10, scm_anDataInputNames, scm_anDataInputTypeIds,
  4, scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, nullptr
};

        const CStringDictionary::TStringId FORTE_FB_RotationAndControl_Exh::scm_anInternalsNames[] = {g_nStringIdState};
        const CStringDictionary::TStringId FORTE_FB_RotationAndControl_Exh::scm_anInternalsTypeIds[] = {g_nStringIdINT};
        const SInternalVarsInformation FORTE_FB_RotationAndControl_Exh::scm_stInternalVars = {1, scm_anInternalsNames, scm_anInternalsTypeIds};

void FORTE_FB_RotationAndControl_Exh::setInitialValues() {
}
void FORTE_FB_RotationAndControl_Exh::alg_REQ(void) {
  switch (st_State()) {
  	case 0:
  		st_xFan1() = 0;
  		st_xFan2() = 0;
  		st_xDamps1() = 0;
  		st_xDamps2() = 0;
  		if((st_xWork() == 0)) {
  			st_State() = 1;
  		}
  		if((st_xWork() == 1)) {
  			st_State() = 2;
  		}
  		if((st_xWork() && ((st_xAlarmDamps1() || st_xAlarmDamps2()) || (st_xAlarmFan1() || st_xAlarmFan2())))) {
  			st_State() = 3;
  		}
  		break;
  	case 1:
  		st_xFan1() = 0;
  		st_xFan2() = 0;
  		if((st_xStatusFan1() == 0)) {
  			st_xDamps1() = 0;
  		}
  		if((st_xStatusFan2() == 0)) {
  			st_xDamps2() = 0;
  		}
  		if((st_xWork() == 0)) {
  			st_State() = 1;
  		}
  		if((st_xWork() == 1)) {
  			st_State() = 2;
  		}
  		if((st_xWork() && ((st_xAlarmDamps1() || st_xAlarmDamps2()) || (st_xAlarmFan1() || st_xAlarmFan2())))) {
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
  		if((st_xWork() == 0)) {
  			st_State() = 1;
  		}
  		if((st_xWork() == 1)) {
  			st_State() = 2;
  		}
  		if((st_xWork() && ((st_xAlarmDamps1() || st_xAlarmDamps2()) || (st_xAlarmFan1() || st_xAlarmFan2())))) {
  			st_State() = 3;
  		}
  		break;
  	case 3:
  		if(((st_xAlarmDamps1() || st_xAlarmFan1()) && (st_xStatusFan1() == 0))) {
  			st_xDamps1() = 0;
  		}
  		else if(((st_xAlarmDamps2() || st_xAlarmFan2()) && (st_xStatusFan2() == 0))) {
  			st_xDamps1() = 1;
  		}
  		if(((st_xAlarmDamps2() || st_xAlarmFan2()) && (st_xStatusFan2() == 0))) {
  			st_xDamps2() = 0;
  		}
  		else if(((st_xAlarmDamps1() || st_xAlarmFan1()) && (st_xStatusFan1() == 0))) {
  			st_xDamps2() = 1;
  		}
  		if((st_xAlarmDamps1() || st_xAlarmFan1())) {
  			st_xFan1() = 0;
  		}
  		else if(((st_xAlarmDamps2() || st_xAlarmFan2()) && st_xStatusDamps1())) {
  			st_xFan1() = 1;
  		}
  		if((st_xAlarmDamps2() || st_xAlarmFan2())) {
  			st_xFan2() = 0;
  		}
  		else if(((st_xAlarmDamps1() || st_xAlarmFan1()) && st_xStatusDamps2())) {
  			st_xFan2() = 1;
  		}
  		if((st_xWork() == 0)) {
  			st_State() = 1;
  		}
  		if((st_xWork() == 1)) {
  			st_State() = 2;
  		}
  		if((st_xWork() && ((st_xAlarmDamps1() || st_xAlarmDamps2()) || (st_xAlarmFan1() || st_xAlarmFan2())))) {
  			st_State() = 3;
  		}
  		break;
  }
}


