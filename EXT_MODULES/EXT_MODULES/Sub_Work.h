/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: Sub_Work
 *** Description: Subapplication Type
 *** Version:
***     1.0: 2024-11-27/sergdebwork -  - 
 *************************************************************************/

#ifndef _SUB_WORK_H_
#define _SUB_WORK_H_

#include "cfb.h"
#include "typelib.h"
#include "forte_bool.h"
#include "forte_word.h"
#include "forte_wstring.h"
#include "forte_array_at.h"


class FORTE_Sub_Work: public CCompositeFB {
  DECLARE_FIRMWARE_FB(FORTE_Sub_Work)

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
  
  CIEC_BOOL &st_xStop() {
    return *static_cast<CIEC_BOOL*>(getDI(1));
  }
  
  CIEC_BOOL &st_xAlarm() {
    return *static_cast<CIEC_BOOL*>(getDI(2));
  }
  
  CIEC_BOOL &st_xFire() {
    return *static_cast<CIEC_BOOL*>(getDI(3));
  }
  
  CIEC_BOOL &st_xAutoMode() {
    return *static_cast<CIEC_BOOL*>(getDI(4));
  }
  
  CIEC_BOOL &st_xRemoteMode() {
    return *static_cast<CIEC_BOOL*>(getDI(5));
  }
  
  CIEC_BOOL &st_xBlockStatus() {
    return *static_cast<CIEC_BOOL*>(getDI(6));
  }
  
  CIEC_WSTRING &st_varName() {
    return *static_cast<CIEC_WSTRING*>(getDI(7));
  }
  
  CIEC_BOOL &st_xRemoteStdby() {
    return *static_cast<CIEC_BOOL*>(getDO(0));
  }
  
  CIEC_BOOL &st_xWork() {
    return *static_cast<CIEC_BOOL*>(getDO(1));
  }
  
  CIEC_WORD &st_cmdToBroker() {
    return *static_cast<CIEC_WORD*>(getDO(2));
  }
  
  CIEC_BOOL &st_xAlarmReset() {
    return *static_cast<CIEC_BOOL*>(getDO(3));
  }
  

  FORTE_FB_DATA_ARRAY(2, 8, 4, 0);

public:
  FORTE_Sub_Work(const CStringDictionary::TStringId pa_nInstanceNameId, CResource *pa_poSrcRes) :
      CCompositeFB(pa_poSrcRes, &scm_stFBInterfaceSpec, pa_nInstanceNameId, &scm_stFBNData, m_anFBConnData, m_anFBVarsData) {
  };

  virtual ~FORTE_Sub_Work() = default;
};

#endif // _SUB_WORK_H_


