/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: FB_ControlSup
 *** Description: Simple FB with one algorithm
 *** Version:
***     1.0: 2025-10-09/sergdeb -  - 
 *************************************************************************/

#ifndef _FB_CONTROLSUP_H_
#define _FB_CONTROLSUP_H_

#include "simplefb.h"
#include "forte_bool.h"
#include "forte_uint.h"
#include "forte_array_at.h"


class FORTE_FB_ControlSup: public CSimpleFB {
  DECLARE_FIRMWARE_FB(FORTE_FB_ControlSup)

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
          CIEC_BOOL &st_xWork() {
            return *static_cast<CIEC_BOOL*>(getDI(0));
          }
          
          CIEC_BOOL &st_xStatusDamp1() {
            return *static_cast<CIEC_BOOL*>(getDI(1));
          }
          
          CIEC_BOOL &st_xStatusFan1() {
            return *static_cast<CIEC_BOOL*>(getDI(2));
          }
          
          CIEC_BOOL &st_xStatusTEN1() {
            return *static_cast<CIEC_BOOL*>(getDI(3));
          }
          
          CIEC_BOOL &st_xAlarmDamp1() {
            return *static_cast<CIEC_BOOL*>(getDI(4));
          }
          
          CIEC_BOOL &st_xAlarmFan1() {
            return *static_cast<CIEC_BOOL*>(getDI(5));
          }
          
          CIEC_BOOL &st_xAlarmTEN1() {
            return *static_cast<CIEC_BOOL*>(getDI(6));
          }
          
  CIEC_BOOL &st_xDamp1() {
    return *static_cast<CIEC_BOOL*>(getDO(0));
  }
  
  CIEC_BOOL &st_xFan1() {
    return *static_cast<CIEC_BOOL*>(getDO(1));
  }
  
  CIEC_BOOL &st_xTEN1() {
    return *static_cast<CIEC_BOOL*>(getDO(2));
  }
  
  CIEC_UINT &st_STATE() {
    return *static_cast<CIEC_UINT*>(getDO(3));
  }
  
  CIEC_UINT &st_State() {
    return *static_cast<CIEC_UINT*>(getVarInternal(0));
  }
  

  void alg_REQ(void);

  FORTE_BASIC_FB_DATA_ARRAY(1, 7, 4, 1, 0);

public:
  FORTE_FB_ControlSup(CStringDictionary::TStringId pa_nInstanceNameId, CResource *pa_poSrcRes) :
       CSimpleFB(pa_poSrcRes, &scm_stFBInterfaceSpec, pa_nInstanceNameId, &scm_stInternalVars, m_anFBConnData, m_anFBVarsData) {
  };

  virtual ~FORTE_FB_ControlSup() = default;
};

#endif // _FB_CONTROLSUP_H_


