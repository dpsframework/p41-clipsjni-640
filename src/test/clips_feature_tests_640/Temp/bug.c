#include "bug.h"

#include "utility.h"
#include "generate.h"
#include "envrnmnt.h"
#include "expressn.h"
#include "extnfunc.h"
#include "objrtmch.h"
#include "rulebld.h"


/*******************************************/
/* CONSTRUCT IMAGE INITIALIZATION FUNCTION */
/*******************************************/

Environment *InitCImage_1()
  {
   static Environment *theEnv = NULL;

   if (theEnv != NULL) return NULL;

   theEnv = CreateRuntimeEnvironment(sht1,fht1,iht1,bmht1,P1_1);

   Clear(theEnv);
   RefreshSpecialSymbols(theEnv);
   InitExpressionPointers(theEnv);
   FixupCImage_1(theEnv);

   SetListOfDefmodules(theEnv,U_1_1);
   SetCurrentModule(theEnv,GetNextDefmodule(theEnv,NULL));

   SetObjectNetworkPointer(theEnv,NULL);
   SetObjectNetworkTerminalPointer(theEnv,NULL);

   ObjectsRunTimeInitialize(theEnv,N_1_1,M_1_1,O_1_1,P_1);

   DefinstancesRunTimeInitialize(theEnv);

   DeftemplateRunTimeInitialize(theEnv);

   DefglobalRunTimeInitialize(theEnv);
   ResetDefglobals(theEnv,NULL);

   DeffunctionRunTimeInitialize(theEnv);

   DefgenericRunTimeInitialize(theEnv);

   DeffactsRunTimeInitialize(theEnv);

   DefruleRunTimeInitialize(theEnv,NULL,NULL);

   return(theEnv);
  }
