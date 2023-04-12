#include "Composition.h"
#include "Paragraph.h"

void Composition::addAParagraph()
{
	Paragraph newParagraph;
	paragraphArray.push_back(newParagraph);
	currentParagraph++;
}

void Composition::addSentence(std::string aSentence)
{
	
	paragraphArray[currentParagraph].addASentence(aSentence);
}

void Composition::printComposition()
{
	std::cout << std::endl;
	for (int position = 0; position < paragraphArray.size(); position++)
	{
		paragraphArray[position].printParagraph();
		std::cout << std::endl;
	}
}
