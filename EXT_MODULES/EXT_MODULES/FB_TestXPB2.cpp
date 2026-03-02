/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: FB_TestXPB2
 *** Description: Simple FB with one algorithm
 *** Version:
***     1.0: 2024-12-02/sergdebwork -  - 
 *************************************************************************/

#include "FB_TestXPB2.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "FB_TestXPB2_gen.cpp"
#endif


DEFINE_FIRMWARE_FB(FORTE_FB_TestXPB2, g_nStringIdFB_TestXPB2)

const CStringDictionary::TStringId FORTE_FB_TestXPB2::scm_anDataInputNames[] = {g_nStringIdwsIn};

const CStringDictionary::TStringId FORTE_FB_TestXPB2::scm_anDataInputTypeIds[] = {g_nStringIdWSTRING};

const CStringDictionary::TStringId FORTE_FB_TestXPB2::scm_anDataOutputNames[] = {g_nStringIdwsOut};

const CStringDictionary::TStringId FORTE_FB_TestXPB2::scm_anDataOutputTypeIds[] = {g_nStringIdWSTRING};

const TDataIOID FORTE_FB_TestXPB2::scm_anEIWith[] = {0, 255};
const TForteInt16 FORTE_FB_TestXPB2::scm_anEIWithIndexes[] = {0};
const CStringDictionary::TStringId FORTE_FB_TestXPB2::scm_anEventInputNames[] = {g_nStringIdREQ};

const TDataIOID FORTE_FB_TestXPB2::scm_anEOWith[] = {0, 255};
const TForteInt16 FORTE_FB_TestXPB2::scm_anEOWithIndexes[] = {0};
const CStringDictionary::TStringId FORTE_FB_TestXPB2::scm_anEventOutputNames[] = {g_nStringIdCNF};


const SFBInterfaceSpec FORTE_FB_TestXPB2::scm_stFBInterfaceSpec = {
  1, scm_anEventInputNames, scm_anEIWith, scm_anEIWithIndexes,
  1, scm_anEventOutputNames, scm_anEOWith, scm_anEOWithIndexes,
  1, scm_anDataInputNames, scm_anDataInputTypeIds,
  1, scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, nullptr
};

void FORTE_FB_TestXPB2::setInitialValues() {
}
void FORTE_FB_TestXPB2::alg_REQ(void) {
  if((st_wsIn() == "true")) {
  	st_wsOut() = "xRemote";
  }
  else {
  	st_wsOut() = 0;
  }
}


