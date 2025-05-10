#include "TemplateTestProgram.h"

void TemplateTestProgram::Main()
{
	// This is a placeholder program that I added here to demonstrate what this can do.
	// You can modify this code to test your own implementation of the TemplateClass.
	std::string projectNoctuah = "0";
	std::string thefunny = "error";
	Message("Hello from TemplateTestProgram!");
	
	Message("This 5 month old program executes code the old fashioned way!")
	MessagePrompt("Don't you agree? Please type 1 if so: ")
	

	MessageTypeInput(projectNoctuah)

	if (Conv_StringToInt(projectNoctuah) == 1)
	{
		Message("so true! very true indeed.")
	}
	else
	{
		Message("WRONG!! I'll give you one more chance")
		Message("anyways project noctuah is the best q____ as of rn.")
		MessagePrompt("Please finish the last three words: ")
		MessageTypeInput(thefunny)

		if (thefunny == "uint" || thefunny == "UINT")
		{
			Message("You got it!!")
			std::string thefunny2 = "q" + thefunny;
			Message("anyways project noctuah is the best " + thefunny2 + " as of rn.") // inside joke.
		}
		else
		{
			Message("got it wrong again. oh well.")
		}
	}

		
	
	EmptySpace();
}
