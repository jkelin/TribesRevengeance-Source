/*===========================================================================
	  C++ class	definitions	exported from UnrealScript.
	  This is automatically	generated by the tools.
	  DO NOT modify	this manually! Edit	the	corresponding .uc files	instead!
===========================================================================*/
#if SUPPORTS_PRAGMA_PACK
#pragma pack (push,4)
#endif

#ifndef MOJOCORE_API
#define MOJOCORE_API DLL_IMPORT
#endif

#ifndef NAMES_ONLY
#define AUTOGENERATE_NAME(name) extern MOJOCORE_API	FName MOJOCORE_##name;
#define AUTOGENERATE_FUNCTION(cls,idx,name)
#endif

AUTOGENERATE_NAME(AddRef)
AUTOGENERATE_NAME(CanAcceptSubactions)
AUTOGENERATE_NAME(CanBeUsedWith)
AUTOGENERATE_NAME(CanFastForwardSkip)
AUTOGENERATE_NAME(CanGenerateOutputKeys)
AUTOGENERATE_NAME(CanSetDuration)
AUTOGENERATE_NAME(DecRef)
AUTOGENERATE_NAME(DisableActionInMojo)
AUTOGENERATE_NAME(EndCutscene)
AUTOGENERATE_NAME(Finish)
AUTOGENERATE_NAME(GetDuration)
AUTOGENERATE_NAME(GetHelpString)
AUTOGENERATE_NAME(GetNameString)
AUTOGENERATE_NAME(GetSummaryString)
AUTOGENERATE_NAME(GetTrackString)
AUTOGENERATE_NAME(Interrupt)
AUTOGENERATE_NAME(IsSubaction)
AUTOGENERATE_NAME(ModifiesActorLocation)
AUTOGENERATE_NAME(OnDelete)
AUTOGENERATE_NAME(Pause)
AUTOGENERATE_NAME(ResetState)
AUTOGENERATE_NAME(Resume)
AUTOGENERATE_NAME(SetDuration)
AUTOGENERATE_NAME(Start)
AUTOGENERATE_NAME(TakeControlOf)
AUTOGENERATE_NAME(Tick)

#ifndef NAMES_ONLY

// Constant LOCAL_VIEW_FOCUS_EXTENSION is declared in "..\MojoCore\Classes\TsMojoController.uc"
#define UCONST_LOCAL_VIEW_FOCUS_EXTENSION 10000

// "event"	function whose parameters correspond to	"struct ATsMojoController_eventResetState_Parms"	is declared	in "..\MojoCore\Classes\TsMojoController.uc"
struct ATsMojoController_eventResetState_Parms
{
};
// "event"	function whose parameters correspond to	"struct ATsMojoController_eventDecRef_Parms"	is declared	in "..\MojoCore\Classes\TsMojoController.uc"
struct ATsMojoController_eventDecRef_Parms
{
};
// "event"	function whose parameters correspond to	"struct ATsMojoController_eventAddRef_Parms"	is declared	in "..\MojoCore\Classes\TsMojoController.uc"
struct ATsMojoController_eventAddRef_Parms
{
};
// "event"	function whose parameters correspond to	"struct ATsMojoController_eventTakeControlOf_Parms"	is declared	in "..\MojoCore\Classes\TsMojoController.uc"
struct ATsMojoController_eventTakeControlOf_Parms
{
	  class APawn* p;
};
// Struct FMojoKeyframe	is declared	in "..\MojoCore\Classes\TsMojoAction.uc"
struct MOJOCORE_API FMojoKeyframe
{
    FVector Position;
    FRotator Rotation;
};

// Struct FMojoTimedKeyframe	is declared	in "..\MojoCore\Classes\TsMojoAction.uc"
struct MOJOCORE_API FMojoTimedKeyframe
{
    FVector Position;
    FRotator Rotation;
    FLOAT Time;
};

// Struct FMojoAnimation	is declared	in "..\MojoCore\Classes\TsMojoAction.uc"
struct MOJOCORE_API FMojoAnimation
{
    FName Name;
    FName animation_set;
};

// Struct FMojoActorRef	is declared	in "..\MojoCore\Classes\TsMojoAction.uc"
struct MOJOCORE_API FMojoActorRef
{
    FName Name;
    class AActor* Actor;
};


