/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: FB_Sequense
 *** Description: Basic FB with empty ECC
 *** Version:
***     1.0: 2025-09-16/korsa -  - 
 *************************************************************************/

#ifndef _FB_SEQUENSE_H_
#define _FB_SEQUENSE_H_

#include "basicfb.h"
#include "forte_bool.h"
#include "forte_real.h"
#include "forte_string.h"
#include "forte_uint.h"
#include "forte_array.h"
#include "forte_array_at.h"


class FORTE_FB_Sequense: public CBasicFB {
  DECLARE_FIRMWARE_FB(FORTE_FB_Sequense)

private:
  static const CStringDictionary::TStringId scm_anDataInputNames[];
  static const CStringDictionary::TStringId scm_anDataInputTypeIds[];
  
  static const CStringDictionary::TStringId scm_anDataOutputNames[];
  static const CStringDictionary::TStringId scm_anDataOutputTypeIds[];
  
  static const TEventID scm_nEventINITID = 0;
  static const TEventID scm_nEventREQID = 1;
  
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
  CIEC_UINT &st_numLevel() {
    return *static_cast<CIEC_UINT*>(getDI(0));
  }
  
  CIEC_REAL *st_arrPower() {
    return static_cast<CIEC_REAL*>((*static_cast<CIEC_ARRAY *>(getDI(1)))[0]); //the first element marks the start of the array
  }
  
  CIEC_REAL &st_Ypid() {
    return *static_cast<CIEC_REAL*>(getDI(2));
  }
  
  CIEC_REAL &st_prcDZdisableKM() {
    return *static_cast<CIEC_REAL*>(getDI(3));
  }
  
  CIEC_STRING &st_initErrStr() {
    return *static_cast<CIEC_STRING*>(getDO(0));
  }
  
  CIEC_BOOL &st_Err() {
    return *static_cast<CIEC_BOOL*>(getDO(1));
  }
  
  CIEC_REAL *st_arrProportion() {
    return static_cast<CIEC_REAL*>((*static_cast<CIEC_ARRAY *>(getDO(2)))[0]); //the first element marks the start of the array
  }
  
  CIEC_REAL *st_arrLevel() {
    return static_cast<CIEC_REAL*>((*static_cast<CIEC_ARRAY *>(getDO(3)))[0]); //the first element marks the start of the array
  }
  
  CIEC_REAL &st_outPWM() {
    return *static_cast<CIEC_REAL*>(getDO(4));
  }
  
  CIEC_BOOL *st_arrKM() {
    return static_cast<CIEC_BOOL*>((*static_cast<CIEC_ARRAY *>(getDO(5)))[0]); //the first element marks the start of the array
  }
  
  CIEC_BOOL &st_pE() {
    return *static_cast<CIEC_BOOL*>(getDO(6));
  }
  
  CIEC_BOOL &st_pD() {
    return *static_cast<CIEC_BOOL*>(getDO(7));
  }
  
  CIEC_REAL &st_pPWM() {
    return *static_cast<CIEC_REAL*>(getDO(8));
  }
  
  CIEC_REAL &st_pKM() {
    return *static_cast<CIEC_REAL*>(getDO(9));
  }
  
  CIEC_REAL &st_pMD() {
    return *static_cast<CIEC_REAL*>(getDO(10));
  }
  
  CIEC_REAL &st_pSumP() {
    return *static_cast<CIEC_REAL*>(getDO(11));
  }
  
  CIEC_REAL &st_PowerKM() {
    return *static_cast<CIEC_REAL*>(getVarInternal(0));
  }
  
  CIEC_REAL &st_PowerPWM() {
    return *static_cast<CIEC_REAL*>(getVarInternal(1));
  }
  

  void alg_AlgInit(void);
  void alg_Run(void);

  static const TForteInt16 scm_nStateSTART = 0;
  static const TForteInt16 scm_nStateINIT = 1;
  static const TForteInt16 scm_nStateRun = 2;
  
  void enterStateSTART(void);
  void enterStateINIT(void);
  void enterStateRun(void);

  virtual void executeEvent(int pa_nEIID);

  FORTE_BASIC_FB_DATA_ARRAY(2, 4, 12, 2, 0);

public:
  FORTE_FB_Sequense(CStringDictionary::TStringId pa_nInstanceNameId, CResource *pa_poSrcRes) :
      CBasicFB(pa_poSrcRes, &scm_stFBInterfaceSpec, pa_nInstanceNameId, &scm_stInternalVars, m_anFBConnData, m_anFBVarsData) {
  };

  virtual ~FORTE_FB_Sequense() = default;
};

#endif // _FB_SEQUENSE_H_


