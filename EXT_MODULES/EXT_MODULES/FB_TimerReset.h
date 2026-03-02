/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: FB_TimerReset
 *** Description: Subapplication Type
 *** Version:
***     1.0: 2025-10-12/sergdeb -  - 
 *************************************************************************/

#ifndef _FB_TIMERRESET_H_
#define _FB_TIMERRESET_H_

#include "cfb.h"
#include "typelib.h"
#include "forte_bool.h"
#include "forte_int.h"
#include "forte_uint.h"
#include "forte_array_at.h"


class FORTE_FB_TimerReset: public CCompositeFB {
  DECLARE_FIRMWARE_FB(FORTE_FB_TimerReset)

private:
  static const CStringDictionary::TStringId scm_anDataInputNames[];
  static const CStringDictionary::TStringId scm_anDataInputTypeIds[];
  
  static const CStringDictionary::TStringId scm_anDataOutputNames[];
  static const CStringDictionary::TStringId scm_anDataOutputTypeIds[];
  
  static const TEventID scm_nEventINITID = 0;
  static const TEventID scm_nEventREQID = 1;
  
  static const TForteInt16 scm_anEIWithIndexes[];
  static const CStringDictionary::TStringId scm_anEventInputNames[];
  
  static const TEventID scm_nEventCNFID = 0;
  
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

  CIEC_BOOL &st_xInFan() {
    return *static_cast<CIEC_BOOL*>(getDI(0));
  }
  
  CIEC_UINT &st_uiSP_TimeBlow() {
    return *static_cast<CIEC_UINT*>(getDI(1));
  }
  
  CIEC_BOOL &st_xFanBlow() {
    return *static_cast<CIEC_BOOL*>(getDO(0));
  }
  
  CIEC_INT &st_ET() {
    return *static_cast<CIEC_INT*>(getDO(1));
  }
  

  FORTE_FB_DATA_ARRAY(1, 2, 2, 0);

public:
  FORTE_FB_TimerReset(const CStringDictionary::TStringId pa_nInstanceNameId, CResource *pa_poSrcRes) :
      CCompositeFB(pa_poSrcRes, &scm_stFBInterfaceSpec, pa_nInstanceNameId, &scm_stFBNData, m_anFBConnData, m_anFBVarsData) {
  };

  virtual ~FORTE_FB_TimerReset() = default;
};

#endif // _FB_TIMERRESET_H_


