#ifndef WINDERENGINE_H
#define WINDERENGINE_H

#include "../School/BaseClassManager.h"
#include "../Config/MasterCore.h"
#include "../Engine/Data/WinderClassTable.h" 
#include "../Config/Settings.h"


enum class EProgramCondition
{
	ProgramStart = 0,
	ProgramEnd = 1,
	ProgramRestartToMenu = 2,
	CoreProgramEnd = 3
};

class WinderEngine : public GlobalCore // Use as ClassEngine
{  
public:  
	WinderClassTable						ClassTable;
	
	static void StartCoreProgram();
	static void SelectProgram(int assignmentNumber);
	static void ConcludeProgram();

public:

	static inline void ResetGlobalCore()
	{
		Globals::GetGlobalCore->bProgramHasStarted = false;
		Globals::GetGlobalCore->bProgramHasFinished = false;
		Globals::GetGlobalCore->bProgramWillRestart = false;
		Globals::GetGlobalCore->currentProgramNumber = 0;

		
	}

	static void SetProgramCondition(EProgramCondition programCondition)
	{
		switch (programCondition)
		{
		case EProgramCondition::ProgramStart: // sets up the appropriate variables to start the selected program.
			Globals::GetGlobalCore->bProgramHasStarted = true;
			Globals::GetGlobalCore->currentProgramNumber = GlobalProgramFlags::currentAssignment.programID;
			break;

		case EProgramCondition::ProgramRestartToMenu: //restarts the program to core program.
			WinderEngine::ResetGlobalCore();
			WinderEngine::StartCoreProgram();
			break;

		case EProgramCondition::ProgramEnd: // sets up the appropriate variables to end the program. (NOT ASSIGNMENT PORTAL)
			Globals::GetGlobalCore->currentProgramNumber = 0;
			Globals::GetGlobalCore->bProgramHasFinished = true;
			WinderEngine::ConcludeProgram();
			break;

		case EProgramCondition::CoreProgramEnd: // sets up the appropriate variables to end the program. (ASSIGNMENT PORTAL)
			exit(0);
			break;

		default: //TODO: implement error handling.
			Globals::GetGlobalCore->currentProgramNumber = -1;
			break;

		}

	}
};

#endif