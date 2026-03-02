/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: FB_CT_EH
 *** Description: Simple FB with one algorithm
 *** Version:
***     1.0: 2024-11-29/sergdebwork -  - 
 *************************************************************************/

#ifndef _FB_CT_EH_H_
#define _FB_CT_EH_H_

#include "simplefb.h"
#include "forte_bool.h"
#include "forte_udint.h"
#include "forte_array_at.h"


class FORTE_FB_CT_EH: public CSimpleFB {
  DECLARE_FIRMWARE_FB(FORTE_FB_CT_EH)

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
          CIEC_BOOL &st_inCT() {
            return *static_cast<CIEC_BOOL*>(getDI(0));
          }
          
          CIEC_UDINT &st_initVal() {
            return *static_cast<CIEC_UDINT*>(getDI(1));
          }
          
          CIEC_BOOL &st_ReSet() {
            return *static_cast<CIEC_BOOL*>(getDI(2));
          }
          
  CIEC_UDINT &st_outEH() {
    return *static_cast<CIEC_UDINT*>(getDO(0));
  }
  
  CIEC_BOOL &st_clk() {
    return *static_cast<CIEC_BOOL*>(getDO(1));
  }
  
  CIEC_UDINT &st_zero() {
    return *static_cast<CIEC_UDINT*>(getVarInternal(0));
  }
  
  CIEC_UDINT &st_one() {
    return *static_cast<CIEC_UDINT*>(getVarInternal(1));
  }
  
  CIEC_BOOL &st_FIRST() {
    return *static_cast<CIEC_BOOL*>(getVarInternal(2));
  }
  
  CIEC_BOOL &st_flag() {
    return *static_cast<CIEC_BOOL*>(getVarInternal(3));
  }
  

  void alg_REQ(void);

  FORTE_BASIC_FB_DATA_ARRAY(1, 3, 2, 4, 0);

public:
  FORTE_FB_CT_EH(CStringDictionary::TStringId pa_nInstanceNameId, CResource *pa_poSrcRes) :
       CSimpleFB(pa_poSrcRes, &scm_stFBInterfaceSpec, pa_nInstanceNameId, &scm_stInternalVars, m_anFBConnData, m_anFBVarsData) {
  };

  virtual ~FORTE_FB_CT_EH() = default;
};

#endif // _FB_CT_EH_H_


