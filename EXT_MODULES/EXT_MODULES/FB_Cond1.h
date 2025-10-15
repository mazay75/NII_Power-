/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: FB_Cond1
 *** Description: Simple FB with one algorithm
 *** Version:
***     1.0: 2025-09-27/sergdeb -  - 
 *************************************************************************/

#ifndef _FB_COND1_H_
#define _FB_COND1_H_

#include "simplefb.h"
#include "forte_bool.h"
#include "forte_int.h"
#include "forte_real.h"
#include "forte_uint.h"
#include "forte_array_at.h"


class FORTE_FB_Cond1: public CSimpleFB {
  DECLARE_FIRMWARE_FB(FORTE_FB_Cond1)

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
          CIEC_BOOL &st_xStart() {
            return *static_cast<CIEC_BOOL*>(getDI(0));
          }
          
          CIEC_REAL &st_rTsup() {
            return *static_cast<CIEC_REAL*>(getDI(1));
          }
          
          CIEC_REAL &st_SP_Tsup() {
            return *static_cast<CIEC_REAL*>(getDI(2));
          }
          
          CIEC_UINT &st_SP_dT() {
            return *static_cast<CIEC_UINT*>(getDI(3));
          }
          
  CIEC_BOOL &st_xStatusCond1() {
    return *static_cast<CIEC_BOOL*>(getDO(0));
  }
  
  CIEC_BOOL &st_xStage1() {
    return *static_cast<CIEC_BOOL*>(getDO(1));
  }
  
  CIEC_BOOL &st_xStage2() {
    return *static_cast<CIEC_BOOL*>(getDO(2));
  }
  
  CIEC_INT &st_STATE() {
    return *static_cast<CIEC_INT*>(getDO(3));
  }
  
  CIEC_INT &st_StateBlock() {
    return *static_cast<CIEC_INT*>(getVarInternal(0));
  }
  

  void alg_REQ(void);

  FORTE_BASIC_FB_DATA_ARRAY(1, 4, 4, 1, 0);

public:
  FORTE_FB_Cond1(CStringDictionary::TStringId pa_nInstanceNameId, CResource *pa_poSrcRes) :
       CSimpleFB(pa_poSrcRes, &scm_stFBInterfaceSpec, pa_nInstanceNameId, &scm_stInternalVars, m_anFBConnData, m_anFBVarsData) {
  };

  virtual ~FORTE_FB_Cond1() = default;
};

#endif // _FB_COND1_H_


