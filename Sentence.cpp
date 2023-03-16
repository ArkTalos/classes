#include "Sentence.h"

std::string Sentence::sentence(std::string inputSentence)
{
	theSentence = inputSentence;
	return theSentence;
}

void Sentence::printSentence()
{
	std::cout << theSentence;
}
