#include "Composition.h"
#include "Paragraph.h"

void Composition::addAParagraph()
{
	Paragraph objPrint;
	objPrint.print();
	paragraphArray.push_back(objPrint);
	currentParagraph =+ 1;
}

void Composition::addSentance(std::string aSentance)
{
	Paragraph objSentence;
	objSentence.addASentence(aSentance);
}

void Composition::print()
{
	std::cout << std::endl;
	for (int position = 0; position < paragraphArray.size(); position++)
	{
		std::cout << paragraphArray.at(position) << std::endl;
	}
}
