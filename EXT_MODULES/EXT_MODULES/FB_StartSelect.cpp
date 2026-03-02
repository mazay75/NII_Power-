/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: FB_StartSelect
 *** Description: Simple FB with one algorithm
 *** Version:
***     1.0: 2024-11-27/sergdebwork -  - 
 *************************************************************************/

#include "FB_StartSelect.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "FB_StartSelect_gen.cpp"
#endif


DEFINE_FIRMWARE_FB(FORTE_FB_StartSelect, g_nStringIdFB_StartSelect)

const CStringDictionary::TStringId FORTE_FB_StartSelect::scm_anDataInputNames[] = {g_nStringIdinCmd};

const CStringDictionary::TStringId FORTE_FB_StartSelect::scm_anDataInputTypeIds[] = {g_nStringIdINT};

const CStringDictionary::TStringId FORTE_FB_StartSelect::scm_anDataOutputNames[] = {g_nStringIdout1, g_nStringIdout2, g_nStringIdout3, g_nStringIdout4, g_nStringIdout5};

const CStringDictionary::TStringId FORTE_FB_StartSelect::scm_anDataOutputTypeIds[] = {g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL};

const TDataIOID FORTE_FB_StartSelect::scm_anEIWith[] = {0, 255};
const TForteInt16 FORTE_FB_StartSelect::scm_anEIWithIndexes[] = {0};
const CStringDictionary::TStringId FORTE_FB_StartSelect::scm_anEventInputNames[] = {g_nStringIdREQ};

const TDataIOID FORTE_FB_StartSelect::scm_anEOWith[] = {0, 1, 2, 3, 4, 255};
const TForteInt16 FORTE_FB_StartSelect::scm_anEOWithIndexes[] = {0};
const CStringDictionary::TStringId FORTE_FB_StartSelect::scm_anEventOutputNames[] = {g_nStringIdCNF};


const SFBInterfaceSpec FORTE_FB_StartSelect::scm_stFBInterfaceSpec = {
  1, scm_anEventInputNames, scm_anEIWith, scm_anEIWithIndexes,
  1, scm_anEventOutputNames, scm_anEOWith, scm_anEOWithIndexes,
  1, scm_anDataInputNames, scm_anDataInputTypeIds,
  5, scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, nullptr
};

void FORTE_FB_StartSelect::setInitialValues() {
}
void FORTE_FB_StartSelect::alg_REQ(void) {
  switch (st_inCmd()) {
  	case 1:
  		st_out1() = true;
  		break;
  	case 2:
  		st_out2() = true;
  		break;
  	case 3:
  		st_out3() = true;
  		break;
  	case 4:
  		st_out4() = true;
  		break;
  	case 5:
  		st_out5() = true;
  		break;
  	default:
  		st_out1() = false;
  		st_out2() = false;
  		st_out3() = false;
  		st_out4() = false;
  		st_out5() = false;
  		break;
  }
}


