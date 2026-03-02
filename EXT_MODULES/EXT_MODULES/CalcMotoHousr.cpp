/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: CalcMotoHousr
 *** Description: Subapplication Type
 *** Version:
***     1.0: 2024-11-26/sergdebwork -  - 
 *************************************************************************/

#include "CalcMotoHousr.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "CalcMotoHousr_gen.cpp"
#endif


DEFINE_FIRMWARE_FB(FORTE_CalcMotoHousr, g_nStringIdCalcMotoHousr)

const CStringDictionary::TStringId FORTE_CalcMotoHousr::scm_anDataInputNames[] = {g_nStringIdWorkFan, g_nStringIdInMH, g_nStringIdReSetMH};

const CStringDictionary::TStringId FORTE_CalcMotoHousr::scm_anDataInputTypeIds[] = {g_nStringIdBOOL, g_nStringIdUDINT, g_nStringIdBOOL};

const CStringDictionary::TStringId FORTE_CalcMotoHousr::scm_anDataOutputNames[] = {g_nStringIdOutMH};

const CStringDictionary::TStringId FORTE_CalcMotoHousr::scm_anDataOutputTypeIds[] = {g_nStringIdUDINT};

const TForteInt16 FORTE_CalcMotoHousr::scm_anEIWithIndexes[] = {-1};
const CStringDictionary::TStringId FORTE_CalcMotoHousr::scm_anEventInputNames[] = {g_nStringIdREQ};

const TForteInt16 FORTE_CalcMotoHousr::scm_anEOWithIndexes[] = {-1};
const CStringDictionary::TStringId FORTE_CalcMotoHousr::scm_anEventOutputNames[] = {g_nStringIdCNF};


const SFBInterfaceSpec FORTE_CalcMotoHousr::scm_stFBInterfaceSpec = {
  1, scm_anEventInputNames, nullptr, scm_anEIWithIndexes,
  1, scm_anEventOutputNames, nullptr, scm_anEOWithIndexes,
  3, scm_anDataInputNames, scm_anDataInputTypeIds,
  1, scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, nullptr
};

const SCFB_FBInstanceData FORTE_CalcMotoHousr::scm_astInternalFBs[] = {
  {g_nStringIdFB_TON, g_nStringIdFB_TON},
  {g_nStringIdFB_RS, g_nStringIdFB_RS},
  {g_nStringIdFB_CTUD_DINT, g_nStringIdFB_CTUD_DINT},
  {g_nStringIdF_UDINT_TO_DINT, g_nStringIdF_UDINT_TO_DINT},
  {g_nStringIdF_DINT_TO_UDINT, g_nStringIdF_DINT_TO_UDINT}
};

const SCFB_FBParameter FORTE_CalcMotoHousr::scm_astParamters[] = {
  {0, g_nStringIdPT, "T#1s"},
};

const SCFB_FBConnectionData FORTE_CalcMotoHousr::scm_astEventConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_RS, g_nStringIdCNF), 1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TON, g_nStringIdREQ), 0},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdREQ), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_UDINT_TO_DINT, g_nStringIdREQ), 3},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_UDINT_TO_DINT, g_nStringIdCNF), 3, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_CTUD_DINT, g_nStringIdREQ), 2},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TON, g_nStringIdCNF), 0, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdCNF), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_CTUD_DINT, g_nStringIdCNF), 2, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_DINT_TO_UDINT, g_nStringIdREQ), 4},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_DINT_TO_UDINT, g_nStringIdCNF), 4, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_RS, g_nStringIdREQ), 1},
};

const SCFB_FBConnectionData FORTE_CalcMotoHousr::scm_astDataConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdWorkFan), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_RS, g_nStringIdS), 1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_RS, g_nStringIdQ1), 1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TON, g_nStringIdIN), 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_TON, g_nStringIdQ), 0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_RS, g_nStringIdR1), 1},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdReSetMH), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_CTUD_DINT, g_nStringIdLD), 2},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_CTUD_DINT, g_nStringIdCV), 2, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_DINT_TO_UDINT, g_nStringIdIN), 4},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_DINT_TO_UDINT, g_nStringIdOUT), 4, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdOutMH), -1},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdInMH), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_UDINT_TO_DINT, g_nStringIdIN), 3},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_UDINT_TO_DINT, g_nStringIdOUT), 3, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_CTUD_DINT, g_nStringIdPV), 2},
};

const SCFB_FBFannedOutConnectionData FORTE_CalcMotoHousr::scm_astFannedOutDataConnections[] = {
  {2, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFB_CTUD_DINT, g_nStringIdCU), 2},
};

const SCFB_FBNData FORTE_CalcMotoHousr::scm_stFBNData = {
  5, scm_astInternalFBs,
  6, scm_astEventConnections,
  0, nullptr,
  8, scm_astDataConnections,
  1, scm_astFannedOutDataConnections,
  1, scm_astParamters
};



