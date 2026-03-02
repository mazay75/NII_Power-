/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: Sub_AlarmReset
 *** Description: Subapplication Type
 *** Version:
***     1.0: 2024-12-02/sergdebwork -  - 
 *************************************************************************/

#ifndef _SUB_ALARMRESET_H_
#define _SUB_ALARMRESET_H_

#include "cfb.h"
#include "typelib.h"
#include "forte_bool.h"
#include "forte_word.h"
#include "forte_wstring.h"
#include "forte_array_at.h"


class FORTE_Sub_AlarmReset: public CCompositeFB {
  DECLARE_FIRMWARE_FB(FORTE_Sub_AlarmReset)

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

  CIEC_BOOL &st_xRemote() {
    return *static_cast<CIEC_BOOL*>(getDI(0));
  }
  
  CIEC_WSTRING &st_ID() {
    return *static_cast<CIEC_WSTRING*>(getDI(1));
  }
  
  CIEC_BOOL &st_xAlarmReset() {
    return *static_cast<CIEC_BOOL*>(getDO(0));
  }
  
  CIEC_WORD &st_wAlarmReset() {
    return *static_cast<CIEC_WORD*>(getDO(1));
  }
  

  FORTE_FB_DATA_ARRAY(2, 2, 2, 0);

public:
  FORTE_Sub_AlarmReset(const CStringDictionary::TStringId pa_nInstanceNameId, CResource *pa_poSrcRes) :
      CCompositeFB(pa_poSrcRes, &scm_stFBInterfaceSpec, pa_nInstanceNameId, &scm_stFBNData, m_anFBConnData, m_anFBVarsData) {
  };

  virtual ~FORTE_Sub_AlarmReset() = default;
};

#endif // _SUB_ALARMRESET_H_


