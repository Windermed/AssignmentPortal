#ifndef BASECLASSMANAGER_H
#define BASECLASSMANAGER_H

#include "../Config/GlobalCore.h"
#include "../Config/MasterCore.h"

// anytime you create a new class. ensure you add it here.
enum class EClassType
{
	Class428, // haha funny number
	TemplateClass,
	PlaceHolderClass

};


class BaseClassManager : public GlobalCore
{
public:
	static void ExecuteClassProgram(EClassType type, int id);

};

#endif
