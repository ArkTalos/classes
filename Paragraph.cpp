#include "Paragraph.h"
#include "Sentence.h"
#include <vector>



void Paragraph::addASentence(std::string theText)
{
   Sentence objSentence;
   sentenceArray.push_back(objSentence.sentence(theText));
   /*sentenceArray.push_back(theText);*/
}

void Paragraph::printParagraph()
{
   for (int position = 0; position < sentenceArray.size(); position++)
   {
      if (position != 0) {
         std::cout << " ";
      }
      std::cout << sentenceArray[position];
      std::cout << std::endl;
   }

}
