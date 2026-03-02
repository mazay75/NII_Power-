/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: BIT_AS_WORD
 *** Description: Simple FB with one algorithm
 *** Version:
***     1.0: 2024-11-29/sergdebwork -  - 
 *************************************************************************/

#include "BIT_AS_WORD.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "BIT_AS_WORD_gen.cpp"
#endif


DEFINE_FIRMWARE_FB(FORTE_BIT_AS_WORD, g_nStringIdBIT_AS_WORD)

const CStringDictionary::TStringId FORTE_BIT_AS_WORD::scm_anDataInputNames[] = {g_nStringIdin0, g_nStringIdin1, g_nStringIdin2, g_nStringIdin3, g_nStringIdin4, g_nStringIdin5, g_nStringIdin6, g_nStringIdin7, g_nStringIdin8, g_nStringIdin9, g_nStringIdin10, g_nStringIdin11, g_nStringIdin12, g_nStringIdin13, g_nStringIdin14, g_nStringIdin15};

const CStringDictionary::TStringId FORTE_BIT_AS_WORD::scm_anDataInputTypeIds[] = {g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL};

const CStringDictionary::TStringId FORTE_BIT_AS_WORD::scm_anDataOutputNames[] = {g_nStringIdOut};

const CStringDictionary::TStringId FORTE_BIT_AS_WORD::scm_anDataOutputTypeIds[] = {g_nStringIdWORD};

const TDataIOID FORTE_BIT_AS_WORD::scm_anEIWith[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 255};
const TForteInt16 FORTE_BIT_AS_WORD::scm_anEIWithIndexes[] = {0};
const CStringDictionary::TStringId FORTE_BIT_AS_WORD::scm_anEventInputNames[] = {g_nStringIdREQ};

const TDataIOID FORTE_BIT_AS_WORD::scm_anEOWith[] = {0, 255};
const TForteInt16 FORTE_BIT_AS_WORD::scm_anEOWithIndexes[] = {0};
const CStringDictionary::TStringId FORTE_BIT_AS_WORD::scm_anEventOutputNames[] = {g_nStringIdCNF};


const SFBInterfaceSpec FORTE_BIT_AS_WORD::scm_stFBInterfaceSpec = {
  1, scm_anEventInputNames, scm_anEIWith, scm_anEIWithIndexes,
  1, scm_anEventOutputNames, scm_anEOWith, scm_anEOWithIndexes,
  16, scm_anDataInputNames, scm_anDataInputTypeIds,
  1, scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, nullptr
};

        const CStringDictionary::TStringId FORTE_BIT_AS_WORD::scm_anInternalsNames[] = {g_nStringIdc1};
        const CStringDictionary::TStringId FORTE_BIT_AS_WORD::scm_anInternalsTypeIds[] = {g_nStringIdWORD};
        const SInternalVarsInformation FORTE_BIT_AS_WORD::scm_stInternalVars = {1, scm_anInternalsNames, scm_anInternalsTypeIds};

void FORTE_BIT_AS_WORD::setInitialValues() {
  st_c1().fromString("16#8000");
}
void FORTE_BIT_AS_WORD::alg_REQ(void) {
  if(st_in15()) {
  	st_Out() = st_c1();
  }
  else {
  	st_Out() = 0;
  }
  st_Out().partial<CIEC_BOOL,0>() = st_in0();
  st_Out().partial<CIEC_BOOL,1>() = st_in1();
  st_Out().partial<CIEC_BOOL,2>() = st_in2();
  st_Out().partial<CIEC_BOOL,3>() = st_in3();
  st_Out().partial<CIEC_BOOL,4>() = st_in4();
  st_Out().partial<CIEC_BOOL,5>() = st_in5();
  st_Out().partial<CIEC_BOOL,6>() = st_in6();
  st_Out().partial<CIEC_BOOL,7>() = st_in7();
  st_Out().partial<CIEC_BOOL,8>() = st_in8();
  st_Out().partial<CIEC_BOOL,9>() = st_in9();
  st_Out().partial<CIEC_BOOL,10>() = st_in10();
  st_Out().partial<CIEC_BOOL,11>() = st_in11();
  st_Out().partial<CIEC_BOOL,12>() = st_in12();
  st_Out().partial<CIEC_BOOL,13>() = st_in13();
  st_Out().partial<CIEC_BOOL,14>() = st_in14();
}


