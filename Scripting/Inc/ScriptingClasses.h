/*===========================================================================
	  C++ class	definitions	exported from UnrealScript.
	  This is automatically	generated by the tools.
	  DO NOT modify	this manually! Edit	the	corresponding .uc files	instead!
===========================================================================*/
#if SUPPORTS_PRAGMA_PACK
#pragma pack (push,4)
#endif

#ifndef SCRIPTING_API
#define SCRIPTING_API DLL_IMPORT
#endif

#ifndef NAMES_ONLY
#define AUTOGENERATE_NAME(name) extern SCRIPTING_API	FName SCRIPTING_##name;
#define AUTOGENERATE_FUNCTION(cls,idx,name)
#endif

AUTOGENERATE_NAME(bestVariableClass)
AUTOGENERATE_NAME(editorDisplayString)
AUTOGENERATE_NAME(enumScriptLabels)
AUTOGENERATE_NAME(enumScripts)
AUTOGENERATE_NAME(nativeClassToVariableClass)
AUTOGENERATE_NAME(stopTalkingHead)
AUTOGENERATE_NAME(variableClassToNativeClass)

#ifndef NAMES_ONLY

// Struct FParameterResolveInfo	is declared	in "..\Scripting\Classes\Action\Action.uc"
struct SCRIPTING_API FParameterResolveInfo
{
    class UAction* Action;
    FName Variable;
    FName PropertyName;
};


// "event"	function whose parameters correspond to	"struct UAction_eventenumScripts_Parms"	is declared	in "..\Scripting\Classes\Action\Action.uc"
struct UAction_eventenumScripts_Parms
{
	  class ALevelInfo* Level;
	  TArray<FName> S;
};
// "event"	function whose parameters correspond to	"struct UAction_eventenumScriptLabels_Parms"	is declared	in "..\Scripting\Classes\Action\Action.uc"
struct UAction_eventenumScriptLabels_Parms
{
	  class ALevelInfo* Level;
	  TArray<FName> S;
};
// "event"	function whose parameters correspond to	"struct UAction_eventeditorDisplayString_Parms"	is declared	in "..\Scripting\Classes\Action\Action.uc"
struct UAction_eventeditorDisplayString_Parms
{
	  FString S;
};

// Enum EOpTest is declared in "..\Scripting\Classes\Action\ActionPropertyTest.uc"
enum EOpTest
{
	 OPTEST_LESS             =0,
	 OPTEST_LESSEQUAL        =1,
	 OPTEST_EQUALS           =2,
	 OPTEST_NOTEQUAL         =3,
	 OPTEST_GREATEREQUAL     =4,
	 OPTEST_GREATER          =5,
	 OPTEST_MAX              =6,
};







// Enum eScriptType is declared in "..\Scripting\Classes\Script.uc"
enum eScriptType
{
	 TYPE_Normal             =0,
	 TYPE_IngameCutscene     =1,
	 TYPE_OpeningCutscene    =2,
	 TYPE_Max                =3,
	 TYPE_MAX                =4,
};

// "event"	function whose parameters correspond to	"struct AScript_eventstopTalkingHead_Parms"	is declared	in "..\Scripting\Classes\Script.uc"
struct AScript_eventstopTalkingHead_Parms
{
	  class AScript* requestingScript;
};

// "event"	function whose parameters correspond to	"struct UVariable_eventbestVariableClass_Parms"	is declared	in "..\Scripting\Classes\Variable\Variable.uc"
struct UVariable_eventbestVariableClass_Parms
{
	  FString val;
	  class UClass* varClass;
};
// "event"	function whose parameters correspond to	"struct UVariable_eventvariableClassToNativeClass_Parms"	is declared	in "..\Scripting\Classes\Variable\Variable.uc"
struct UVariable_eventvariableClassToNativeClass_Parms
{
	  class UClass* varClass;
	  FString nativeClass;
};
// "event"	function whose parameters correspond to	"struct UVariable_eventnativeClassToVariableClass_Parms"	is declared	in "..\Scripting\Classes\Variable\Variable.uc"
struct UVariable_eventnativeClassToVariableClass_Parms
{
	  FString nativeClass;
	  class UClass* varClass;
};
// Class	UAction is declared in "..\Scripting\Classes\Action\Action.uc"
class SCRIPTING_API	UAction	: public UObject
{
public:
    FStringNoInit actionDisplayName;
    FStringNoInit actionHelp;
    class UClass* returnType;
    FStringNoInit category;
    class AScript* parentScript;
    BITFIELD acceptAllTypes:1;
    TArrayNoInit<FParameterResolveInfo> resolveInfoList;
	   DECLARE_FUNCTION(execSetActionPropertyText);
	  void	eventenumScripts(class ALevelInfo* Level, TArray<FName>& S)
	  {
        UAction_eventenumScripts_Parms Parms;
		   Parms.Level=Level;
		   Parms.S=S;
        ProcessEvent(FindFunctionChecked(SCRIPTING_enumScripts),&Parms);
		   S=Parms.S;
	  }
	  void	eventenumScriptLabels(class ALevelInfo* Level, TArray<FName>& S)
	  {
        UAction_eventenumScriptLabels_Parms Parms;
		   Parms.Level=Level;
		   Parms.S=S;
        ProcessEvent(FindFunctionChecked(SCRIPTING_enumScriptLabels),&Parms);
		   S=Parms.S;
	  }
	  void	eventeditorDisplayString(FString& S)
	  {
        UAction_eventeditorDisplayString_Parms Parms;
		   Parms.S=S;
        ProcessEvent(FindFunctionChecked(SCRIPTING_editorDisplayString),&Parms);
		   S=Parms.S;
	  }
	   DECLARE_CLASS(UAction,UObject,0,Scripting)
	virtual void CleanupDestroyed();
	virtual UAction* FixOwnership(AScript* ownerScript);
	virtual void CheckForErrors(FString& prefix, int index, AScript* ownerScript);
	virtual bool IsMember(UAction* action) { return false; }
};

