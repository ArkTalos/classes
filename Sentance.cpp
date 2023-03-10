#include "Sentance.h"

stdSentance::sentance(std::string inputSentence)
{
	theSentance = inputSentence;
	return theSentance;
}

void Sentance::print(std::string theText)
{
	std::cout << theText;
}
