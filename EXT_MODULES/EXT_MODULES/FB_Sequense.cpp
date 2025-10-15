/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: FB_Sequense
 *** Description: Basic FB with empty ECC
 *** Version:
***     1.0: 2025-09-16/korsa -  - 
 *************************************************************************/

#include "FB_Sequense.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "FB_Sequense_gen.cpp"
#endif

#include "forte_real.h"
#include "forte_uint.h"
#include "forte_array_at.h"

DEFINE_FIRMWARE_FB(FORTE_FB_Sequense, g_nStringIdFB_Sequense)

const CStringDictionary::TStringId FORTE_FB_Sequense::scm_anDataInputNames[] = {g_nStringIdnumLevel, g_nStringIdarrPower, g_nStringIdYpid, g_nStringIdprcDZdisableKM};

const CStringDictionary::TStringId FORTE_FB_Sequense::scm_anDataInputTypeIds[] = {g_nStringIdUINT, g_nStringIdARRAY, 12, g_nStringIdREAL, g_nStringIdREAL, g_nStringIdREAL};

const CStringDictionary::TStringId FORTE_FB_Sequense::scm_anDataOutputNames[] = {g_nStringIdinitErrStr, g_nStringIdErr, g_nStringIdarrProportion, g_nStringIdarrLevel, g_nStringIdoutPWM, g_nStringIdarrKM, g_nStringIdpE, g_nStringIdpD, g_nStringIdpPWM, g_nStringIdpKM, g_nStringIdpMD, g_nStringIdpSumP};

const CStringDictionary::TStringId FORTE_FB_Sequense::scm_anDataOutputTypeIds[] = {g_nStringIdSTRING, g_nStringIdBOOL, g_nStringIdARRAY, 12, g_nStringIdREAL, g_nStringIdARRAY, 13, g_nStringIdREAL, g_nStringIdREAL, g_nStringIdARRAY, 11, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdREAL, g_nStringIdREAL, g_nStringIdREAL, g_nStringIdREAL};

const TDataIOID FORTE_FB_Sequense::scm_anEIWith[] = {0, 1, 2, 3, 255, 0, 1, 2, 3, 255};
const TForteInt16 FORTE_FB_Sequense::scm_anEIWithIndexes[] = {0, 5};
const CStringDictionary::TStringId FORTE_FB_Sequense::scm_anEventInputNames[] = {g_nStringIdINIT, g_nStringIdREQ};

const TDataIOID FORTE_FB_Sequense::scm_anEOWith[] = {0, 2, 1, 3, 4, 5, 8, 6, 7, 9, 10, 11, 255, 2, 0, 1, 3, 4, 5, 8, 6, 7, 9, 10, 11, 255};
const TForteInt16 FORTE_FB_Sequense::scm_anEOWithIndexes[] = {0, 13};
const CStringDictionary::TStringId FORTE_FB_Sequense::scm_anEventOutputNames[] = {g_nStringIdINTO, g_nStringIdCNF};


const SFBInterfaceSpec FORTE_FB_Sequense::scm_stFBInterfaceSpec = {
  2, scm_anEventInputNames, scm_anEIWith, scm_anEIWithIndexes,
  2, scm_anEventOutputNames, scm_anEOWith, scm_anEOWithIndexes,
  4, scm_anDataInputNames, scm_anDataInputTypeIds,
  12, scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, nullptr
};

const CStringDictionary::TStringId FORTE_FB_Sequense::scm_anInternalsNames[] = {g_nStringIdPowerKM, g_nStringIdPowerPWM};
const CStringDictionary::TStringId FORTE_FB_Sequense::scm_anInternalsTypeIds[] = {g_nStringIdREAL, g_nStringIdREAL};
const SInternalVarsInformation FORTE_FB_Sequense::scm_stInternalVars = {2, scm_anInternalsNames, scm_anInternalsTypeIds};

void FORTE_FB_Sequense::setInitialValues() {
}

