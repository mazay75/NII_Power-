/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: FB_Hysteresis
 *** Description: Simple FB with one algorithm
 *** Version:
***     1.0: 2025-03-10/ivan -  - 
 *************************************************************************/

#ifndef _FB_HYSTERESIS_H_
#define _FB_HYSTERESIS_H_

#include "simplefb.h"
#include "forte_bool.h"
#include "forte_real.h"
#include "forte_array_at.h"


class FORTE_FB_Hysteresis: public CSimpleFB {
  DECLARE_FIRMWARE_FB(FORTE_FB_Hysteresis)

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
virtual void setInitialValues();
          CIEC_REAL &st_Value() {
            return *static_cast<CIEC_REAL*>(getDI(0));
          }
          
          CIEC_REAL &st_Val_OFF() {
            return *static_cast<CIEC_REAL*>(getDI(1));
          }
          
          CIEC_REAL &st_Val_ON() {
            return *static_cast<CIEC_REAL*>(getDI(2));
          }
          
  CIEC_BOOL &st_Q() {
    return *static_cast<CIEC_BOOL*>(getDO(0));
  }
  

  void alg_REQ(void);

  FORTE_BASIC_FB_DATA_ARRAY(1, 3, 1, 0, 0);

public:
  FORTE_FB_Hysteresis(CStringDictionary::TStringId pa_nInstanceNameId, CResource *pa_poSrcRes) :
       CSimpleFB(pa_poSrcRes, &scm_stFBInterfaceSpec, pa_nInstanceNameId, nullptr, m_anFBConnData, m_anFBVarsData) {
  };

  virtual ~FORTE_FB_Hysteresis() = default;
};

#endif // _FB_HYSTERESIS_H_


