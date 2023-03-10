#include "Paragraph.h"
#include "Sentance.h"

void Paragraph::addASentence(std::string theText)
{
	Sentance objSentence;
	objSentence.sentance(theText);
	sentenceArray.push_back(objSentence);
}

void Paragraph::print()
{
	for (int position = 0; position < sentenceArray.size(); position++)
	{
		std::cout << sentenceArray.at(position) << " ";
	}
}