void FORTE_FB_Sequense::alg_AlgInit(void) {
  CIEC_UINT st_i;
  CIEC_REAL st_SumPower;
  CIEC_UINT st_countZero;
  CIEC_REAL st_minDelta;
  CIEC_UINT st_zero = 0;
  CIEC_UINT st_one = 1;
  st_initErrStr() = "OK";
  st_Err() = false;
  if(((st_numLevel() < 1) || (st_numLevel() > 12))) {
  	st_initErrStr() = "Incorrect number of levels";
  	st_Err() = true;
  }
  const auto by_0 = 1;
  const auto to_0 = 11;
  for(st_i = 0;
      (by_0 >  0 && st_i <= to_0) ||
      (by_0 <= 0 && st_i >= to_0);
      st_i = st_i + by_0){
  	st_arrProportion()[st_i]
  	 = 0.0;
  }
  const auto by_1 = 1;
  const auto to_1 = 12;
  for(st_i = 0;
      (by_1 >  0 && st_i <= to_1) ||
      (by_1 <= 0 && st_i >= to_1);
      st_i = st_i + by_1){
  	st_arrLevel()[st_i]
  	 = 0.0;
  }
  if((st_numLevel() >= 1)) {
  	st_countZero = st_zero;
  	const auto by_0 = 1;
  	const auto to_0 = SUB(st_numLevel(), st_one);
  	for(st_i = 0;
  	    (by_0 >  0 && st_i <= to_0) ||
  	    (by_0 <= 0 && st_i >= to_0);
  	    st_i = st_i + by_0){
  		if((st_arrPower()[st_i]
  		 == 0)) {
  			st_countZero = ADD(st_countZero, st_one);
  		}
  	}
  	if((st_countZero != st_numLevel())) {
  		const auto by_0 = 1;
  		const auto to_0 = SUB(st_numLevel(), st_one);
  		for(st_i = 0;
  		    (by_0 >  0 && st_i <= to_0) ||
  		    (by_0 <= 0 && st_i >= to_0);
  		    st_i = st_i + by_0){
  			st_SumPower = ADD(st_SumPower, st_arrPower()[st_i]
  			);
  		}
  		const auto by_1 = 1;
  		const auto to_1 = SUB(st_numLevel(), st_one);
  		for(st_i = 0;
  		    (by_1 >  0 && st_i <= to_1) ||
  		    (by_1 <= 0 && st_i >= to_1);
  		    st_i = st_i + by_1){
  			if((st_arrPower()[st_i]
  			 != 0)) {
  				st_arrProportion()[st_i]
  				 = MUL(DIV(st_arrPower()[st_i]
  				, st_SumPower), 100.0);
  			}
  			else {
  				st_initErrStr() = "There are zeros in the array working area";
  				st_Err() = true;
  			}
  		}
  	}
  	if((st_countZero == st_numLevel())) {
  		const auto by_0 = 1;
  		const auto to_0 = SUB(st_numLevel(), st_one);
  		for(st_i = 0;
  		    (by_0 >  0 && st_i <= to_0) ||
  		    (by_0 <= 0 && st_i >= to_0);
  		    st_i = st_i + by_0){
  			st_arrProportion()[st_i]
  			 = DIV(100.0, UINT_TO_REAL(st_numLevel()));
  		}
  	}
  	if((! st_Err())) {
  		const auto by_0 = 1;
  		const auto to_0 = st_numLevel();
  		for(st_i = 0;
  		    (by_0 >  0 && st_i <= to_0) ||
  		    (by_0 <= 0 && st_i >= to_0);
  		    st_i = st_i + by_0){
  			st_arrLevel()[st_i]
  			 = 0.0;
  		}
  		const auto by_1 = 1;
  		const auto to_1 = st_numLevel();
  		for(st_i = 1;
  		    (by_1 >  0 && st_i <= to_1) ||
  		    (by_1 <= 0 && st_i >= to_1);
  		    st_i = st_i + by_1){
  			st_arrLevel()[st_i]
  			 = ADD(st_arrProportion()[SUB(st_i, st_one)]
  			, st_arrLevel()[SUB(st_i, st_one)]
  			);
  		}
  		st_pSumP() = st_SumPower;
  	}
  	st_minDelta = ABS(SUB(st_arrLevel()[1]
  	, st_arrLevel()[0]
  	));
  	const auto by_1 = 1;
  	const auto to_1 = st_numLevel();
  	for(st_i = 1;
  	    (by_1 >  0 && st_i <= to_1) ||
  	    (by_1 <= 0 && st_i >= to_1);
  	    st_i = st_i + by_1){
  		if((ABS(SUB(st_arrLevel()[ADD(st_i, st_one)]
  		, st_arrLevel()[st_i]
  		)) < st_minDelta)) {
  			st_minDelta = ABS(SUB(st_arrLevel()[ADD(st_i, st_one)]
  			, st_arrLevel()[st_i]
  			));
  		}
  	}
  	st_pMD() = st_minDelta;
  	if((st_prcDZdisableKM() > MUL(st_minDelta, 0.7))) {
  		st_initErrStr() = "The dead zone is more than minDelta*0.7";
  		st_Err() = true;
  	}
  }
}

