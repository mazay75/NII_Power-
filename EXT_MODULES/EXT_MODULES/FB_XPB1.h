/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: FB_XPB1
 *** Description: Simple FB with one algorithm
 *** Version:
***     1.0: 2024-11-17/sergdebwork -  - 
 *************************************************************************/

#ifndef _FB_XPB1_H_
#define _FB_XPB1_H_

#include "simplefb.h"
#include "forte_bool.h"
#include "forte_array_at.h"


class FORTE_FB_XPB1: public CSimpleFB {
  DECLARE_FIRMWARE_FB(FORTE_FB_XPB1)

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
          CIEC_BOOL &st_xAuto() {
            return *static_cast<CIEC_BOOL*>(getDI(0));
          }
          
          CIEC_BOOL &st_xAlarmDPD() {
            return *static_cast<CIEC_BOOL*>(getDI(1));
          }
          
          CIEC_BOOL &st_xAlarmKM() {
            return *static_cast<CIEC_BOOL*>(getDI(2));
          }
          
          CIEC_BOOL &st_xAlarmQF() {
            return *static_cast<CIEC_BOOL*>(getDI(3));
          }
          
          CIEC_BOOL &st_xAlarmTK() {
            return *static_cast<CIEC_BOOL*>(getDI(4));
          }
          
          CIEC_BOOL &st_xAlarmFC() {
            return *static_cast<CIEC_BOOL*>(getDI(5));
          }
          
  CIEC_BOOL &st_xAlarmFan() {
    return *static_cast<CIEC_BOOL*>(getDO(0));
  }
  

  void alg_REQ(void);

  FORTE_BASIC_FB_DATA_ARRAY(1, 6, 1, 0, 0);

public:
  FORTE_FB_XPB1(CStringDictionary::TStringId pa_nInstanceNameId, CResource *pa_poSrcRes) :
       CSimpleFB(pa_poSrcRes, &scm_stFBInterfaceSpec, pa_nInstanceNameId, nullptr, m_anFBConnData, m_anFBVarsData) {
  };

  virtual ~FORTE_FB_XPB1() = default;
};

#endif // _FB_XPB1_H_


