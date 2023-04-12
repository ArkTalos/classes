#include "Paragraph.h"
#include "Sentence.h"
#include <vector>
#include <iostream>

void Paragraph::addASentence(std::string theText)
{
   // create a new sentence object and add it to the array
   Sentence objSentence;
   sentenceArray.push_back(objSentence.sentence(theText));

   // for testing purposes of adding a sentence to a paragraph
   /*sentenceArray.push_back(theText);*/
}

void Paragraph::printParagraph()
{
   // print each sentence
   for (int position = 0; position < sentenceArray.size(); position++)
   {
      if (position != 0) {
         std::cout << " ";
      }
      std::cout << sentenceArray[position];
   }

}
