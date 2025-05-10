#include "../Engine/WinderEngine.h"  //remove if this causes issues.
#include "../School/Class428/Class428.h"
#include "../School/TemplateClass/TemplateClass.h"
// anytime you add a new "Class" (or any other new class), you need to include it's header above ^^

void BaseClassManager::ExecuteClassProgram(EClassType classType, int programID)
{
    auto AssignmentName = ToUpperCase(GlobalProgramFlags::currentAssignment.name);

    MessageBorder();
    Message("START OF " << AssignmentName << " PROGRAM!!")
    MessageBorder();
    EmptySpace();

    switch (classType)
    {
    case EClassType::Class428:
		Class428::ExecuteClassProgram(programID);
        break;
    case EClassType::TemplateClass:
        TemplateClass::ExecuteClassProgram(programID);
        break;
    default:
        Message("Invalid class type!\n")
        break;

    }
    

    MessageBorder();
    Message("END OF " << ToUpperCase(GlobalProgramFlags::currentAssignment.name) << " PROGRAM!!")
    MessageBorder();
    EmptySpace();

    WinderEngine::SetProgramCondition(EProgramCondition::ProgramEnd);
}