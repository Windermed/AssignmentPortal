#include "WinderClassTable.h"

void WinderClassTable::GetData(int ID)
{
    //name:
    //description:
    //hp 428/428
    switch (ID)
    {
    case 1:
        // get a function to execute here - I
        std::cout << "option 1";
        // bValidChoiceWasChosen = false;
        break;
    case 2:
        // get a function to execute here - N
		std::cout << "option 2";
        // bValidChoiceWasChosen = false;
        break;
    case 3:
        // get a function to execute here - M
        std::cout << "option 3";
        // bValidChoiceWasChosen = true;
        break;
    case 4:
        // get a function to execute here - Y
        std::cout << "option 4";
        // bValidChoiceWasChosen = true;
        break;
    case 5:
        // get a function to execute here - I
        std::cout << "option 5";
        // bValidChoiceWasChosen = true?
        break;

    case 6:
        // get a function to execute here - A
		std::cout << "option 6";
        break;
    case 7:
		// get a function to execute here - B
		std::cout << "option 7";
		break;
    }


}

WinderClassTable WinderClassTable::GetAssignment(EClassType classType, int assignmentID)
{
    WinderClassTable assignment;

    // you can obviously replace this with whatever you'd like.
    switch (assignmentID) {
    case 1:
        assignment.name = "Hello World!";
        assignment.description = "A program that just executes hello world";
        assignment.classType = EClassType::Class428;
        assignment.programID = 1;
        assignment.assignmentID = 1;
        break;
    case 2:
        assignment.name = "stat bar test";
        assignment.description = "A program that tests stat bars in console.";
        assignment.classType = EClassType::Class428;
        assignment.programID = 2;
        assignment.assignmentID = 2;
        break;
    case 3:
        assignment.name = "TEMPLATE";
		assignment.description = "anyways this line of sample text is the best description as of rn";
        assignment.classType = EClassType::TemplateClass;
        assignment.programID = 3;
        assignment.assignmentID = 1; // it's assignment ID is one because it's the 1st one from TemplateClass.
        break;
    default:
        assignment.name = "NO PROGRAM DETECTED";
        std::cout << "No Assignment found for ID: " << assignmentID << std::endl;
    }

    return assignment;


}