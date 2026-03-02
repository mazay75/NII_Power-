/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: FB_WorkTEN
 *** Description: Simple FB with one algorithm
 *** Version:
***     1.0: 2025-09-26/SERGSYSTH -  - 
 *************************************************************************/

#ifndef _FB_WORKTEN_H_
#define _FB_WORKTEN_H_

#include "simplefb.h"
#include "forte_bool.h"
#include "forte_real.h"
#include "forte_array_at.h"


class FORTE_FB_WorkTEN: public CSimpleFB {
  DECLARE_FIRMWARE_FB(FORTE_FB_WorkTEN)

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
          CIEC_BOOL &st_xAuto() {
            return *static_cast<CIEC_BOOL*>(getDI(0));
          }
          
          CIEC_BOOL &st_xStart() {
            return *static_cast<CIEC_BOOL*>(getDI(1));
          }
          
          CIEC_BOOL &st_xStatusDPD() {
            return *static_cast<CIEC_BOOL*>(getDI(2));
          }
          
          CIEC_BOOL &st_xStatusKM_Fan() {
            return *static_cast<CIEC_BOOL*>(getDI(3));
          }
          
          CIEC_BOOL &st_xStatusDamp() {
            return *static_cast<CIEC_BOOL*>(getDI(4));
          }
          
          CIEC_BOOL &st_xStatusQF_TEN() {
            return *static_cast<CIEC_BOOL*>(getDI(5));
          }
          
          CIEC_BOOL &st_xStatusTK_TEN() {
            return *static_cast<CIEC_BOOL*>(getDI(6));
          }
          
          CIEC_BOOL &st_xAlarmTEN() {
            return *static_cast<CIEC_BOOL*>(getDI(7));
          }
          
          CIEC_REAL &st_rTE_Sup() {
            return *static_cast<CIEC_REAL*>(getDI(8));
          }
          
  CIEC_BOOL &st_xHeatingBan() {
    return *static_cast<CIEC_BOOL*>(getDO(0));
  }
  
  CIEC_BOOL &st_xWork_TEN() {
    return *static_cast<CIEC_BOOL*>(getDO(1));
  }
  
  CIEC_BOOL &st_xFlag1() {
    return *static_cast<CIEC_BOOL*>(getVarInternal(0));
  }
  
  CIEC_BOOL &st_xFlag2() {
    return *static_cast<CIEC_BOOL*>(getVarInternal(1));
  }
  

  void alg_REQ(void);

  FORTE_BASIC_FB_DATA_ARRAY(1, 9, 2, 2, 0);

public:
  FORTE_FB_WorkTEN(CStringDictionary::TStringId pa_nInstanceNameId, CResource *pa_poSrcRes) :
       CSimpleFB(pa_poSrcRes, &scm_stFBInterfaceSpec, pa_nInstanceNameId, &scm_stInternalVars, m_anFBConnData, m_anFBVarsData) {
  };

  virtual ~FORTE_FB_WorkTEN() = default;
};

#endif // _FB_WORKTEN_H_