// Class	UActionBool is declared in "..\Scripting\Classes\Action\ActionBool.uc"
class SCRIPTING_API	UActionBool	: public UAction
{
public:
	   DECLARE_CLASS(UActionBool,UAction,0,Scripting)
	   NO_DEFAULT_CONSTRUCTOR(UActionBool)
};

// Class	UActionPropertyTest is declared in "..\Scripting\Classes\Action\ActionPropertyTest.uc"
class SCRIPTING_API	UActionPropertyTest	: public UActionBool
{
public:
    FName Label;
    class UClass* actorClass;
    FStringNoInit propertyPath;
    FStringNoInit Value;
    INT maxPasses;
    class UObject* testProperty;
    TArrayNoInit<INT> offsets;
    BYTE opTest;
	   DECLARE_FUNCTION(execdoPropertyTest);
	   DECLARE_FUNCTION(execfindTestProperty);
	   DECLARE_CLASS(UActionPropertyTest,UActionBool,0,Scripting)
	   NO_DEFAULT_CONSTRUCTOR(UActionPropertyTest)
};

// Class	UActionCinematicEnter is declared in "..\Scripting\Classes\Action\ActionCinematicEnter.uc"
class SCRIPTING_API	UActionCinematicEnter	: public UAction
{
public:
	   DECLARE_FUNCTION(execcinematicEnter);
	   DECLARE_CLASS(UActionCinematicEnter,UAction,0,Scripting)
	   NO_DEFAULT_CONSTRUCTOR(UActionCinematicEnter)
};

// Class	UActionCinematicExit is declared in "..\Scripting\Classes\Action\ActionCinematicExit.uc"
class SCRIPTING_API	UActionCinematicExit	: public UAction
{
public:
	   DECLARE_FUNCTION(execcinematicExit);
	   DECLARE_CLASS(UActionCinematicExit,UAction,0,Scripting)
	   NO_DEFAULT_CONSTRUCTOR(UActionCinematicExit)
};

// Class	UActionFor is declared in "..\Scripting\Classes\Action\ActionFor.uc"
class SCRIPTING_API	UActionFor	: public UAction
{
public:
    FName counterName;
    FLOAT beginValue;
    FLOAT endValue;
    TArrayNoInit<class UAction*> forActions;
	   DECLARE_CLASS(UActionFor,UAction,0,Scripting)
	virtual void CleanupDestroyed();
	virtual UAction* FixOwnership(AScript* ownerScript);
	virtual void CheckForErrors(FString& prefix, int index, AScript* ownerScript);
	bool IsMember(UAction* action);
};

// Class	UActionIf is declared in "..\Scripting\Classes\Action\ActionIf.uc"
class SCRIPTING_API	UActionIf	: public UAction
{
public:
    TArrayNoInit<class UActionBool*> testsOr;
    TArrayNoInit<class UAction*> trueActions;
    TArrayNoInit<class UAction*> elseActions;
	   DECLARE_CLASS(UActionIf,UAction,0,Scripting)
	virtual void CleanupDestroyed();
	virtual UAction* FixOwnership(AScript* ownerScript);
	virtual void CheckForErrors(FString& prefix, int index, AScript* ownerScript);
	bool IsMember(UAction* action);
};

// Class	UActionLoop is declared in "..\Scripting\Classes\Action\ActionLoop.uc"
class SCRIPTING_API	UActionLoop	: public UAction
{
public:
    TArrayNoInit<class UAction*> loopActions;
	   DECLARE_CLASS(UActionLoop,UAction,0,Scripting)
	virtual void CleanupDestroyed();
	virtual UAction* FixOwnership(AScript* ownerScript);
	virtual void CheckForErrors(FString& prefix, int index, AScript* ownerScript);
	bool IsMember(UAction* action);
};

// Class	UActionPlayMojo is declared in "..\Scripting\Classes\Action\ActionPlayMojo.uc"
class SCRIPTING_API	UActionPlayMojo	: public UAction
{
public:
    FName Cutscene;
	   DECLARE_FUNCTION(execenumCutscenes);
	   DECLARE_CLASS(UActionPlayMojo,UAction,0,Scripting)
	   NO_DEFAULT_CONSTRUCTOR(UActionPlayMojo)
};

