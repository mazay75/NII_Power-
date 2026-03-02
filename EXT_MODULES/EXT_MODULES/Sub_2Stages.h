/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: Sub_2Stages
 *** Description: Subapplication Type
 *** Version:
***     1.0: 2025-10-01/sergdeb -  - 
 *************************************************************************/

#ifndef _SUB_2STAGES_H_
#define _SUB_2STAGES_H_

#include "cfb.h"
#include "typelib.h"
#include "forte_bool.h"
#include "forte_real.h"
#include "forte_uint.h"
#include "forte_array_at.h"


class FORTE_Sub_2Stages: public CCompositeFB {
  DECLARE_FIRMWARE_FB(FORTE_Sub_2Stages)

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
  static const SCFB_FBConnectionData scm_astDataConnections[];
  static const SCFB_FBFannedOutConnectionData scm_astFannedOutDataConnections[];
  static const SCFB_FBNData scm_stFBNData;

  CIEC_BOOL &st_xStart() {
    return *static_cast<CIEC_BOOL*>(getDI(0));
  }
  
  CIEC_REAL &st_rTsup() {
    return *static_cast<CIEC_REAL*>(getDI(1));
  }
  
  CIEC_REAL &st_SP_Tsup() {
    return *static_cast<CIEC_REAL*>(getDI(2));
  }
  
  CIEC_UINT &st_SP_dT() {
    return *static_cast<CIEC_UINT*>(getDI(3));
  }
  
  CIEC_UINT &st_SP_DelTimeONstage1() {
    return *static_cast<CIEC_UINT*>(getDI(4));
  }
  
  CIEC_UINT &st_SP_DelTimeOFFstage2() {
    return *static_cast<CIEC_UINT*>(getDI(5));
  }
  
  CIEC_BOOL &st_xEnOut() {
    return *static_cast<CIEC_BOOL*>(getDO(0));
  }
  
  CIEC_BOOL &st_xStage1() {
    return *static_cast<CIEC_BOOL*>(getDO(1));
  }
  
  CIEC_BOOL &st_xStage2() {
    return *static_cast<CIEC_BOOL*>(getDO(2));
  }
  

  FORTE_FB_DATA_ARRAY(2, 6, 3, 0);

public:
  FORTE_Sub_2Stages(const CStringDictionary::TStringId pa_nInstanceNameId, CResource *pa_poSrcRes) :
      CCompositeFB(pa_poSrcRes, &scm_stFBInterfaceSpec, pa_nInstanceNameId, &scm_stFBNData, m_anFBConnData, m_anFBVarsData) {
  };

  virtual ~FORTE_Sub_2Stages() = default;
};

#endif // _SUB_2STAGES_H_


