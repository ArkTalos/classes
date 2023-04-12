#include "Sentence.h"
#include <iostream>

std::string Sentence::sentence(std::string inputSentence)
{
	//set the sentence
	theSentence = inputSentence;
	return theSentence;
}

void Sentence::printSentence()
{
	//print the sentence
	std::cout << theSentence;
}
