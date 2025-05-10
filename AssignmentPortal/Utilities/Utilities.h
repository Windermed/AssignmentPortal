// Utilities.h : This file contains utility functions which do not rely on custom-made structures, etc.
// In other words, this file contains functions that mainly do calculations, formatting, etc.
//

#pragma once
#define WIN32_LEAN_AND_MEAN
#include <iostream>
#include <string>
#include <algorithm>
#include <windows.h>
#include <format>
#include <filesystem>
#include <fstream>
#include <stdint.h>
#include <cctype>

inline void Log(std::string LogOutput)
{
	std::cout << "LogPrototypeProject: " << LogOutput << std::endl;

}

inline std::string ToUpperCase(std::string str) 
{
	std::transform(str.begin(), str.end(), str.begin(), ::toupper);
	return str;
}

inline std::string ToLowerCase(std::string str)
{
	std::transform(str.begin(), str.end(), str.begin(), ::tolower);
	return str;
}

inline int Conv_StringToInt(std::string str)
{
	int number = 0;
	try
	{
		number = std::stoi(str);
	}
	catch (const std::invalid_argument& e)
	{
		//std::cerr << "ERROR: Invalid argument: " << e.what() << std::endl;
	}
	catch (const std::out_of_range& e)
	{
		//std::cerr << "ERROR: Out of range: " << e.what() << std::endl;
	}
	return number;
}

inline bool stringIs(const std::string& input, const std::string& target) 
{
	return ToLowerCase(input) == ToLowerCase(target);
}

inline bool isStringInteger(std::string str)
{
	return std::all_of(str.begin(), str.end(), ::isdigit);
}



namespace Utilities
{
	// Clears the console screen.
	inline void ClearConsole()
	{
		system("cls");
	}

	// Calculates the remaining amount of a stat bar.
	inline int CalculateRemainingAmount(int CurrentAmount, int MaxAmount)
	{
		int RemainingAmount = MaxAmount - CurrentAmount;

		// example: stat is 10 - 99 = 89;
		// there should be 89 left. so now we need to add extra underscores to the stat bar.
		return RemainingAmount;
	}
	
	

}



