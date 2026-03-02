/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: UDINT_TO_2WORD
 *** Description: Simple FB with one algorithm
 *** Version:
***     1.0: 2024-11-29/sergdebwork -  - 
 *************************************************************************/

#include "UDINT_TO_2WORD.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "UDINT_TO_2WORD_gen.cpp"
#endif


DEFINE_FIRMWARE_FB(FORTE_UDINT_TO_2WORD, g_nStringIdUDINT_TO_2WORD)

const CStringDictionary::TStringId FORTE_UDINT_TO_2WORD::scm_anDataInputNames[] = {g_nStringIdin};

const CStringDictionary::TStringId FORTE_UDINT_TO_2WORD::scm_anDataInputTypeIds[] = {g_nStringIdUDINT};

const CStringDictionary::TStringId FORTE_UDINT_TO_2WORD::scm_anDataOutputNames[] = {g_nStringIdWORD0, g_nStringIdWORD1};

const CStringDictionary::TStringId FORTE_UDINT_TO_2WORD::scm_anDataOutputTypeIds[] = {g_nStringIdWORD, g_nStringIdWORD};

const TDataIOID FORTE_UDINT_TO_2WORD::scm_anEIWith[] = {0, 255};
const TForteInt16 FORTE_UDINT_TO_2WORD::scm_anEIWithIndexes[] = {0};
const CStringDictionary::TStringId FORTE_UDINT_TO_2WORD::scm_anEventInputNames[] = {g_nStringIdREQ};

const TDataIOID FORTE_UDINT_TO_2WORD::scm_anEOWith[] = {0, 1, 255};
const TForteInt16 FORTE_UDINT_TO_2WORD::scm_anEOWithIndexes[] = {0};
const CStringDictionary::TStringId FORTE_UDINT_TO_2WORD::scm_anEventOutputNames[] = {g_nStringIdCNF};


const SFBInterfaceSpec FORTE_UDINT_TO_2WORD::scm_stFBInterfaceSpec = {
  1, scm_anEventInputNames, scm_anEIWith, scm_anEIWithIndexes,
  1, scm_anEventOutputNames, scm_anEOWith, scm_anEOWithIndexes,
  1, scm_anDataInputNames, scm_anDataInputTypeIds,
  2, scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, nullptr
};

        const CStringDictionary::TStringId FORTE_UDINT_TO_2WORD::scm_anInternalsNames[] = {g_nStringIdk};
        const CStringDictionary::TStringId FORTE_UDINT_TO_2WORD::scm_anInternalsTypeIds[] = {g_nStringIdUDINT};
        const SInternalVarsInformation FORTE_UDINT_TO_2WORD::scm_stInternalVars = {1, scm_anInternalsNames, scm_anInternalsTypeIds};

void FORTE_UDINT_TO_2WORD::setInitialValues() {
  st_k().fromString("16#10000");
}
void FORTE_UDINT_TO_2WORD::alg_REQ(void) {
  st_WORD0() = st_in();
  st_WORD1() = DIV(st_in(), st_k());
}


