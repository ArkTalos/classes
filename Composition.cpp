#include "Composition.h"
#include "Paragraph.h"
#include <vector>

Composition::Composition()
{
	// default constructor
	addAParagraph();
}

void Composition::addAParagraph()
{
	//create a new paragraph and add it to the array
	Paragraph newParagraph;
	paragraphArray.push_back(newParagraph);
	currentParagraph++;
}

void Composition::addSentence(std::string aSentence)
{
	//check to see if there is a paragraph to add a sentence to
	if (currentParagraph == -1)
	{
		addAParagraph();
	}

	//add the sentence to the current paragraph
	paragraphArray[currentParagraph].addASentence(aSentence);
}

void Composition::printComposition()
{
	//print each paragraph
	std::cout << std::endl;
	for (int position = 0; position < paragraphArray.size(); position++)
	{
		paragraphArray[position].printParagraph();
		std::cout << std::endl;
	}
}
