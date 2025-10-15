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

#ifndef _ARRKMX4_H_
#define _ARRKMX4_H_

#include "simplefb.h"
#include "forte_bool.h"
#include "forte_array.h"
#include "forte_array_at.h"


class FORTE_arrKMx4: public CSimpleFB {
  DECLARE_FIRMWARE_FB(FORTE_arrKMx4)

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
          CIEC_BOOL *st_arrKM() {
            return static_cast<CIEC_BOOL*>((*static_cast<CIEC_ARRAY *>(getDI(0)))[0]); //the first element marks the start of the array
          }
          
  CIEC_BOOL &st_KM1() {
    return *static_cast<CIEC_BOOL*>(getDO(0));
  }
  
  CIEC_BOOL &st_KM2() {
    return *static_cast<CIEC_BOOL*>(getDO(1));
  }
  
  CIEC_BOOL &st_KM3() {
    return *static_cast<CIEC_BOOL*>(getDO(2));
  }
  

  void alg_REQ(void);

  FORTE_BASIC_FB_DATA_ARRAY(1, 1, 3, 0, 0);

public:
  FORTE_arrKMx4(CStringDictionary::TStringId pa_nInstanceNameId, CResource *pa_poSrcRes) :
       CSimpleFB(pa_poSrcRes, &scm_stFBInterfaceSpec, pa_nInstanceNameId, nullptr, m_anFBConnData, m_anFBVarsData) {
  };

  virtual ~FORTE_arrKMx4() = default;
};

#endif // _ARRKMX4_H_