// Class	AScript is declared in "..\Scripting\Classes\Script.uc"
class SCRIPTING_API	AScript	: public AActor
{
public:
    class UClass* MessageClass;
    class UMessage* messageFilter;
    TArrayNoInit<class UAction*> Actions;
    BITFIELD Enabled:1;
    BYTE scriptType;
    FLOAT cutscenePriority;
    BITFIELD bIsExecuting:1;
    TArrayNoInit<class UWatcherBase*> watchers;
    BITFIELD bExitScript:1;
    BITFIELD bExitLoop:1;
    class UMessage* currentMessage;
    TArrayNoInit<class UMessage*> messageQueue;
    TArrayNoInit<class UVariable*> variables;
    TArrayNoInit<class UVariable*> tempVariables;
    BITFIELD bTemporaryHiddenEdHack:1;
    FScriptDelegate __stopTalkingHead__Delegate;
	   DECLARE_FUNCTION(execdestroyTempVariables);
	  void	delegatestopTalkingHead(class AScript* requestingScript)
	  {
        AScript_eventstopTalkingHead_Parms Parms;
		   Parms.requestingScript=requestingScript;
		   ProcessDelegate(SCRIPTING_stopTalkingHead,&__stopTalkingHead__Delegate,&Parms);
	  }
	   DECLARE_CLASS(AScript,AActor,0|CLASS_Config,Scripting)
	   NO_DEFAULT_CONSTRUCTOR(AScript)
};

// Class	UVariable is declared in "..\Scripting\Classes\Variable\Variable.uc"
class SCRIPTING_API	UVariable	: public UObject
{
public:
    class AScript* ownerScript;
	  void	eventbestVariableClass(const FString& val, class UClass*& varClass)
	  {
        UVariable_eventbestVariableClass_Parms Parms;
		   Parms.val=val;
		   Parms.varClass=varClass;
        ProcessEvent(FindFunctionChecked(SCRIPTING_bestVariableClass),&Parms);
		   varClass=Parms.varClass;
	  }
	  void	eventvariableClassToNativeClass(class UClass* varClass, FString& nativeClass)
	  {
        UVariable_eventvariableClassToNativeClass_Parms Parms;
		   Parms.varClass=varClass;
		   Parms.nativeClass=nativeClass;
        ProcessEvent(FindFunctionChecked(SCRIPTING_variableClassToNativeClass),&Parms);
		   nativeClass=Parms.nativeClass;
	  }
	  void	eventnativeClassToVariableClass(const FString& nativeClass, class UClass*& varClass)
	  {
        UVariable_eventnativeClassToVariableClass_Parms Parms;
		   Parms.nativeClass=nativeClass;
		   Parms.varClass=varClass;
        ProcessEvent(FindFunctionChecked(SCRIPTING_nativeClassToVariableClass),&Parms);
		   varClass=Parms.varClass;
	  }
	   DECLARE_CLASS(UVariable,UObject,0,Scripting)
	   NO_DEFAULT_CONSTRUCTOR(UVariable)
};

#endif

AUTOGENERATE_FUNCTION(UAction,-1,execSetActionPropertyText);
AUTOGENERATE_FUNCTION(UActionCinematicEnter,-1,execcinematicEnter);
AUTOGENERATE_FUNCTION(UActionCinematicExit,-1,execcinematicExit);
AUTOGENERATE_FUNCTION(UActionPlayMojo,-1,execenumCutscenes);
AUTOGENERATE_FUNCTION(UActionPropertyTest,-1,execdoPropertyTest);
AUTOGENERATE_FUNCTION(UActionPropertyTest,-1,execfindTestProperty);
AUTOGENERATE_FUNCTION(AScript,-1,execdestroyTempVariables);

#ifndef NAMES_ONLY
#undef AUTOGENERATE_NAME
#undef AUTOGENERATE_FUNCTION
#endif

#if SUPPORTS_PRAGMA_PACK
#pragma pack	(pop)
#endif

#ifdef VERIFY_CLASS_SIZES
VERIFY_CLASS_SIZE_NODIE(UAction)
VERIFY_CLASS_SIZE_NODIE(UActionBool)
VERIFY_CLASS_SIZE_NODIE(UActionCinematicEnter)
VERIFY_CLASS_SIZE_NODIE(UActionCinematicExit)
VERIFY_CLASS_SIZE_NODIE(UActionFor)
VERIFY_CLASS_SIZE_NODIE(UActionIf)
VERIFY_CLASS_SIZE_NODIE(UActionLoop)
VERIFY_CLASS_SIZE_NODIE(UActionPlayMojo)
VERIFY_CLASS_SIZE_NODIE(UActionPropertyTest)
VERIFY_CLASS_SIZE_NODIE(AScript)
VERIFY_CLASS_SIZE_NODIE(UVariable)
#endif // VERIFY_CLASS_SIZES