#include "../TemplateClass/TemplateClass.h"
#include "../TemplateClass/Assignments/TEMPLATEWEEK/TemplateTestProgram.h"

//anytime you add a new program that's part of Class428 (or any other new class), you need to include it's header above ^^

void TemplateClass::ExecuteClassProgram(int programID)
{
    switch (programID)
    {
    case 1:
        TemplateTestProgram::Main();
        break;
    case 2:
        break;
	case 3:
		// Add your new program's main function call here
		// Example: MatchaProgram::Main();
		break;
    case 4:
		// Add your new program's main function call here
		// Example: LuckyProgram::Main();
		break;
    case 5:
		// Add your new program's main function call here
        // Example: MayProgram::Main();
        break;
    default:
        Message("Error: Invalid program ID! Please try again!\n");
        break;
    }
}