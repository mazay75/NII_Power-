/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: arrPowerREALx12
 *** Description: Simple FB with one algorithm
 *** Version:
***     1.0: 2025-09-16/ivan -  - 
 *************************************************************************/

#include "arrPowerREALx12.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "arrPowerREALx12_gen.cpp"
#endif


DEFINE_FIRMWARE_FB(FORTE_arrPowerREALx12, g_nStringIdarrPowerREALx12)

const CStringDictionary::TStringId FORTE_arrPowerREALx12::scm_anDataInputNames[] = {g_nStringIdr0, g_nStringIdr1, g_nStringIdr2, g_nStringIdr3, g_nStringIdr4, g_nStringIdr5, g_nStringIdr6, g_nStringIdr7, g_nStringIdr8, g_nStringIdr9, g_nStringIdr10, g_nStringIdr11};

const CStringDictionary::TStringId FORTE_arrPowerREALx12::scm_anDataInputTypeIds[] = {g_nStringIdREAL, g_nStringIdREAL, g_nStringIdREAL, g_nStringIdREAL, g_nStringIdREAL, g_nStringIdREAL, g_nStringIdREAL, g_nStringIdREAL, g_nStringIdREAL, g_nStringIdREAL, g_nStringIdREAL, g_nStringIdREAL};

const CStringDictionary::TStringId FORTE_arrPowerREALx12::scm_anDataOutputNames[] = {g_nStringIdarrREAL};

const CStringDictionary::TStringId FORTE_arrPowerREALx12::scm_anDataOutputTypeIds[] = {g_nStringIdARRAY, 12, g_nStringIdREAL};

const TDataIOID FORTE_arrPowerREALx12::scm_anEIWith[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 255};
const TForteInt16 FORTE_arrPowerREALx12::scm_anEIWithIndexes[] = {0};
const CStringDictionary::TStringId FORTE_arrPowerREALx12::scm_anEventInputNames[] = {g_nStringIdINIT};

const TDataIOID FORTE_arrPowerREALx12::scm_anEOWith[] = {0, 255};
const TForteInt16 FORTE_arrPowerREALx12::scm_anEOWithIndexes[] = {0};
const CStringDictionary::TStringId FORTE_arrPowerREALx12::scm_anEventOutputNames[] = {g_nStringIdINTO};


const SFBInterfaceSpec FORTE_arrPowerREALx12::scm_stFBInterfaceSpec = {
  1, scm_anEventInputNames, scm_anEIWith, scm_anEIWithIndexes,
  1, scm_anEventOutputNames, scm_anEOWith, scm_anEOWithIndexes,
  12, scm_anDataInputNames, scm_anDataInputTypeIds,
  1, scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, nullptr
};

void FORTE_arrPowerREALx12::setInitialValues() {
}
void FORTE_arrPowerREALx12::alg_REQ(void) {
  st_arrREAL()[0]
   = st_r0();
  st_arrREAL()[1]
   = st_r1();
  st_arrREAL()[2]
   = st_r2();
  st_arrREAL()[3]
   = st_r3();
  st_arrREAL()[4]
   = st_r4();
  st_arrREAL()[5]
   = st_r5();
  st_arrREAL()[6]
   = st_r6();
  st_arrREAL()[7]
   = st_r7();
  st_arrREAL()[8]
   = st_r8();
  st_arrREAL()[9]
   = st_r9();
  st_arrREAL()[10]
   = st_r10();
  st_arrREAL()[11]
   = st_r11();
}


