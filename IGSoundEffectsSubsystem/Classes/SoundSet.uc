class SoundSet extends Core.Object
	native;

//=============================================================================
//  SoundSet.
// 
//  A SoundSet is a group of related sounds (usually variations of the same sound),
//  any of which can be marked as 'Available' for use or 'Used' (not available). 
//  A sound is chosen randomly for the list of available sounds.  It maintains a 
//  list of SoundRefs that handle the actual sound specific data like the 
//  USound object or the streaming sound data.  
//
//==============================================================================

import class Engine.Sound;

enum ESoundStatus 
{
    SS_Available,
    SS_Used
};

// Variables
var private array<SoundRef>		            AllSounds;              // List of SoundRefs in this soundset
var private array<ESoundStatus>	            StatusArray;            // List of Statuses that refer the AllSounds array
var private SoundRef               			LastSoundUsed;          // Last valid sound that this soundset chose

// Public UnrealScript Interface
native final function AddSoundRef (SoundRef inRef);

// Native c++ .h interface
// (cpptext)
// (cpptext)
// (cpptext)
// (cpptext)
// (cpptext)
// (cpptext)
// (cpptext)
// (cpptext)
// (cpptext)
// (cpptext)
// (cpptext)
// (cpptext)
// (cpptext)
// (cpptext)
// (cpptext)
// (cpptext)
// (cpptext)
// (cpptext)
// (cpptext)
// (cpptext)
// (cpptext)

cpptext
{
    // Returns true if there are no available sounds to play
    UBOOL IsAvailableEmpty();
    // Free up the soundref to be picked
    void  MakeSoundAvailable (class USoundRef* inSoundRef);
    // Make all sounds used, so this SoundSet will no longer return sounds
    void MakeNoSoundsAvailable ();
    // Free up all sounds to be picked
    void  MakeAllSoundsAvailable();
    // Pick a random sound from the available list of sounds
    class USoundRef* PickRandomSound (class USoundRef* inExcludedSoundRef = NULL);
    // Use up a sound 
    void  UseSound (class USoundRef* inSoundRef);
    
    // Add sounds to the set...
    void  AddSound (USound* inSound);
    void  AddStream (FString inStream);
    void  AddSoundRef (class USoundRef* inRef);


}


defaultproperties
{
}
