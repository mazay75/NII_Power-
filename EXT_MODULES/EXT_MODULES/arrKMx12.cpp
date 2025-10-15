/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: arrKMx12
 *** Description: Simple FB with one algorithm
 *** Version:
***     1.0: 2025-09-18/ivan -  - 
 *************************************************************************/

#include "arrKMx12.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "arrKMx12_gen.cpp"
#endif


DEFINE_FIRMWARE_FB(FORTE_arrKMx12, g_nStringIdarrKMx12)

const CStringDictionary::TStringId FORTE_arrKMx12::scm_anDataInputNames[] = {g_nStringIdarrKM};

const CStringDictionary::TStringId FORTE_arrKMx12::scm_anDataInputTypeIds[] = {g_nStringIdARRAY, 11, g_nStringIdBOOL};

const CStringDictionary::TStringId FORTE_arrKMx12::scm_anDataOutputNames[] = {g_nStringIdKM1, g_nStringIdKM2, g_nStringIdKM3, g_nStringIdKM4, g_nStringIdKM5, g_nStringIdKM6, g_nStringIdKM7, g_nStringIdKM8, g_nStringIdKM9, g_nStringIdKM10, g_nStringIdKM11};

const CStringDictionary::TStringId FORTE_arrKMx12::scm_anDataOutputTypeIds[] = {g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL};

const TDataIOID FORTE_arrKMx12::scm_anEIWith[] = {0, 255};
const TForteInt16 FORTE_arrKMx12::scm_anEIWithIndexes[] = {0};
const CStringDictionary::TStringId FORTE_arrKMx12::scm_anEventInputNames[] = {g_nStringIdREQ};

const TDataIOID FORTE_arrKMx12::scm_anEOWith[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 255};
const TForteInt16 FORTE_arrKMx12::scm_anEOWithIndexes[] = {0};
const CStringDictionary::TStringId FORTE_arrKMx12::scm_anEventOutputNames[] = {g_nStringIdCNF};


const SFBInterfaceSpec FORTE_arrKMx12::scm_stFBInterfaceSpec = {
  1, scm_anEventInputNames, scm_anEIWith, scm_anEIWithIndexes,
  1, scm_anEventOutputNames, scm_anEOWith, scm_anEOWithIndexes,
  1, scm_anDataInputNames, scm_anDataInputTypeIds,
  11, scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, nullptr
};

void FORTE_arrKMx12::setInitialValues() {
}
void FORTE_arrKMx12::alg_REQ(void) {
  st_KM1() = st_arrKM()[0]
  ;
  st_KM2() = st_arrKM()[1]
  ;
  st_KM3() = st_arrKM()[2]
  ;
  st_KM4() = st_arrKM()[3]
  ;
  st_KM5() = st_arrKM()[4]
  ;
  st_KM6() = st_arrKM()[5]
  ;
  st_KM7() = st_arrKM()[6]
  ;
  st_KM8() = st_arrKM()[7]
  ;
  st_KM9() = st_arrKM()[8]
  ;
  st_KM10() = st_arrKM()[9]
  ;
  st_KM11() = st_arrKM()[10]
  ;
}


