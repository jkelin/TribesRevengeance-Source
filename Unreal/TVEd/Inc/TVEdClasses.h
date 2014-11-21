/*===========================================================================
	  C++ class	definitions	exported from UnrealScript.
	  This is automatically	generated by the tools.
	  DO NOT modify	this manually! Edit	the	corresponding .uc files	instead!
===========================================================================*/
#if SUPPORTS_PRAGMA_PACK
#pragma pack (push,4)
#endif

#ifndef TVED_API
#define TVED_API DLL_IMPORT
#endif

#ifndef NAMES_ONLY
#define AUTOGENERATE_NAME(name) extern TVED_API	FName TVED_##name;
#define AUTOGENERATE_FUNCTION(cls,idx,name)
#endif


#ifndef NAMES_ONLY






// Struct FFSectionDigest	is declared	in "..\TVEd\Classes\MeshEditProps.uc"
struct TVED_API FFSectionDigest
{
    BYTE MeshSectionMethod;
    INT MaxRigidParts;
    INT MinPartFaces;
    FLOAT MeldSize;
};

// Struct FLODLevel	is declared	in "..\TVEd\Classes\MeshEditProps.uc"
struct TVED_API FLODLevel
{
    FLOAT DistanceFactor;
    FLOAT ReductionFactor;
    FLOAT Hysteresis;
    INT MaxInfluences;
    BITFIELD RedigestSwitch:1;
    FFSectionDigest Rigidize;
};

// Struct FAttachSocket	is declared	in "..\TVEd\Classes\MeshEditProps.uc"
struct TVED_API FAttachSocket
{
    FVector A_Translation;
    FRotator A_Rotation;
    FName AttachAlias;
    FName BoneName;
    FLOAT Test_Scale;
    class UMesh* TestMesh;
    class UStaticMesh* TestStaticMesh;
};

// Struct FMEPBonePrimSphere	is declared	in "..\TVEd\Classes\MeshEditProps.uc"
struct TVED_API FMEPBonePrimSphere
{
    FName BoneName;
    FVector Offset;
    FLOAT Radius;
};

// Struct FMEPBonePrimBox	is declared	in "..\TVEd\Classes\MeshEditProps.uc"
struct TVED_API FMEPBonePrimBox
{
    FName BoneName;
    FVector Offset;
    FVector Radii;
    BITFIELD HavokOnly:1;
    BITFIELD NotHavok:1;
};

// Struct FMEPBonePrimStaticMesh	is declared	in "..\TVEd\Classes\MeshEditProps.uc"
struct TVED_API FMEPBonePrimStaticMesh
{
    FName BoneName;
    FVector Offset;
    class UStaticMesh* StaticMesh;
};




// Struct FNotifyInfo	is declared	in "..\TVEd\Classes\NotifyProperties.uc"
struct TVED_API FNotifyInfo
{
    FLOAT NotifyFrame;
    class UAnimNotify* Notify;
    INT OldRevisionNum;
};


// Class	AAnimBrowserMesh is declared in "..\TVEd\Classes\AnimBrowserMesh.uc"
class TVED_API	AAnimBrowserMesh	: public AActor
{
public:
	   DECLARE_CLASS(AAnimBrowserMesh,AActor,0,TVEd)
	   NO_DEFAULT_CONSTRUCTOR(AAnimBrowserMesh)
};

// Class	ULIPSincAnimProps is declared in "..\TVEd\Classes\LIPSincAnimProps.uc"
class TVED_API	ULIPSincAnimProps	: public UObject
{
public:
    INT WBrowserLIPSincPtr;
    class USound* Sound;
    BITFIELD bInterruptible:1;
    FLOAT BlendInTime;
    FLOAT BlendOutTime;
	   DECLARE_CLASS(ULIPSincAnimProps,UObject,0,TVEd)
	void PostEditChange();
};

// Class	ULIPSincControllerProps is declared in "..\TVEd\Classes\LIPSincControllerProps.uc"
class TVED_API	ULIPSincControllerProps	: public UObject
{
public:
    INT WBrowserLIPSincPtr;
	   DECLARE_CLASS(ULIPSincControllerProps,UObject,0,TVEd)
	void PostEditChange();
};

// Class	ULIPSincPrefsProps is declared in "..\TVEd\Classes\LIPSincPrefsProps.uc"
class TVED_API	ULIPSincPrefsProps	: public UObject
{
public:
    INT WBrowserLIPSincPtr;
	   DECLARE_CLASS(ULIPSincPrefsProps,UObject,0,TVEd)
	void PostEditChange();
};

