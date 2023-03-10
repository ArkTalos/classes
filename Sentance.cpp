#include "Sentance.h"

std::string Sentance::sentance(std::string inputSentence)
{
	theSentance = inputSentence;
	return theSentance;
}

void Sentance::print(std::string theText)
{
	std::cout << theText;
}
