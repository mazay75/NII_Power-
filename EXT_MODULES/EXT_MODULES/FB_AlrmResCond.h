/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: FB_AlrmResCond
 *** Description: Simple FB with one algorithm
 *** Version:
***     1.0: 2024-12-02/sergdebwork -  - 
 *************************************************************************/

#ifndef _FB_ALRMRESCOND_H_
#define _FB_ALRMRESCOND_H_

#include "simplefb.h"
#include "forte_bool.h"
#include "forte_word.h"
#include "forte_array_at.h"


class FORTE_FB_AlrmResCond: public CSimpleFB {
  DECLARE_FIRMWARE_FB(FORTE_FB_AlrmResCond)

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
          CIEC_WORD &st_wAlarmReset() {
            return *static_cast<CIEC_WORD*>(getDI(0));
          }
          
  CIEC_BOOL &st_xAlarmReset() {
    return *static_cast<CIEC_BOOL*>(getDO(0));
  }
  

  void alg_REQ(void);

  FORTE_BASIC_FB_DATA_ARRAY(1, 1, 1, 0, 0);

public:
  FORTE_FB_AlrmResCond(CStringDictionary::TStringId pa_nInstanceNameId, CResource *pa_poSrcRes) :
       CSimpleFB(pa_poSrcRes, &scm_stFBInterfaceSpec, pa_nInstanceNameId, nullptr, m_anFBConnData, m_anFBVarsData) {
  };

  virtual ~FORTE_FB_AlrmResCond() = default;
};

#endif // _FB_ALRMRESCOND_H_


