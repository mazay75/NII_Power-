/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: Sub_Fan1
 *** Description: Subapplication Type
 *** Version:
***     1.0: 2024-11-11/sergdebwork -  - 
 *************************************************************************/

#ifndef _SUB_FAN1_H_
#define _SUB_FAN1_H_

#include "cfb.h"
#include "typelib.h"
#include "forte_bool.h"
#include "forte_int.h"
#include "forte_udint.h"
#include "forte_uint.h"
#include "forte_word.h"
#include "forte_wstring.h"
#include "forte_array_at.h"


class FORTE_Sub_Fan1: public CCompositeFB {
  DECLARE_FIRMWARE_FB(FORTE_Sub_Fan1)

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

  CIEC_BOOL &st_xAuto() {
    return *static_cast<CIEC_BOOL*>(getDI(0));
  }
  
  CIEC_BOOL &st_xStart() {
    return *static_cast<CIEC_BOOL*>(getDI(1));
  }
  
  CIEC_BOOL &st_xFire() {
    return *static_cast<CIEC_BOOL*>(getDI(2));
  }
  
  CIEC_BOOL &st_xDPD() {
    return *static_cast<CIEC_BOOL*>(getDI(3));
  }
  
  CIEC_BOOL &st_xKM() {
    return *static_cast<CIEC_BOOL*>(getDI(4));
  }
  
  CIEC_BOOL &st_xQF() {
    return *static_cast<CIEC_BOOL*>(getDI(5));
  }
  
  CIEC_BOOL &st_xTK() {
    return *static_cast<CIEC_BOOL*>(getDI(6));
  }
  
  CIEC_BOOL &st_xStatusFC() {
    return *static_cast<CIEC_BOOL*>(getDI(7));
  }
  
  CIEC_BOOL &st_xHeatKM() {
    return *static_cast<CIEC_BOOL*>(getDI(8));
  }
  
  CIEC_UINT &st_SP_DelAlrmDPD_Fan() {
    return *static_cast<CIEC_UINT*>(getDI(9));
  }
  
  CIEC_UINT &st_SP_Blowing() {
    return *static_cast<CIEC_UINT*>(getDI(10));
  }
  
  CIEC_WSTRING &st_var_EngineMinutes() {
    return *static_cast<CIEC_WSTRING*>(getDI(11));
  }
  
  CIEC_WSTRING &st_var_EngineHours() {
    return *static_cast<CIEC_WSTRING*>(getDI(12));
  }
  
  CIEC_BOOL &st_xReset() {
    return *static_cast<CIEC_BOOL*>(getDI(13));
  }
  
  CIEC_BOOL &st_xFan() {
    return *static_cast<CIEC_BOOL*>(getDO(0));
  }
  
  CIEC_BOOL &st_xAlarmFan() {
    return *static_cast<CIEC_BOOL*>(getDO(1));
  }
  
  CIEC_BOOL &st_xAlarmDPD() {
    return *static_cast<CIEC_BOOL*>(getDO(2));
  }
  
  CIEC_BOOL &st_xAlarmKM() {
    return *static_cast<CIEC_BOOL*>(getDO(3));
  }
  
  CIEC_BOOL &st_xAlarmQF() {
    return *static_cast<CIEC_BOOL*>(getDO(4));
  }
  
  CIEC_BOOL &st_xAlarmTK() {
    return *static_cast<CIEC_BOOL*>(getDO(5));
  }
  
  CIEC_BOOL &st_xAlarmFC() {
    return *static_cast<CIEC_BOOL*>(getDO(6));
  }
  
  CIEC_BOOL &st_xBlowing() {
    return *static_cast<CIEC_BOOL*>(getDO(7));
  }
  
  CIEC_UDINT &st_EngineMinutes() {
    return *static_cast<CIEC_UDINT*>(getDO(8));
  }
  
  CIEC_UDINT &st_EngineHours() {
    return *static_cast<CIEC_UDINT*>(getDO(9));
  }
  
  CIEC_WORD &st_wEngineMinutes_0() {
    return *static_cast<CIEC_WORD*>(getDO(10));
  }
  
  CIEC_WORD &st_wEngineMinutes_1() {
    return *static_cast<CIEC_WORD*>(getDO(11));
  }
  
  CIEC_WORD &st_wEngineHours_0() {
    return *static_cast<CIEC_WORD*>(getDO(12));
  }
  
  CIEC_WORD &st_wEngineHours_1() {
    return *static_cast<CIEC_WORD*>(getDO(13));
  }
  
  CIEC_INT &st_iETBlow() {
    return *static_cast<CIEC_INT*>(getDO(14));
  }
  

  FORTE_FB_DATA_ARRAY(2, 14, 15, 0);

public:
  FORTE_Sub_Fan1(const CStringDictionary::TStringId pa_nInstanceNameId, CResource *pa_poSrcRes) :
      CCompositeFB(pa_poSrcRes, &scm_stFBInterfaceSpec, pa_nInstanceNameId, &scm_stFBNData, m_anFBConnData, m_anFBVarsData) {
  };

  virtual ~FORTE_Sub_Fan1() = default;
};

#endif // _SUB_FAN1_H_


