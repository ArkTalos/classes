#include "Paragraph.h"
#include "Sentence.h"
#include <sstream>
#include <vector>



void Paragraph::addASentence(std::string theText)
{
   Sentence objSentence;
   /*sentenceArray.push_back(objSentence.sentence(theText));*/
   sentenceArray.push_back(theText);
}

std::string Paragraph::printParagraph()
{
   std::stringstream ss;

   for (int position = 0; position < sentenceArray.size(); position++)
   {
      if (position != 0) {
         ss << " ";
      }
      ss << sentenceArray.at(position);
   }

   return ss.str();
}