// "event"	function whose parameters correspond to	"struct UTsMojoAction_eventGetDuration_Parms"	is declared	in "..\MojoCore\Classes\TsMojoAction.uc"
struct UTsMojoAction_eventGetDuration_Parms
{
	  FLOAT ReturnValue;
};
// "event"	function whose parameters correspond to	"struct UTsMojoAction_eventSetDuration_Parms"	is declared	in "..\MojoCore\Classes\TsMojoAction.uc"
struct UTsMojoAction_eventSetDuration_Parms
{
	  FLOAT duration;
	  BITFIELD ReturnValue;
};
// "event"	function whose parameters correspond to	"struct UTsMojoAction_eventResume_Parms"	is declared	in "..\MojoCore\Classes\TsMojoAction.uc"
struct UTsMojoAction_eventResume_Parms
{
};
// "event"	function whose parameters correspond to	"struct UTsMojoAction_eventPause_Parms"	is declared	in "..\MojoCore\Classes\TsMojoAction.uc"
struct UTsMojoAction_eventPause_Parms
{
};
// "event"	function whose parameters correspond to	"struct UTsMojoAction_eventInterrupt_Parms"	is declared	in "..\MojoCore\Classes\TsMojoAction.uc"
struct UTsMojoAction_eventInterrupt_Parms
{
};
// "event"	function whose parameters correspond to	"struct UTsMojoAction_eventOnDelete_Parms"	is declared	in "..\MojoCore\Classes\TsMojoAction.uc"
struct UTsMojoAction_eventOnDelete_Parms
{
};
// "event"	function whose parameters correspond to	"struct UTsMojoAction_eventCanGenerateOutputKeys_Parms"	is declared	in "..\MojoCore\Classes\TsMojoAction.uc"
struct UTsMojoAction_eventCanGenerateOutputKeys_Parms
{
	  BITFIELD ReturnValue;
};
// "event"	function whose parameters correspond to	"struct UTsMojoAction_eventCanAcceptSubactions_Parms"	is declared	in "..\MojoCore\Classes\TsMojoAction.uc"
struct UTsMojoAction_eventCanAcceptSubactions_Parms
{
	  BITFIELD ReturnValue;
};
// "event"	function whose parameters correspond to	"struct UTsMojoAction_eventIsSubaction_Parms"	is declared	in "..\MojoCore\Classes\TsMojoAction.uc"
struct UTsMojoAction_eventIsSubaction_Parms
{
	  BITFIELD ReturnValue;
};
// "event"	function whose parameters correspond to	"struct UTsMojoAction_eventDisableActionInMojo_Parms"	is declared	in "..\MojoCore\Classes\TsMojoAction.uc"
struct UTsMojoAction_eventDisableActionInMojo_Parms
{
	  BITFIELD ReturnValue;
};
// "event"	function whose parameters correspond to	"struct UTsMojoAction_eventModifiesActorLocation_Parms"	is declared	in "..\MojoCore\Classes\TsMojoAction.uc"
struct UTsMojoAction_eventModifiesActorLocation_Parms
{
	  BITFIELD ReturnValue;
};
// "event"	function whose parameters correspond to	"struct UTsMojoAction_eventCanSetDuration_Parms"	is declared	in "..\MojoCore\Classes\TsMojoAction.uc"
struct UTsMojoAction_eventCanSetDuration_Parms
{
	  BITFIELD ReturnValue;
};
// "event"	function whose parameters correspond to	"struct UTsMojoAction_eventCanFastForwardSkip_Parms"	is declared	in "..\MojoCore\Classes\TsMojoAction.uc"
struct UTsMojoAction_eventCanFastForwardSkip_Parms
{
	  BITFIELD ReturnValue;
};
// "event"	function whose parameters correspond to	"struct UTsMojoAction_eventCanBeUsedWith_Parms"	is declared	in "..\MojoCore\Classes\TsMojoAction.uc"
struct UTsMojoAction_eventCanBeUsedWith_Parms
{
	  class AActor* Actor;
	  BITFIELD ReturnValue;
};
// "event"	function whose parameters correspond to	"struct UTsMojoAction_eventGetSummaryString_Parms"	is declared	in "..\MojoCore\Classes\TsMojoAction.uc"
struct UTsMojoAction_eventGetSummaryString_Parms
{
	  FString ReturnValue;
};
// "event"	function whose parameters correspond to	"struct UTsMojoAction_eventGetHelpString_Parms"	is declared	in "..\MojoCore\Classes\TsMojoAction.uc"
struct UTsMojoAction_eventGetHelpString_Parms
{
	  FString ReturnValue;
};
// "event"	function whose parameters correspond to	"struct UTsMojoAction_eventGetTrackString_Parms"	is declared	in "..\MojoCore\Classes\TsMojoAction.uc"
struct UTsMojoAction_eventGetTrackString_Parms
{
	  FString ReturnValue;
};
// "event"	function whose parameters correspond to	"struct UTsMojoAction_eventGetNameString_Parms"	is declared	in "..\MojoCore\Classes\TsMojoAction.uc"
struct UTsMojoAction_eventGetNameString_Parms
{
	  FString ReturnValue;
};
// "event"	function whose parameters correspond to	"struct UTsMojoAction_eventEndCutscene_Parms"	is declared	in "..\MojoCore\Classes\TsMojoAction.uc"
struct UTsMojoAction_eventEndCutscene_Parms
{
	  BITFIELD ReturnValue;
};
// "event"	function whose parameters correspond to	"struct UTsMojoAction_eventFinish_Parms"	is declared	in "..\MojoCore\Classes\TsMojoAction.uc"
struct UTsMojoAction_eventFinish_Parms
{
};
// "event"	function whose parameters correspond to	"struct UTsMojoAction_eventTick_Parms"	is declared	in "..\MojoCore\Classes\TsMojoAction.uc"
struct UTsMojoAction_eventTick_Parms
{
	  FLOAT Delta;
	  BITFIELD ReturnValue;
};
// "event"	function whose parameters correspond to	"struct UTsMojoAction_eventStart_Parms"	is declared	in "..\MojoCore\Classes\TsMojoAction.uc"
struct UTsMojoAction_eventStart_Parms
{
	  BITFIELD ReturnValue;
};
// Class	ATsMojoController is declared in "..\MojoCore\Classes\TsMojoController.uc"
class MOJOCORE_API	ATsMojoController	: public AController
{
public:
    INT scene_ref_count;
    class AController* original_controller;
    FVector point;
    BITFIELD localShouldWalk:1;
    class ATsViewFocus* targetViewFocus;
    class AActor* moveViewFocus;
	  void	eventResetState()
	  {
		   ProcessEvent(FindFunctionChecked(MOJOCORE_ResetState),NULL);
	  }
	  void	eventDecRef()
	  {
		   ProcessEvent(FindFunctionChecked(MOJOCORE_DecRef),NULL);
	  }
	  void	eventAddRef()
	  {
		   ProcessEvent(FindFunctionChecked(MOJOCORE_AddRef),NULL);
	  }
	  void	eventTakeControlOf(class APawn* p)
	  {
        ATsMojoController_eventTakeControlOf_Parms Parms;
		   Parms.p=p;
        ProcessEvent(FindFunctionChecked(MOJOCORE_TakeControlOf),&Parms);
	  }
	   DECLARE_CLASS(ATsMojoController,AController,0|CLASS_Config,MojoCore)
	   NO_DEFAULT_CONSTRUCTOR(ATsMojoController)
};

