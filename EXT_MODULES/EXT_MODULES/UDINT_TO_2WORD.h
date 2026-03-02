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

#ifndef _UDINT_TO_2WORD_H_
#define _UDINT_TO_2WORD_H_

#include "simplefb.h"
#include "forte_udint.h"
#include "forte_word.h"
#include "forte_array_at.h"


class FORTE_UDINT_TO_2WORD: public CSimpleFB {
  DECLARE_FIRMWARE_FB(FORTE_UDINT_TO_2WORD)

private:
  static const CStringDictionary::TStringId scm_anDataInputNames[];
  static const CStringDictionary::TStringId scm_anDataInputTypeIds[];
  
  static const CStringDictionary::TStringId scm_anDataOutputNames[];
  static const CStringDictionary::TStringId scm_anDataOutputTypeIds[];
  
  static const TEventID scm_nEventREQID = 0;
  
   static const TDataIOID scm_anEIWith[];
  static const TForteInt16 scm_anEIWithIndexes[];
  static const CStringDictionary::TStringId scm_anEventInputNames[];
  
  static const TEventID scm_nEventCNFID = 0;
  
   static const TDataIOID scm_anEOWith[]; 
  static const TForteInt16 scm_anEOWithIndexes[];
  static const CStringDictionary::TStringId scm_anEventOutputNames[];
  

  static const SFBInterfaceSpec scm_stFBInterfaceSpec;
static const CStringDictionary::TStringId scm_anInternalsNames[];
static const CStringDictionary::TStringId scm_anInternalsTypeIds[];
static const SInternalVarsInformation scm_stInternalVars;

virtual void setInitialValues();
          CIEC_UDINT &st_in() {
            return *static_cast<CIEC_UDINT*>(getDI(0));
          }
          
  CIEC_WORD &st_WORD0() {
    return *static_cast<CIEC_WORD*>(getDO(0));
  }
  
  CIEC_WORD &st_WORD1() {
    return *static_cast<CIEC_WORD*>(getDO(1));
  }
  
  CIEC_UDINT &st_k() {
    return *static_cast<CIEC_UDINT*>(getVarInternal(0));
  }
  

  void alg_REQ(void);

  FORTE_BASIC_FB_DATA_ARRAY(1, 1, 2, 1, 0);

public:
  FORTE_UDINT_TO_2WORD(CStringDictionary::TStringId pa_nInstanceNameId, CResource *pa_poSrcRes) :
       CSimpleFB(pa_poSrcRes, &scm_stFBInterfaceSpec, pa_nInstanceNameId, &scm_stInternalVars, m_anFBConnData, m_anFBVarsData) {
  };

  virtual ~FORTE_UDINT_TO_2WORD() = default;
};

#endif // _UDINT_TO_2WORD_H_


