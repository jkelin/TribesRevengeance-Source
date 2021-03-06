// ====================================================================
//  Class:  GUI.GUIGFXButton
//
//  Written by Joe Wilcox
//  (c) 2002, Epic Games, Inc.  All Rights Reserved
// ====================================================================

class GUICheckBoxButton extends GUIGFXButton
	Native;

defaultproperties
{
	bCheckBox=true
	Position=ICP_Scaled
	bRepeatClick=false
	Graphic=Material'GUITribes.CheckBoxMark'
    bTabStop=true
}