/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: FB_FanOfShield
 *** Description: Simple FB with one algorithm
 *** Version:
***     1.0: 2025-09-21/SERGSYSTH -  - 
 *************************************************************************/

#ifndef _FB_FANOFSHIELD_H_
#define _FB_FANOFSHIELD_H_

#include "simplefb.h"
#include "forte_bool.h"
#include "forte_array_at.h"


class FORTE_FB_FanOfShield: public CSimpleFB {
  DECLARE_FIRMWARE_FB(FORTE_FB_FanOfShield)

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
          
          CIEC_BOOL &st_xTS_Shield() {
            return *static_cast<CIEC_BOOL*>(getDI(1));
          }
          
  CIEC_BOOL &st_xFanShield() {
    return *static_cast<CIEC_BOOL*>(getDO(0));
  }
  
  CIEC_BOOL &st_INTERNALVAR1() {
    return *static_cast<CIEC_BOOL*>(getVarInternal(0));
  }
  

  void alg_REQ(void);

  FORTE_BASIC_FB_DATA_ARRAY(1, 2, 1, 1, 0);

public:
  FORTE_FB_FanOfShield(CStringDictionary::TStringId pa_nInstanceNameId, CResource *pa_poSrcRes) :
       CSimpleFB(pa_poSrcRes, &scm_stFBInterfaceSpec, pa_nInstanceNameId, &scm_stInternalVars, m_anFBConnData, m_anFBVarsData) {
  };

  virtual ~FORTE_FB_FanOfShield() = default;
};

#endif // _FB_FANOFSHIELD_H_


