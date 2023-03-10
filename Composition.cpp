#include "Composition.h"
#include "Paragraph.h"

void Composition::addAParagraph()
{
	std::string paragraph;
	Paragraph objPrintParagraph;
	objPrintParagraph.printParagraph();
	std::cin >> paragraph;
	paragraphArray.push_back(paragraph);
	currentParagraph++;
}

void Composition::addSentance(std::string aSentance)
{
	Paragraph objSentence;
	objSentence.addASentence(aSentance);
}

void Composition::printComposition()
{
	std::cout << std::endl;
	for (int position = 0; position < paragraphArray.size(); position++)
	{
		std::cout << paragraphArray.at(position) << std::endl;
		std::cout << std::endl;
	}
}
