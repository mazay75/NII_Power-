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

#ifndef _BIT_AS_WORD_H_
#define _BIT_AS_WORD_H_

#include "simplefb.h"
#include "forte_bool.h"
#include "forte_word.h"
#include "forte_array_at.h"


class FORTE_BIT_AS_WORD: public CSimpleFB {
  DECLARE_FIRMWARE_FB(FORTE_BIT_AS_WORD)

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
          CIEC_BOOL &st_in0() {
            return *static_cast<CIEC_BOOL*>(getDI(0));
          }
          
          CIEC_BOOL &st_in1() {
            return *static_cast<CIEC_BOOL*>(getDI(1));
          }
          
          CIEC_BOOL &st_in2() {
            return *static_cast<CIEC_BOOL*>(getDI(2));
          }
          
          CIEC_BOOL &st_in3() {
            return *static_cast<CIEC_BOOL*>(getDI(3));
          }
          
          CIEC_BOOL &st_in4() {
            return *static_cast<CIEC_BOOL*>(getDI(4));
          }
          
          CIEC_BOOL &st_in5() {
            return *static_cast<CIEC_BOOL*>(getDI(5));
          }
          
          CIEC_BOOL &st_in6() {
            return *static_cast<CIEC_BOOL*>(getDI(6));
          }
          
          CIEC_BOOL &st_in7() {
            return *static_cast<CIEC_BOOL*>(getDI(7));
          }
          
          CIEC_BOOL &st_in8() {
            return *static_cast<CIEC_BOOL*>(getDI(8));
          }
          
          CIEC_BOOL &st_in9() {
            return *static_cast<CIEC_BOOL*>(getDI(9));
          }
          
          CIEC_BOOL &st_in10() {
            return *static_cast<CIEC_BOOL*>(getDI(10));
          }
          
          CIEC_BOOL &st_in11() {
            return *static_cast<CIEC_BOOL*>(getDI(11));
          }
          
          CIEC_BOOL &st_in12() {
            return *static_cast<CIEC_BOOL*>(getDI(12));
          }
          
          CIEC_BOOL &st_in13() {
            return *static_cast<CIEC_BOOL*>(getDI(13));
          }
          
          CIEC_BOOL &st_in14() {
            return *static_cast<CIEC_BOOL*>(getDI(14));
          }
          
          CIEC_BOOL &st_in15() {
            return *static_cast<CIEC_BOOL*>(getDI(15));
          }
          
  CIEC_WORD &st_Out() {
    return *static_cast<CIEC_WORD*>(getDO(0));
  }
  
  CIEC_WORD &st_c1() {
    return *static_cast<CIEC_WORD*>(getVarInternal(0));
  }
  

  void alg_REQ(void);

  FORTE_BASIC_FB_DATA_ARRAY(1, 16, 1, 1, 0);

public:
  FORTE_BIT_AS_WORD(CStringDictionary::TStringId pa_nInstanceNameId, CResource *pa_poSrcRes) :
       CSimpleFB(pa_poSrcRes, &scm_stFBInterfaceSpec, pa_nInstanceNameId, &scm_stInternalVars, m_anFBConnData, m_anFBVarsData) {
  };

  virtual ~FORTE_BIT_AS_WORD() = default;
};

#endif // _BIT_AS_WORD_H_


