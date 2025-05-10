#include "Utilities/Utilities.h"
#include "Engine/WinderEngine.h"

// THE MAIN FUNCTION. PUBLIC VERSION.

int main()
{
    std::string ConsoleTitle = "Assignment Portal [" __DATE__ " " __TIME__" Build by Windermed]";
    std::wstring FinalTitleW(ConsoleTitle.begin(), ConsoleTitle.end());

    SetConsoleTitleW(FinalTitleW.c_str());
	Message("Welcome to the Assignment Portal! (Created by Windermed)");

    WinderEngine::StartCoreProgram();

    return 0;
}
