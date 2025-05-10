#ifndef WINDERCLASSTABLE_H
#define WINDERCLASSTABLE_H

#include "../../School/BaseClassManager.h"

class WinderClassTable 
{
public:
    std::string                     name;
    std::string                     description;
    EClassType                      classType;
    int  					        programID;
    int                             assignmentID;

public:
    static void GetData(int ID);
    static WinderClassTable GetAssignment(EClassType classType, int assignmentID);
};

#endif
