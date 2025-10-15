/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: arrPowerREALx12
 *** Description: Simple FB with one algorithm
 *** Version:
***     1.0: 2025-09-16/ivan -  - 
 *************************************************************************/

#ifndef _ARRPOWERREALX12_H_
#define _ARRPOWERREALX12_H_

#include "simplefb.h"
#include "forte_real.h"
#include "forte_array.h"
#include "forte_array_at.h"


class FORTE_arrPowerREALx12: public CSimpleFB {
  DECLARE_FIRMWARE_FB(FORTE_arrPowerREALx12)

private:
  static const CStringDictionary::TStringId scm_anDataInputNames[];
  static const CStringDictionary::TStringId scm_anDataInputTypeIds[];
  
  static const CStringDictionary::TStringId scm_anDataOutputNames[];
  static const CStringDictionary::TStringId scm_anDataOutputTypeIds[];
  
  static const TEventID scm_nEventINITID = 0;
  
   static const TDataIOID scm_anEIWith[];
  static const TForteInt16 scm_anEIWithIndexes[];
  static const CStringDictionary::TStringId scm_anEventInputNames[];
  
  static const TEventID scm_nEventINTOID = 0;
  
   static const TDataIOID scm_anEOWith[]; 
  static const TForteInt16 scm_anEOWithIndexes[];
  static const CStringDictionary::TStringId scm_anEventOutputNames[];
  

  static const SFBInterfaceSpec scm_stFBInterfaceSpec;
virtual void setInitialValues();
          CIEC_REAL &st_r0() {
            return *static_cast<CIEC_REAL*>(getDI(0));
          }
          
          CIEC_REAL &st_r1() {
            return *static_cast<CIEC_REAL*>(getDI(1));
          }
          
          CIEC_REAL &st_r2() {
            return *static_cast<CIEC_REAL*>(getDI(2));
          }
          
          CIEC_REAL &st_r3() {
            return *static_cast<CIEC_REAL*>(getDI(3));
          }
          
          CIEC_REAL &st_r4() {
            return *static_cast<CIEC_REAL*>(getDI(4));
          }
          
          CIEC_REAL &st_r5() {
            return *static_cast<CIEC_REAL*>(getDI(5));
          }
          
          CIEC_REAL &st_r6() {
            return *static_cast<CIEC_REAL*>(getDI(6));
          }
          
          CIEC_REAL &st_r7() {
            return *static_cast<CIEC_REAL*>(getDI(7));
          }
          
          CIEC_REAL &st_r8() {
            return *static_cast<CIEC_REAL*>(getDI(8));
          }
          
          CIEC_REAL &st_r9() {
            return *static_cast<CIEC_REAL*>(getDI(9));
          }
          
          CIEC_REAL &st_r10() {
            return *static_cast<CIEC_REAL*>(getDI(10));
          }
          
          CIEC_REAL &st_r11() {
            return *static_cast<CIEC_REAL*>(getDI(11));
          }
          
  CIEC_REAL *st_arrREAL() {
    return static_cast<CIEC_REAL*>((*static_cast<CIEC_ARRAY *>(getDO(0)))[0]); //the first element marks the start of the array
  }
  

  void alg_REQ(void);

  FORTE_BASIC_FB_DATA_ARRAY(1, 12, 1, 0, 0);

public:
  FORTE_arrPowerREALx12(CStringDictionary::TStringId pa_nInstanceNameId, CResource *pa_poSrcRes) :
       CSimpleFB(pa_poSrcRes, &scm_stFBInterfaceSpec, pa_nInstanceNameId, nullptr, m_anFBConnData, m_anFBVarsData) {
  };

  virtual ~FORTE_arrPowerREALx12() = default;
};

#endif // _ARRPOWERREALX12_H_


