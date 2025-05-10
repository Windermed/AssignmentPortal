#include "CoffeeProgram.h"

void CoffeeProgram::Main()
{
	// Declare variables
	int coffeeAmount;
	double pricePerPound = 10.50; // Price per pound of coffee
	double totalCost;

	// Get the amount of coffee in pounds from the user
	std::cout << "Enter the amount of coffee in pounds: ";
	std::cin >> coffeeAmount;

	// Calculate the total cost
	totalCost = coffeeAmount * pricePerPound;

	// Display the total cost
	std::cout << "The total cost for " << coffeeAmount << " pounds of coffee is $" << totalCost << std::endl;

	Globals::GetGlobalCore->bProgramHasFinished = true;
}