// Class	UTsMojoAction is declared in "..\MojoCore\Classes\TsMojoAction.uc"
class MOJOCORE_API	UTsMojoAction	: public UObject
{
public:
    class AActor* Actor;
	  FLOAT	eventGetDuration()
	  {
        UTsMojoAction_eventGetDuration_Parms Parms;
		   Parms.ReturnValue=0;
        ProcessEvent(FindFunctionChecked(MOJOCORE_GetDuration),&Parms);
		   return Parms.ReturnValue;
	  }
	  BITFIELD	eventSetDuration(FLOAT duration)
	  {
        UTsMojoAction_eventSetDuration_Parms Parms;
		   Parms.ReturnValue=0;
		   Parms.duration=duration;
        ProcessEvent(FindFunctionChecked(MOJOCORE_SetDuration),&Parms);
		   return Parms.ReturnValue;
	  }
	  void	eventResume()
	  {
		   ProcessEvent(FindFunctionChecked(MOJOCORE_Resume),NULL);
	  }
	  void	eventPause()
	  {
		   ProcessEvent(FindFunctionChecked(MOJOCORE_Pause),NULL);
	  }
	  void	eventInterrupt()
	  {
		   ProcessEvent(FindFunctionChecked(MOJOCORE_Interrupt),NULL);
	  }
	  void	eventOnDelete()
	  {
		   ProcessEvent(FindFunctionChecked(MOJOCORE_OnDelete),NULL);
	  }
	  BITFIELD	eventCanGenerateOutputKeys()
	  {
        UTsMojoAction_eventCanGenerateOutputKeys_Parms Parms;
		   Parms.ReturnValue=0;
        ProcessEvent(FindFunctionChecked(MOJOCORE_CanGenerateOutputKeys),&Parms);
		   return Parms.ReturnValue;
	  }
	  BITFIELD	eventCanAcceptSubactions()
	  {
        UTsMojoAction_eventCanAcceptSubactions_Parms Parms;
		   Parms.ReturnValue=0;
        ProcessEvent(FindFunctionChecked(MOJOCORE_CanAcceptSubactions),&Parms);
		   return Parms.ReturnValue;
	  }
	  BITFIELD	eventIsSubaction()
	  {
        UTsMojoAction_eventIsSubaction_Parms Parms;
		   Parms.ReturnValue=0;
        ProcessEvent(FindFunctionChecked(MOJOCORE_IsSubaction),&Parms);
		   return Parms.ReturnValue;
	  }
	  BITFIELD	eventDisableActionInMojo()
	  {
        UTsMojoAction_eventDisableActionInMojo_Parms Parms;
		   Parms.ReturnValue=0;
        ProcessEvent(FindFunctionChecked(MOJOCORE_DisableActionInMojo),&Parms);
		   return Parms.ReturnValue;
	  }
	  BITFIELD	eventModifiesActorLocation()
	  {
        UTsMojoAction_eventModifiesActorLocation_Parms Parms;
		   Parms.ReturnValue=0;
        ProcessEvent(FindFunctionChecked(MOJOCORE_ModifiesActorLocation),&Parms);
		   return Parms.ReturnValue;
	  }
	  BITFIELD	eventCanSetDuration()
	  {
        UTsMojoAction_eventCanSetDuration_Parms Parms;
		   Parms.ReturnValue=0;
        ProcessEvent(FindFunctionChecked(MOJOCORE_CanSetDuration),&Parms);
		   return Parms.ReturnValue;
	  }
	  BITFIELD	eventCanFastForwardSkip()
	  {
        UTsMojoAction_eventCanFastForwardSkip_Parms Parms;
		   Parms.ReturnValue=0;
        ProcessEvent(FindFunctionChecked(MOJOCORE_CanFastForwardSkip),&Parms);
		   return Parms.ReturnValue;
	  }
	  BITFIELD	eventCanBeUsedWith(class AActor* Actor)
	  {
        UTsMojoAction_eventCanBeUsedWith_Parms Parms;
		   Parms.ReturnValue=0;
		   Parms.Actor=Actor;
        ProcessEvent(FindFunctionChecked(MOJOCORE_CanBeUsedWith),&Parms);
		   return Parms.ReturnValue;
	  }
	  FString	eventGetSummaryString()
	  {
        UTsMojoAction_eventGetSummaryString_Parms Parms;
        ProcessEvent(FindFunctionChecked(MOJOCORE_GetSummaryString),&Parms);
		   return Parms.ReturnValue;
	  }
	  FString	eventGetHelpString()
	  {
        UTsMojoAction_eventGetHelpString_Parms Parms;
        ProcessEvent(FindFunctionChecked(MOJOCORE_GetHelpString),&Parms);
		   return Parms.ReturnValue;
	  }
	  FString	eventGetTrackString()
	  {
        UTsMojoAction_eventGetTrackString_Parms Parms;
        ProcessEvent(FindFunctionChecked(MOJOCORE_GetTrackString),&Parms);
		   return Parms.ReturnValue;
	  }
	  FString	eventGetNameString()
	  {
        UTsMojoAction_eventGetNameString_Parms Parms;
        ProcessEvent(FindFunctionChecked(MOJOCORE_GetNameString),&Parms);
		   return Parms.ReturnValue;
	  }
	  BITFIELD	eventEndCutscene()
	  {
        UTsMojoAction_eventEndCutscene_Parms Parms;
		   Parms.ReturnValue=0;
        ProcessEvent(FindFunctionChecked(MOJOCORE_EndCutscene),&Parms);
		   return Parms.ReturnValue;
	  }
	  void	eventFinish()
	  {
		   ProcessEvent(FindFunctionChecked(MOJOCORE_Finish),NULL);
	  }
	  BITFIELD	eventTick(FLOAT Delta)
	  {
        UTsMojoAction_eventTick_Parms Parms;
		   Parms.ReturnValue=0;
		  if(IsProbing(NAME_Tick)) {
		   Parms.Delta=Delta;
        ProcessEvent(FindFunctionChecked(MOJOCORE_Tick),&Parms);
		  }
		   return Parms.ReturnValue;
	  }
	  BITFIELD	eventStart()
	  {
        UTsMojoAction_eventStart_Parms Parms;
		   Parms.ReturnValue=0;
        ProcessEvent(FindFunctionChecked(MOJOCORE_Start),&Parms);
		   return Parms.ReturnValue;
	  }
	   DECLARE_CLASS(UTsMojoAction,UObject,0,MojoCore)
	   NO_DEFAULT_CONSTRUCTOR(UTsMojoAction)
};

#endif


#ifndef NAMES_ONLY
#undef AUTOGENERATE_NAME
#undef AUTOGENERATE_FUNCTION
#endif

#if SUPPORTS_PRAGMA_PACK
#pragma pack	(pop)
#endif

#ifdef VERIFY_CLASS_SIZES
VERIFY_CLASS_SIZE_NODIE(UTsMojoAction)
VERIFY_CLASS_SIZE_NODIE(ATsMojoController)
#endif // VERIFY_CLASS_SIZES
