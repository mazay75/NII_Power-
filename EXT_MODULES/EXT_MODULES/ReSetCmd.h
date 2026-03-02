/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: ReSetCmd
 *** Description: Subapplication Type
 *** Version:
***     1.0: 2024-11-26/sergdebwork -  - 
 *************************************************************************/

#ifndef _RESETCMD_H_
#define _RESETCMD_H_

#include "cfb.h"
#include "typelib.h"
#include "forte_bool.h"
#include "forte_time.h"
#include "forte_array_at.h"


class FORTE_ReSetCmd: public CCompositeFB {
  DECLARE_FIRMWARE_FB(FORTE_ReSetCmd)

private:
  static const CStringDictionary::TStringId scm_anDataInputNames[];
  static const CStringDictionary::TStringId scm_anDataInputTypeIds[];
  
  static const CStringDictionary::TStringId scm_anDataOutputNames[];
  static const CStringDictionary::TStringId scm_anDataOutputTypeIds[];
  
  static const TEventID scm_nEventREQID = 0;
  
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

  CIEC_BOOL &st_InCmd() {
    return *static_cast<CIEC_BOOL*>(getDI(0));
  }
  
  CIEC_TIME &st_Delay() {
    return *static_cast<CIEC_TIME*>(getDI(1));
  }
  
  CIEC_BOOL &st_OutCmd() {
    return *static_cast<CIEC_BOOL*>(getDO(0));
  }
  

  FORTE_FB_DATA_ARRAY(1, 2, 1, 0);

public:
  FORTE_ReSetCmd(const CStringDictionary::TStringId pa_nInstanceNameId, CResource *pa_poSrcRes) :
      CCompositeFB(pa_poSrcRes, &scm_stFBInterfaceSpec, pa_nInstanceNameId, &scm_stFBNData, m_anFBConnData, m_anFBVarsData) {
  };

  virtual ~FORTE_ReSetCmd() = default;
};

#endif // _RESETCMD_H_


