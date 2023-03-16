// classes.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Driver.CPP

#include <iostream>
#include "Composition.h"

void menu() 
{
   std::cout << "This program allows a user to enter a written composition in pieces :" << std::endl;
   std::cout << "  1. Enter a new sentence." << std::endl;
   std::cout << "  2. Start a new paragraph" << std::endl;
   std::cout << "  3. Print the composition" << std::endl;
   std::cout << "  4. QUIT" << std::endl;
}

int userSelection()
{
   int userNum;
   std::cout << "Your menu selection is: ";
   std::cin >> userNum;
   return userNum;
}

int main()
{
   Composition comp;
   
   int userSelectionValue;

   do
   {
      if (std::cin.fail()) {
         std::cin.clear(); // Clear the error state
         std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Ignore invalid input
         userSelectionValue = 0;
      }
      else {
         menu();
         userSelectionValue = userSelection();
      }


      switch (userSelectionValue)
      {
      case 1:
      {
         std::string sentence;
         std::cout << "Enter a new sentence: ";
         std::cin.ignore(); // Ignore the newline character left by previous cin
         std::getline(std::cin, sentence);
         if (std::cin.fail()) // fix for issue with input errors
         {
            std::cin.clear(); // Clear the error state
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Ignore invalid input
            std::cout << "Invalid input. Please try again." << std::endl;
         }
         else 
         {
            comp.addSentence(sentence);
         }
         break;
      }
      case 2:
         comp.addAParagraph();
         break;

      case 3:
         comp.printComposition();
         break;

      case 4:
         std::cout << "Quitting program..." << std::endl;
         return 0;

      default:
         std::cout << "Invalid input. Please enter a number between 1 and 4." << std::endl;
         std::cin.clear(); // Clear the error state
         std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Ignore invalid input
         break;
      }

   } while (userSelectionValue != 4);

   return 0;
}


