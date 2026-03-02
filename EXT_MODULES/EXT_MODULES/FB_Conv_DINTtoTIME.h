/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: FB_Conv_DINTtoTIME
 *** Description: Composite FB wrapping other FBs
 *** Version:
***     1.0: 2024-07-22/SERGWORK -  - 
 *************************************************************************/

#ifndef _FB_CONV_DINTTOTIME_H_
#define _FB_CONV_DINTTOTIME_H_

#include "cfb.h"
#include "typelib.h"
#include "forte_int.h"
#include "forte_time.h"
#include "forte_array_at.h"


class FORTE_FB_Conv_DINTtoTIME: public CCompositeFB {
  DECLARE_FIRMWARE_FB(FORTE_FB_Conv_DINTtoTIME)

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

  static const SCFB_FBInstanceData scm_astInternalFBs[];
  static const SCFB_FBParameter scm_astParamters[];
  static const SCFB_FBConnectionData scm_astEventConnections[];
  static const SCFB_FBFannedOutConnectionData scm_astFannedOutEventConnections[];
  static const SCFB_FBConnectionData scm_astDataConnections[];
  static const SCFB_FBFannedOutConnectionData scm_astFannedOutDataConnections[];
  static const SCFB_FBNData scm_stFBNData;

  CIEC_INT &st_In1() {
    return *static_cast<CIEC_INT*>(getDI(0));
  }
  
  CIEC_TIME &st_Out1() {
    return *static_cast<CIEC_TIME*>(getDO(0));
  }
  

  FORTE_FB_DATA_ARRAY(1, 1, 1, 0);

public:
  FORTE_FB_Conv_DINTtoTIME(const CStringDictionary::TStringId pa_nInstanceNameId, CResource *pa_poSrcRes) :
      CCompositeFB(pa_poSrcRes, &scm_stFBInterfaceSpec, pa_nInstanceNameId, &scm_stFBNData, m_anFBConnData, m_anFBVarsData) {
  };

  virtual ~FORTE_FB_Conv_DINTtoTIME() = default;
};

#endif // _FB_CONV_DINTTOTIME_H_


