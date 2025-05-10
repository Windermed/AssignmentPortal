#include "../Engine/WinderEngine.h"
#include "../School/Class428/Class428.h"
#include "../School/BaseClassManager.h" 
#include "../Engine/Data/WinderClassTable.h"

//PUBLIC RELEASE.
void WinderEngine::StartCoreProgram()
{
    static bool bHasSeenFirstMessage = false;

    if (!bHasSeenFirstMessage)
        Message("with this tool, you can test your programs from assignments in an easier and convenient way.\n")
        bHasSeenFirstMessage = true;
        

        // This loop runs until one of the small programs has started.
        while (!Globals::GetGlobalCore->bProgramHasStarted)
        {
            MessagePrompt("Please type out the assignment number you'd like to access: ")
            MessageTypeInput(Globals::GetGlobalCore->newSelectedNumber)
            if (isStringInteger(Globals::GetGlobalCore->newSelectedNumber))
            {
				Globals::GetGlobalCore->selectedAssignmentNumber = Conv_StringToInt(Globals::GetGlobalCore->newSelectedNumber);
			}
			else
			{
                ClearConsole();
				Message("Error: Invalid input! Please ensure you've typed out a number and try again!\n")
				continue;
			}
            //InputResponse(Globals::GetGlobalCore->selectedAssignmentNumber)

            auto Assignment = WinderClassTable::GetAssignment(EClassType::Class428, Globals::GetGlobalCore->selectedAssignmentNumber);
            GlobalProgramFlags::currentAssignment = Assignment; // Store the current assignment in the global flags
            auto AssignmentName = ToUpperCase(Assignment.name);
            ClearConsole();

            SelectProgram(Globals::GetGlobalCore->selectedAssignmentNumber);
        }

}

void WinderEngine::SelectProgram(int assignmentNumber)
{
    switch (Globals::GetGlobalCore->selectedAssignmentNumber)
    {
        case 1:
            ClearConsole();
            BaseClassManager::ExecuteClassProgram(EClassType::Class428, 1); // Runs HelloWorldProgram. has a nice ring to it.
        break;

        case 2:
            ClearConsole();
            BaseClassManager::ExecuteClassProgram(EClassType::Class428, 2); // Runs CoffeeProgram. great for baking.
        break;

        case 3:
            ClearConsole();
            BaseClassManager::ExecuteClassProgram(EClassType::TemplateClass, 1); // Runs program. Get your headphones for this one.
        break;

        case 4:
            ClearConsole();
            // insert a lucky program here.
            // 428 is quite a lucky number.
        break;

        case 5:
            ClearConsole();
            // only a program that's as bright as a star can be executed here.
        break;

        default:
            ClearConsole();
            Message("Error: You have selected an invalid option that does not exist or has not been implemented yet. please try again!\n")
        break;
    }

}

void WinderEngine::ConcludeProgram()
{
    

    while (Globals::GetGlobalCore->bProgramHasFinished)
    {
        string response;

        

        Message("Program has finished execution! Would you like to restart this specific program or go back to the main menu? (Y/N)")
        Message("Press 'Y' To Restart this *specific* program again or (N) to go back to the AssignmentPortal menu!");
        MessagePrompt("Please enter your response: ")
        std::cin >> response;

        if (response == "Y" || response == "y") // restarts program.
        {
            ClearConsole();
            Message("You selected Y. This menu shall restart itself!\n")
            WinderEngine::SetProgramCondition(EProgramCondition::ProgramStart);
            BaseClassManager::ExecuteClassProgram(GlobalProgramFlags::currentAssignment.classType, GlobalProgramFlags::currentAssignment.assignmentID); // Runs the program again with the same assignment ID
        }
        else if (response == "N" || response == "n")
        {
            ClearConsole();
            Message("You selected N. The program shall return to the menu!!\n")
            WinderEngine::SetProgramCondition(EProgramCondition::ProgramRestartToMenu);
        }
        else
        {
            ClearConsole();
            Message("Error: Invalid input! please follow the instructions above and try again!\n")
        }
    }



}