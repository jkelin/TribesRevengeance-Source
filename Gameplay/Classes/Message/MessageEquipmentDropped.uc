class MessageEquipmentDropped extends MessageEquipmentBase
	editinlinenew;

// editorDisplay
static function string editorDisplay(Name triggeredBy, Message filter)
{
	local string s;
	local MessageEquipmentBase f;

	f = MessageEquipmentBase(filter);

	if (triggeredBy != 'all')
		s = triggeredBy $ " drops equipment";
	else
		s = "All equipment dropped";

	if (f != None)
	{
		if (f.equipmentClass != None)
			s = s$" of type "$f.equipmentClass.Name;

		if (f.equipmentName != '')
			s = s$" named "$f.equipmentName;
	}
	
	return s;
}