void FORTE_FB_Sequense::alg_Run(void) {
  CIEC_UINT st_i;
  CIEC_UINT st_one = 1;
  CIEC_UINT st_two = 1;
  st_pE() = false;
  st_pD() = false;
  if((! st_Err())) {
  	const auto by_0 = 1;
  	const auto to_0 = SUB(st_numLevel(), st_two);
  	for(st_i = 0;
  	    (by_0 >  0 && st_i <= to_0) ||
  	    (by_0 <= 0 && st_i >= to_0);
  	    st_i = st_i + by_0){
  		if(((st_Ypid() > st_arrLevel()[ADD(st_i, st_one)]
  		) && (st_arrKM()[st_i]
  		 == false))) {
  			st_arrKM()[st_i]
  			 = true;
  			st_PowerKM() = ADD(st_PowerKM(), st_arrProportion()[ADD(st_i, st_one)]
  			);
  			st_pE() = true;
  		}
  	}
  	const auto by_1 = 1;
  	const auto to_1 = SUB(st_numLevel(), st_two);
  	for(st_i = 0;
  	    (by_1 >  0 && st_i <= to_1) ||
  	    (by_1 <= 0 && st_i >= to_1);
  	    st_i = st_i + by_1){
  		if((((st_Ypid() <= SUB(st_arrLevel()[ADD(st_i, st_one)]
  		, st_prcDZdisableKM())) && (st_arrKM()[st_i]
  		 == true)) && (st_PowerPWM() <= 0.0))) {
  			st_arrKM()[st_i]
  			 = false;
  			st_PowerKM() = SUB(st_PowerKM(), st_arrProportion()[ADD(st_i, st_one)]
  			);
  			st_pD() = true;
  		}
  	}
  	st_PowerPWM() = SUB(st_Ypid(), st_PowerKM());
  	if(((st_PowerPWM() > 0.0) && (st_PowerPWM() <= 100.0))) {
  		st_outPWM() = MUL(DIV(st_PowerPWM(), st_arrProportion()[0]
  		), 100.0);
  	}
  	else {
  		st_outPWM() = 0.0;
  	}
  	st_pPWM() = st_PowerPWM();
  	st_pKM() = st_PowerKM();
  }
}


void FORTE_FB_Sequense::enterStateSTART(void) {
  m_nECCState = scm_nStateSTART;
}

void FORTE_FB_Sequense::enterStateINIT(void) {
  m_nECCState = scm_nStateINIT;
  alg_AlgInit();
  sendOutputEvent(scm_nEventINTOID);
}

void FORTE_FB_Sequense::enterStateRun(void) {
  m_nECCState = scm_nStateRun;
  alg_Run();
  sendOutputEvent(scm_nEventCNFID);
}


void FORTE_FB_Sequense::executeEvent(int pa_nEIID){
  bool bTransitionCleared;
  do {
    bTransitionCleared = true;
    switch(m_nECCState) {
      case scm_nStateSTART:
        if(scm_nEventINITID == pa_nEIID)
          enterStateINIT();
        else
        if(scm_nEventREQID == pa_nEIID)
          enterStateRun();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      case scm_nStateINIT:
        if(1)
          enterStateSTART();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      case scm_nStateRun:
        if(1)
          enterStateSTART();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      default:
        DEVLOG_ERROR("The state is not in the valid range! The state value is: %d. The max value can be: 3.", m_nECCState.operator TForteUInt16 ());
        m_nECCState = 0; // 0 is always the initial state
        break;
    }
    pa_nEIID = cg_nInvalidEventID; // we have to clear the event after the first check in order to ensure correct behavior
  } while(bTransitionCleared);
}


