/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: FB_PID
 *** Description: Basic FB with empty ECC
 *** Version:
***     1.0: 2024-11-08/Администратор -  - 
 *************************************************************************/

#ifndef _FB_PID_H_
#define _FB_PID_H_

#include "basicfb.h"
#include "forte_bool.h"
#include "forte_real.h"
#include "forte_array_at.h"


class FORTE_FB_PID: public CBasicFB {
  DECLARE_FIRMWARE_FB(FORTE_FB_PID)

private:
  static const CStringDictionary::TStringId scm_anDataInputNames[];
  static const CStringDictionary::TStringId scm_anDataInputTypeIds[];
  
  static const CStringDictionary::TStringId scm_anDataOutputNames[];
  static const CStringDictionary::TStringId scm_anDataOutputTypeIds[];
  
  static const TEventID scm_nEventINITID = 0;
  static const TEventID scm_nEventREQID = 1;
  static const TEventID scm_nEventRSTID = 2;
  
   static const TDataIOID scm_anEIWith[];
  static const TForteInt16 scm_anEIWithIndexes[];
  static const CStringDictionary::TStringId scm_anEventInputNames[];
  
  static const TEventID scm_nEventINTOID = 0;
  static const TEventID scm_nEventCNFID = 1;
  
   static const TDataIOID scm_anEOWith[]; 
  static const TForteInt16 scm_anEOWithIndexes[];
  static const CStringDictionary::TStringId scm_anEventOutputNames[];
  

  static const SFBInterfaceSpec scm_stFBInterfaceSpec;

static const CStringDictionary::TStringId scm_anInternalsNames[];
static const CStringDictionary::TStringId scm_anInternalsTypeIds[];
static const SInternalVarsInformation scm_stInternalVars;
virtual void setInitialValues();
  CIEC_REAL &st_MV() {
    return *static_cast<CIEC_REAL*>(getDI(0));
  }
  
  CIEC_REAL &st_SP() {
    return *static_cast<CIEC_REAL*>(getDI(1));
  }
  
  CIEC_REAL &st_DZ() {
    return *static_cast<CIEC_REAL*>(getDI(2));
  }
  
  CIEC_REAL &st_Kp() {
    return *static_cast<CIEC_REAL*>(getDI(3));
  }
  
  CIEC_REAL &st_Ti() {
    return *static_cast<CIEC_REAL*>(getDI(4));
  }
  
  CIEC_REAL &st_Td() {
    return *static_cast<CIEC_REAL*>(getDI(5));
  }
  
  CIEC_REAL &st_Interval() {
    return *static_cast<CIEC_REAL*>(getDI(6));
  }
  
  CIEC_REAL &st_LIM_H() {
    return *static_cast<CIEC_REAL*>(getDI(7));
  }
  
  CIEC_REAL &st_LIM_L() {
    return *static_cast<CIEC_REAL*>(getDI(8));
  }
  
  CIEC_BOOL &st_Manual() {
    return *static_cast<CIEC_BOOL*>(getDI(9));
  }
  
  CIEC_REAL &st_Y_Manual() {
    return *static_cast<CIEC_REAL*>(getDI(10));
  }
  
  CIEC_REAL &st_Y() {
    return *static_cast<CIEC_REAL*>(getDO(0));
  }
  
  CIEC_BOOL &st_LIM() {
    return *static_cast<CIEC_BOOL*>(getDO(1));
  }
  
  CIEC_REAL &st_tOutInError() {
    return *static_cast<CIEC_REAL*>(getDO(2));
  }
  
  CIEC_REAL &st_tOutLE() {
    return *static_cast<CIEC_REAL*>(getDO(3));
  }
  
  CIEC_REAL &st_tOutLE2() {
    return *static_cast<CIEC_REAL*>(getDO(4));
  }
  
  CIEC_REAL &st_tOutPp() {
    return *static_cast<CIEC_REAL*>(getDO(5));
  }
  
  CIEC_REAL &st_tOutIp() {
    return *static_cast<CIEC_REAL*>(getDO(6));
  }
  
  CIEC_REAL &st_tOutDp() {
    return *static_cast<CIEC_REAL*>(getDO(7));
  }
  
  CIEC_REAL &st_LAST_ERROR() {
    return *static_cast<CIEC_REAL*>(getVarInternal(0));
  }
  
  CIEC_REAL &st_LAST_ERROR2() {
    return *static_cast<CIEC_REAL*>(getVarInternal(1));
  }
  
  CIEC_REAL &st_INTEGRATION_ACCUM() {
    return *static_cast<CIEC_REAL*>(getVarInternal(2));
  }
  

  void alg_RESET(void);
  void alg_REQ(void);

  static const TForteInt16 scm_nStateSTART = 0;
  static const TForteInt16 scm_nStateINIT = 1;
  static const TForteInt16 scm_nStateREQ = 2;
  static const TForteInt16 scm_nStateRST = 3;
  
  void enterStateSTART(void);
  void enterStateINIT(void);
  void enterStateREQ(void);
  void enterStateRST(void);

  virtual void executeEvent(int pa_nEIID);

  FORTE_BASIC_FB_DATA_ARRAY(2, 11, 8, 3, 0);

public:
  FORTE_FB_PID(CStringDictionary::TStringId pa_nInstanceNameId, CResource *pa_poSrcRes) :
      CBasicFB(pa_poSrcRes, &scm_stFBInterfaceSpec, pa_nInstanceNameId, &scm_stInternalVars, m_anFBConnData, m_anFBVarsData) {
  };

  virtual ~FORTE_FB_PID() = default;
};

#endif // _FB_PID_H_


