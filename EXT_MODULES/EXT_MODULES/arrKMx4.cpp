/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: arrKMx4
 *** Description: Simple FB with one algorithm
 *** Version:
***     1.0: 2025-09-18/ivan -  - 
 *************************************************************************/

#include "arrKMx4.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "arrKMx4_gen.cpp"
#endif


DEFINE_FIRMWARE_FB(FORTE_arrKMx4, g_nStringIdarrKMx4)

const CStringDictionary::TStringId FORTE_arrKMx4::scm_anDataInputNames[] = {g_nStringIdarrKM};

const CStringDictionary::TStringId FORTE_arrKMx4::scm_anDataInputTypeIds[] = {g_nStringIdARRAY, 3, g_nStringIdBOOL};

const CStringDictionary::TStringId FORTE_arrKMx4::scm_anDataOutputNames[] = {g_nStringIdKM1, g_nStringIdKM2, g_nStringIdKM3};

const CStringDictionary::TStringId FORTE_arrKMx4::scm_anDataOutputTypeIds[] = {g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL};

const TDataIOID FORTE_arrKMx4::scm_anEIWith[] = {0, 255};
const TForteInt16 FORTE_arrKMx4::scm_anEIWithIndexes[] = {0};
const CStringDictionary::TStringId FORTE_arrKMx4::scm_anEventInputNames[] = {g_nStringIdREQ};

const TDataIOID FORTE_arrKMx4::scm_anEOWith[] = {0, 1, 2, 255};
const TForteInt16 FORTE_arrKMx4::scm_anEOWithIndexes[] = {0};
const CStringDictionary::TStringId FORTE_arrKMx4::scm_anEventOutputNames[] = {g_nStringIdCNF};


const SFBInterfaceSpec FORTE_arrKMx4::scm_stFBInterfaceSpec = {
  1, scm_anEventInputNames, scm_anEIWith, scm_anEIWithIndexes,
  1, scm_anEventOutputNames, scm_anEOWith, scm_anEOWithIndexes,
  1, scm_anDataInputNames, scm_anDataInputTypeIds,
  3, scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, nullptr
};

void FORTE_arrKMx4::setInitialValues() {
}
void FORTE_arrKMx4::alg_REQ(void) {
  st_KM1() = st_arrKM()[0]
  ;
  st_KM2() = st_arrKM()[1]
  ;
  st_KM3() = st_arrKM()[2]
  ;
}


