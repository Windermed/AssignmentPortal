#include "../Class428/Class428.h"
#include "../Class428/Assignments/Week01/HelloWorldProgram.h"
#include "../Class428/Assignments/Week02/CoffeeProgram.h"

//anytime you add a new program that's part of Class428 (or any other new class), you need to include it's header above ^^

void Class428::ExecuteClassProgram(int programID)
{
    switch (programID)
    {
    case 1:
        HelloWorldProgram::Main();
        break;
    case 2:
        CoffeeProgram::Main();
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
        Message("Error: Invalid program ID for Class428! Please try again!\n");
        break;
    }
}