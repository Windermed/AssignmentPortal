// WinderDataTable.h
#pragma once
#include "../School/BaseClassManager.h"

namespace Settings
{

	//inline bool bIsDebugMode = false;

	// TODO: Implement this later
	// enable this to force a certain class type and skip the title screen.
	inline bool bForceClassType = false; 

	// bForceClassType must be enabled in order for this to be used.
	inline EClassType ForcedClassType = EClassType::Class428;
}

// THIS IS TO TRACK CERTAIN THINGS GOING ON IN THE PROGRAM. DO NOT CHANGE ANYTHING HERE!
namespace GlobalProgramFlags
{
	inline WinderClassTable currentAssignment;

	inline EClassType SelectedClassType = EClassType::Class428;
}