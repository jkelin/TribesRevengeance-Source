// ifdef WITH_LIPSinc

//=============================================================================
// Object to facilitate properties editing
//=============================================================================
//  LIPSinc Anim editor object to expose/shuttle only selected editable 
//  parameters from TLIPSincAnimation objects back and forth in the editor.

class LIPSincAnimProps extends Core.Object
	hidecategories(Object)
	native;	

// (cpptext)
// (cpptext)
// (cpptext)
// (cpptext)

var const int WBrowserLIPSincPtr;

var(Sound) sound	Sound;

var(Properties) bool    bInterruptible;
var(Properties) float   BlendInTime;
var(Properties) float   BlendOutTime;







// endif

cpptext
{
	void PostEditChange();

}


defaultproperties
{
     bInterruptible=True
     BlendInTime=160.000000
     BlendOutTime=220.000000
}
