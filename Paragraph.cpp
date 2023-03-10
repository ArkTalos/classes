#include "Paragraph.h"
#include "Sentance.h"
#include <sstream>

void Paragraph::addASentence(std::string theText)
{
   Sentance objSentence;
   std::string setString = objSentence.sentance(theText);
	sentenceArray.push_back(setString);
}

void Paragraph::printParagraph()
{
   std::stringstream ss;

   for (int position = 0; position < sentenceArray.size(); position++)
   {
      if (position != 0) {
         ss << " ";
      }
      ss << sentenceArray.at(position);
   }
   std::cout << ss.str() << std::endl;
}
