/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: arrPowerREALx5
 *** Description: Simple FB with one algorithm
 *** Version:
***     1.0: 2025-09-16/ivan -  - 
 *************************************************************************/

#include "arrPowerREALx5.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "arrPowerREALx5_gen.cpp"
#endif


DEFINE_FIRMWARE_FB(FORTE_arrPowerREALx5, g_nStringIdarrPowerREALx5)

const CStringDictionary::TStringId FORTE_arrPowerREALx5::scm_anDataInputNames[] = {g_nStringIdr0, g_nStringIdr1, g_nStringIdr2, g_nStringIdr3};

const CStringDictionary::TStringId FORTE_arrPowerREALx5::scm_anDataInputTypeIds[] = {g_nStringIdREAL, g_nStringIdREAL, g_nStringIdREAL, g_nStringIdREAL};

const CStringDictionary::TStringId FORTE_arrPowerREALx5::scm_anDataOutputNames[] = {g_nStringIdarrREAL};

const CStringDictionary::TStringId FORTE_arrPowerREALx5::scm_anDataOutputTypeIds[] = {g_nStringIdARRAY, 4, g_nStringIdREAL};

const TDataIOID FORTE_arrPowerREALx5::scm_anEIWith[] = {0, 1, 2, 3, 255};
const TForteInt16 FORTE_arrPowerREALx5::scm_anEIWithIndexes[] = {0};
const CStringDictionary::TStringId FORTE_arrPowerREALx5::scm_anEventInputNames[] = {g_nStringIdINIT};

const TDataIOID FORTE_arrPowerREALx5::scm_anEOWith[] = {0, 255};
const TForteInt16 FORTE_arrPowerREALx5::scm_anEOWithIndexes[] = {0};
const CStringDictionary::TStringId FORTE_arrPowerREALx5::scm_anEventOutputNames[] = {g_nStringIdINTO};


const SFBInterfaceSpec FORTE_arrPowerREALx5::scm_stFBInterfaceSpec = {
  1, scm_anEventInputNames, scm_anEIWith, scm_anEIWithIndexes,
  1, scm_anEventOutputNames, scm_anEOWith, scm_anEOWithIndexes,
  4, scm_anDataInputNames, scm_anDataInputTypeIds,
  1, scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, nullptr
};

void FORTE_arrPowerREALx5::setInitialValues() {
}
void FORTE_arrPowerREALx5::alg_REQ(void) {
  st_arrREAL()[0]
   = st_r0();
  st_arrREAL()[1]
   = st_r1();
  st_arrREAL()[2]
   = st_r2();
  st_arrREAL()[3]
   = st_r3();
}


