//=============================================================================
// Emitter: An Unreal Emitter Actor.
//=============================================================================
class Emitter extends Actor
	native
	placeable;

var()	deepcopy	editinline	array<ParticleEmitter>	Emitters;

var		(Global)	bool				AutoDestroy;
var		(Global)	bool				AutoReset;
var		(Global)	bool				DisableFogging;
var		(Global)	bool				RotationAndVelocityFromOwner;
var		(Global)	rangevector			GlobalOffsetRange;
var		(Global)	range				TimeTillResetRange;

var		transient	int					Initialized;
var		transient	Box					BoundingBox;
var		transient	float				EmitterRadius;
var		transient	float				EmitterHeight;
var		transient	bool				ActorForcesEnabled;
var		transient	vector				GlobalOffset;
var		transient	float				TimeTillReset;
var		transient	bool				UseParticleProjectors;
var		transient	ParticleMaterial	ParticleMaterial;
var		transient	bool				DeleteParticleEmitters;

#if IG_SHARED // rowan: emitter control
var					bool	bPlaying;
var					bool	bStoppedOverTime;

event PlayEmitters()
{
	local byte i;

	if (!bPlaying)
	{
		for(i = 0; i<Emitters.Length; ++i)
		{
			if (bStoppedOverTime)
			{
				Emitters[i].RespawnDeadParticles = true;
				Emitters[i].KillPending = 0;
			}

			Emitters[i].Disabled = false;
			Emitters[i].ResetParticles();
		}

		bStoppedOverTime = false;

		bPlaying = true;
	}
}

event StopEmitters(optional bool bStopOverTime)
{
	local byte i;

	if (bPlaying)
	{
		// Disable all emitters
		for(i = 0; i<Emitters.Length; ++i)
		{
			if (bStopOverTime)
			{	
				Emitters[i].RespawnDeadParticles = false;
				Emitters[i].KillPending = 1;
				bStoppedOverTime = true;
			}
			else
			{
				Emitters[i].Disabled = true;
			}
		}

		bPlaying = false;
	}
}	
#endif // IG

// shutdown the emitter and make it auto-destroy when the last active particle dies.
native function Kill();
 
simulated function UpdatePrecacheRenderData()
{
	local int i;
	for( i=0; i<Emitters.Length; i++ )
	{
		if( Emitters[i] != None )
		{
			if( Emitters[i].Texture != None )
				Level.AddPrecacheMaterial(Emitters[i].Texture);
		}
	}
}

event Trigger( Actor Other, Pawn EventInstigator )
{
	local int i;
	for( i=0; i<Emitters.Length; i++ )
	{
		if( Emitters[i] != None )
			Emitters[i].Trigger();
	}
}

#if IG_EFFECTS
event PreAutoDestroyed()
{
	if (bNeedLifeTimeEffectEvents)
	{
		UntriggerEffectEvent('Alive');
		TriggerEffectEvent('Destroyed');
	}
}
#endif

defaultproperties
{
	RemoteRole=ROLE_None
	Style=STY_Particle
	DrawType=DT_Particle
	Texture=Texture'Engine_res.S_Emitter'
#if IG_EFFECTS
	// WARNING: We need emitters to be bNoDelete=false in order to be spawned at runtime by
	// the Effects System. However, because they are RemoteRole=None, any emitters placed
	// (not spawned) in a level will not show up on network clients.
	// We solved this in SWAT by making Engine.Emitter be bNoDelete=true, and having all placed
	// emitters be Engine.Emitters. Then we made a new SpawnableEmitter subclass that is bNoDelete=false,
	// and all our effects that are spawned by the Effects System at runtime are subclasses of
	// SpawnableEmitter.
	bNoDelete=false
#else
//	bNoDelete=true
#endif
	bUnlit=true
	bPlaying = true;
#if IG_TRIBES3 // david: AutoDestroy default is 'true'
	AutoDestroy=true
#endif
}