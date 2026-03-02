/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: Sub_2TENs
 *** Description: Subapplication Type
 *** Version:
***     1.0: 2025-09-21/SERGSYSTH -  - 
 *************************************************************************/

#ifndef _SUB_2TENS_H_
#define _SUB_2TENS_H_

#include "cfb.h"
#include "typelib.h"
#include "forte_bool.h"
#include "forte_real.h"
#include "forte_array_at.h"


class FORTE_Sub_2TENs: public CCompositeFB {
  DECLARE_FIRMWARE_FB(FORTE_Sub_2TENs)

private:
  static const CStringDictionary::TStringId scm_anDataInputNames[];
  static const CStringDictionary::TStringId scm_anDataInputTypeIds[];
  
  static const CStringDictionary::TStringId scm_anDataOutputNames[];
  static const CStringDictionary::TStringId scm_anDataOutputTypeIds[];
  
  static const TEventID scm_nEventINITID = 0;
  static const TEventID scm_nEventREQID = 1;
  
  static const TForteInt16 scm_anEIWithIndexes[];
  static const CStringDictionary::TStringId scm_anEventInputNames[];
  
  static const TEventID scm_nEventINITOID = 0;
  static const TEventID scm_nEventCNFID = 1;
  
  static const TForteInt16 scm_anEOWithIndexes[];
  static const CStringDictionary::TStringId scm_anEventOutputNames[];
  

  static const SFBInterfaceSpec scm_stFBInterfaceSpec;

  static const SCFB_FBInstanceData scm_astInternalFBs[];
  static const SCFB_FBParameter scm_astParamters[];
  static const SCFB_FBConnectionData scm_astEventConnections[];
  static const SCFB_FBFannedOutConnectionData scm_astFannedOutEventConnections[];
  static const SCFB_FBNData scm_stFBNData;

  CIEC_BOOL &st_xAuto() {
    return *static_cast<CIEC_BOOL*>(getDI(0));
  }
  
  CIEC_BOOL &st_xEnCntrlTTR() {
    return *static_cast<CIEC_BOOL*>(getDI(1));
  }
  
  CIEC_BOOL &st_xStartTEN1() {
    return *static_cast<CIEC_BOOL*>(getDI(2));
  }
  
  CIEC_BOOL &st_xStartTEN2() {
    return *static_cast<CIEC_BOOL*>(getDI(3));
  }
  
  CIEC_REAL &st_MV() {
    return *static_cast<CIEC_REAL*>(getDI(4));
  }
  
  CIEC_REAL &st_SP() {
    return *static_cast<CIEC_REAL*>(getDI(5));
  }
  
  CIEC_REAL &st_DZpid1() {
    return *static_cast<CIEC_REAL*>(getDI(6));
  }
  
  CIEC_REAL &st_DZpid2() {
    return *static_cast<CIEC_REAL*>(getDI(7));
  }
  
  CIEC_REAL &st_DZ_KM_TEN1() {
    return *static_cast<CIEC_REAL*>(getDI(8));
  }
  
  CIEC_REAL &st_DZ_KM_TEN2() {
    return *static_cast<CIEC_REAL*>(getDI(9));
  }
  
  CIEC_REAL &st_HYS1() {
    return *static_cast<CIEC_REAL*>(getDI(10));
  }
  
  CIEC_REAL &st_HYS2() {
    return *static_cast<CIEC_REAL*>(getDI(11));
  }
  
  CIEC_REAL &st_Kp1() {
    return *static_cast<CIEC_REAL*>(getDI(12));
  }
  
  CIEC_REAL &st_Kp2() {
    return *static_cast<CIEC_REAL*>(getDI(13));
  }
  
  CIEC_REAL &st_Ti1() {
    return *static_cast<CIEC_REAL*>(getDI(14));
  }
  
  CIEC_REAL &st_Ti2() {
    return *static_cast<CIEC_REAL*>(getDI(15));
  }
  
  CIEC_BOOL &st_xStatusQF_TEN1() {
    return *static_cast<CIEC_BOOL*>(getDI(16));
  }
  
  CIEC_BOOL &st_xStatusQF_TEN2() {
    return *static_cast<CIEC_BOOL*>(getDI(17));
  }
  
  CIEC_BOOL &st_xStatusKM_TTR1() {
    return *static_cast<CIEC_BOOL*>(getDI(18));
  }
  
  CIEC_BOOL &st_xStatusKM_TTR2() {
    return *static_cast<CIEC_BOOL*>(getDI(19));
  }
  
  CIEC_BOOL &st_QO() {
    return *static_cast<CIEC_BOOL*>(getDO(0));
  }
  

  FORTE_FB_DATA_ARRAY(2, 20, 1, 0);

public:
  FORTE_Sub_2TENs(const CStringDictionary::TStringId pa_nInstanceNameId, CResource *pa_poSrcRes) :
      CCompositeFB(pa_poSrcRes, &scm_stFBInterfaceSpec, pa_nInstanceNameId, &scm_stFBNData, m_anFBConnData, m_anFBVarsData) {
  };

  virtual ~FORTE_Sub_2TENs() = default;
};

#endif // _SUB_2TENS_H_


