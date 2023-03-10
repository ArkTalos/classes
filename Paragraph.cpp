#include "Paragraph.h"

void Paragraph::addASentence(std::string theText)
{
	sentenceArray.push_back(theText);
}

void Paragraph::print()
{
	for (int position = 0; position < sentenceArray.size(); position++)
	{
		std::cout << sentenceArray.at(position) << " ";;
	}
}
