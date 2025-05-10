#pragma once
#include "../Utilities/Utilities.h"

using namespace std;
using namespace Utilities;

#define Message(input) std::cout << input << std::endl; //shorter than using cout everytime lol
#define MessageBorder() std::cout << "======================================" << std::endl;
#define MessagePrompt(input) std::cout << input;
#define MessageTypeInput(input) std::cin >> input;
#define EmptySpace() std::cout << "\n" << std::endl;
#define SystemMessage(input) std::cout << "[SYSTEM] " << input << std::endl;

class GlobalCore //for use in the entire project.
{
public:
	std::string newSelectedNumber = "0";

	int selectedAssignmentNumber = -1;
	int currentProgramNumber = 0;

	// this variable is for the small programs within this project. (e.g HelloWorldProgram, CoffeeProgram, etc) NOT For AssignmentPortal.
	//static const bool bHasSeenFirstMessage = false;

	bool bProgramHasStarted = false;
	bool bProgramHasFinished = false;
	bool bProgramWillRestart = false;

	bool bValidChoiceWasChosen = false;

	bool bCoreProgramHasStarted = true;
	bool bCoreProgramHasFinished = false;


	//starter character configuration

};