// Class	UAnimEditProps is declared in "..\TVEd\Classes\AnimEditProps.uc"
class TVED_API	UAnimEditProps	: public UMeshObject
{
public:
    INT WBrowserAnimationPtr;
    FLOAT GlobalCompression;
    BYTE CompressionMethod;
	   DECLARE_CLASS(UAnimEditProps,UMeshObject,0,TVEd)
	void PostEditChange();
};

// Class	UMeshEditProps is declared in "..\TVEd\Classes\MeshEditProps.uc"
class TVED_API	UMeshEditProps	: public UMeshObject
{
public:
    INT WBrowserAnimationPtr;
    FVector Scale;
    FVector Translation;
    FRotator Rotation;
    FVector MinVisBound;
    FVector MaxVisBound;
    FVector VisSphereCenter;
    FLOAT VisSphereRadius;
    INT LODStyle;
    class UMeshAnimation* DefaultAnimation;
    TArrayNoInit<class UMaterial*> Material;
    FLOAT LOD_Strength;
    TArrayNoInit<FLODLevel> LODLevels;
    FLOAT SkinTesselationFactor;
    FLOAT TestCollisionRadius;
    FLOAT TestCollisionHeight;
    TArrayNoInit<FMEPBonePrimSphere> CollisionSpheres;
    TArrayNoInit<FMEPBonePrimBox> CollisionBoxes;
    TArrayNoInit<FMEPBonePrimStaticMesh> CollisionStaticMeshes;
    TArrayNoInit<FAttachSocket> Sockets;
    BITFIELD ApplyNewSockets:1;
    BITFIELD ContinuousUpdate:1;
    BITFIELD bImpostorPresent:1;
    class UMaterial* SpriteMaterial;
    FVector Scale3D;
    FRotator RelativeRotation;
    FVector RelativeLocation;
    FColor ImpColor;
    BYTE ImpSpaceMode;
    BYTE ImpDrawMode;
    BYTE ImpLightMode;
	   DECLARE_CLASS(UMeshEditProps,UMeshObject,0,TVEd)
	void PostEditChange();
};

// Class	USequEditProps is declared in "..\TVEd\Classes\SequEditProps.uc"
class TVED_API	USequEditProps	: public UMeshObject
{
public:
    INT WBrowserAnimationPtr;
    FLOAT Rate;
    FLOAT Compression;
    FLOAT Velocity;
    BYTE ReCompressionMethod;
    FName SequenceName;
    TArrayNoInit<FName> Groups;
	   DECLARE_CLASS(USequEditProps,UMeshObject,0,TVEd)
	void PostEditChange();
};

// Class	USkelPrefsEditProps is declared in "..\TVEd\Classes\SkelPrefsEditProps.uc"
class TVED_API	USkelPrefsEditProps	: public UMeshObject
{
public:
    INT WBrowserAnimationPtr;
    INT RootZero;
    FLOAT AnimSlomo;
	   DECLARE_CLASS(USkelPrefsEditProps,UMeshObject,0,TVEd)
	void PostEditChange();
};

// Class	UNotifyProperties is declared in "..\TVEd\Classes\NotifyProperties.uc"
class TVED_API	UNotifyProperties	: public UObject
{
public:
    INT OldArrayCount;
    INT WBrowserAnimationPtr;
    TArrayNoInit<FNotifyInfo> Notifys;
	   DECLARE_CLASS(UNotifyProperties,UObject,0,TVEd)
	void PostEditChange();
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
VERIFY_CLASS_SIZE_NODIE(AAnimBrowserMesh)
VERIFY_CLASS_SIZE_NODIE(UAnimEditProps)
VERIFY_CLASS_SIZE_NODIE(ULIPSincAnimProps)
VERIFY_CLASS_SIZE_NODIE(ULIPSincControllerProps)
VERIFY_CLASS_SIZE_NODIE(ULIPSincPrefsProps)
VERIFY_CLASS_SIZE_NODIE(UMeshEditProps)
VERIFY_CLASS_SIZE_NODIE(UNotifyProperties)
VERIFY_CLASS_SIZE_NODIE(USequEditProps)
VERIFY_CLASS_SIZE_NODIE(USkelPrefsEditProps)
#endif // VERIFY_CLASS_SIZES