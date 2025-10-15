/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: FB_PID
 *** Description: Basic FB with empty ECC
 *** Version:
***     1.0: 2024-11-08/Администратор -  - 
 *************************************************************************/

#include "FB_PID.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "FB_PID_gen.cpp"
#endif

#include "forte_real.h"
#include "forte_array_at.h"

DEFINE_FIRMWARE_FB(FORTE_FB_PID, g_nStringIdFB_PID)

const CStringDictionary::TStringId FORTE_FB_PID::scm_anDataInputNames[] = {g_nStringIdMV, g_nStringIdSP, g_nStringIdDZ, g_nStringIdKp, g_nStringIdTi, g_nStringIdTd, g_nStringIdInterval, g_nStringIdLIM_H, g_nStringIdLIM_L, g_nStringIdManual, g_nStringIdY_Manual};

const CStringDictionary::TStringId FORTE_FB_PID::scm_anDataInputTypeIds[] = {g_nStringIdREAL, g_nStringIdREAL, g_nStringIdREAL, g_nStringIdREAL, g_nStringIdREAL, g_nStringIdREAL, g_nStringIdREAL, g_nStringIdREAL, g_nStringIdREAL, g_nStringIdBOOL, g_nStringIdREAL};

const CStringDictionary::TStringId FORTE_FB_PID::scm_anDataOutputNames[] = {g_nStringIdY, g_nStringIdLIM, g_nStringIdtOutInError, g_nStringIdtOutLE, g_nStringIdtOutLE2, g_nStringIdtOutPp, g_nStringIdtOutIp, g_nStringIdtOutDp};

const CStringDictionary::TStringId FORTE_FB_PID::scm_anDataOutputTypeIds[] = {g_nStringIdREAL, g_nStringIdBOOL, g_nStringIdREAL, g_nStringIdREAL, g_nStringIdREAL, g_nStringIdREAL, g_nStringIdREAL, g_nStringIdREAL};

const TDataIOID FORTE_FB_PID::scm_anEIWith[] = {0, 255, 0, 2, 3, 4, 5, 6, 7, 8, 1, 9, 10, 255, 0, 2, 3, 4, 5, 6, 7, 8, 1, 255};
const TForteInt16 FORTE_FB_PID::scm_anEIWithIndexes[] = {0, 2, 14};
const CStringDictionary::TStringId FORTE_FB_PID::scm_anEventInputNames[] = {g_nStringIdINIT, g_nStringIdREQ, g_nStringIdRST};

const TDataIOID FORTE_FB_PID::scm_anEOWith[] = {0, 2, 3, 4, 5, 6, 7, 255};
const TForteInt16 FORTE_FB_PID::scm_anEOWithIndexes[] = {-1, 0};
const CStringDictionary::TStringId FORTE_FB_PID::scm_anEventOutputNames[] = {g_nStringIdINTO, g_nStringIdCNF};


const SFBInterfaceSpec FORTE_FB_PID::scm_stFBInterfaceSpec = {
  3, scm_anEventInputNames, scm_anEIWith, scm_anEIWithIndexes,
  2, scm_anEventOutputNames, scm_anEOWith, scm_anEOWithIndexes,
  11, scm_anDataInputNames, scm_anDataInputTypeIds,
  8, scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, nullptr
};

const CStringDictionary::TStringId FORTE_FB_PID::scm_anInternalsNames[] = {g_nStringIdLAST_ERROR, g_nStringIdLAST_ERROR2, g_nStringIdINTEGRATION_ACCUM};
const CStringDictionary::TStringId FORTE_FB_PID::scm_anInternalsTypeIds[] = {g_nStringIdREAL, g_nStringIdREAL, g_nStringIdREAL};
const SInternalVarsInformation FORTE_FB_PID::scm_stInternalVars = {3, scm_anInternalsNames, scm_anInternalsTypeIds};

void FORTE_FB_PID::setInitialValues() {
  st_Kp() = 1;
  st_Interval() = 1;
  st_LIM_H() = 100;
  st_LIM_L() = 0;
}

void FORTE_FB_PID::alg_RESET(void) {
  st_LAST_ERROR() = 0.0;
  st_LAST_ERROR2() = 0.0;
  st_INTEGRATION_ACCUM() = 0.0;
}

void FORTE_FB_PID::alg_REQ(void) {
  CIEC_REAL st_proportionalPart;
  CIEC_REAL st_integralPart;
  CIEC_REAL st_derivativePart;
  CIEC_REAL st_Ydesired;
  CIEC_REAL st_errorFiltered;
  CIEC_REAL st_InError;
  CIEC_REAL st_Ki;
  if(st_Manual()) {
  	st_Y() = st_Y_Manual();
  }
  else {
  	if((st_Ti() == 0)) {
  		st_Ki = 0;
  	}
  	else {
  		st_Ki = DIV(1.0, st_Ti());
  	}
  	st_InError = SUB(st_SP(), st_MV());
  	st_tOutInError() = st_InError;
  	if((ABS(st_InError) <= st_DZ())) {
  		st_errorFiltered = 0;
  	}
  	else {
  		st_errorFiltered = st_InError;
  	}
  	st_proportionalPart = MUL(st_Kp(), st_errorFiltered);
  	st_tOutPp() = st_proportionalPart;
  	st_integralPart = MUL(MUL(st_errorFiltered, st_Interval()), st_Ki);
  	st_tOutIp() = st_integralPart;
  	st_integralPart = ADD(st_integralPart, st_INTEGRATION_ACCUM());
  	st_derivativePart = DIV(MUL(ADD(SUB(st_errorFiltered, MUL(2.0, st_LAST_ERROR2())), st_LAST_ERROR()), st_Td()), st_Interval());
  	st_tOutDp() = st_derivativePart;
  	st_LAST_ERROR2() = st_LAST_ERROR();
  	st_tOutLE2() = st_LAST_ERROR2();
  	st_LAST_ERROR() = st_errorFiltered;
  	st_tOutLE() = st_LAST_ERROR();
  	st_Ydesired = ADD(ADD(st_proportionalPart, st_integralPart), st_derivativePart);
  	if((st_Ydesired >= st_LIM_H())) {
  		st_Y() = st_LIM_H();
  		if((st_Ki != 0.0)) {
  			if((((st_errorFiltered < 0) && (st_Kp() > 0)) || ((st_errorFiltered > 0) && (st_Kp() < 0)))) {
  				st_INTEGRATION_ACCUM() = st_integralPart;
  			}
  		}
  		else {
  			st_INTEGRATION_ACCUM() = 0.0;
  		}
  		st_LIM() = true;
  	}
  	else if((st_Ydesired <= st_LIM_L())) {
  		st_Y() = st_LIM_L();
  		if((st_Ki != 0.0)) {
  			if((((st_errorFiltered > 0) && (st_Kp() > 0)) || ((st_errorFiltered < 0) && (st_Kp() < 0)))) {
  				st_INTEGRATION_ACCUM() = st_integralPart;
  			}
  		}
  		else {
  			st_INTEGRATION_ACCUM() = 0.0;
  		}
  		st_LIM() = true;
  	}
  	else {
  		st_Y() = st_Ydesired;
  		st_INTEGRATION_ACCUM() = st_integralPart;
  		st_LIM() = false;
  	}
  }
}


void FORTE_FB_PID::enterStateSTART(void) {
  m_nECCState = scm_nStateSTART;
}

void FORTE_FB_PID::enterStateINIT(void) {
  m_nECCState = scm_nStateINIT;
  alg_RESET();
  sendOutputEvent(scm_nEventINTOID);
}

void FORTE_FB_PID::enterStateREQ(void) {
  m_nECCState = scm_nStateREQ;
  alg_REQ();
  sendOutputEvent(scm_nEventCNFID);
}

void FORTE_FB_PID::enterStateRST(void) {
  m_nECCState = scm_nStateRST;
  alg_RESET();
}


void FORTE_FB_PID::executeEvent(int pa_nEIID){
  bool bTransitionCleared;
  do {
    bTransitionCleared = true;
    switch(m_nECCState) {
      case scm_nStateSTART:
        if(scm_nEventINITID == pa_nEIID)
          enterStateINIT();
        else
        if(scm_nEventREQID == pa_nEIID)
          enterStateREQ();
        else
        if(scm_nEventRSTID == pa_nEIID)
          enterStateRST();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      case scm_nStateINIT:
        if(1)
          enterStateSTART();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      case scm_nStateREQ:
        if(1)
          enterStateSTART();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      case scm_nStateRST:
        if(1)
          enterStateSTART();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      default:
        DEVLOG_ERROR("The state is not in the valid range! The state value is: %d. The max value can be: 4.", m_nECCState.operator TForteUInt16 ());
        m_nECCState = 0; // 0 is always the initial state
        break;
    }
    pa_nEIID = cg_nInvalidEventID; // we have to clear the event after the first check in order to ensure correct behavior
  } while(bTransitionCleared);
}


