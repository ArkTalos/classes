// classes.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Driver.CPP
// Name: Nathan Vallad

// include files
#include <iostream>
#include <string>
#include <vector>
#include "Composition.h"

// errorHandling function to check for input errors
bool errorHandling() {
   if (std::cin.fail()) {
      std::cin.clear(); // Clear the error state
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Ignore invalid input
      std::cout << "Invalid input. Please try again." << std::endl;
      return true; // Return true to indicate that an error was encountered
   }
   return false; // Return false to indicate that there was no error
} // End errorHandling


// Menu function with 4 options
void menu() 
{
   std::cout << "This program allows a user to enter a written composition in pieces :" << std::endl;
   std::cout << "  1. Enter a new sentence." << std::endl;
   std::cout << "  2. Start a new paragraph" << std::endl;
   std::cout << "  3. Print the composition" << std::endl;
   std::cout << "  4. QUIT" << std::endl;
} // End menu

// User selection function
int userSelection()
{
   // User selection to be used in switch statement
   int userNum;
   std::cout << "Your menu selection is: ";
   std::cin >> userNum;
   return userNum;
} // End userSelection

// Main 
int main()
{
   // Create a composition object
   Composition comp;
   
   // User selection value
   int userSelectionValue;

   do
   {
      menu();
      std::cout << "Your menu selection is: ";
      std::cin >> userSelectionValue;

      // Check for input errors and handle them with the errorHandling function
      if (errorHandling()) {
         continue;
      }

      // Switch statement to handle user selection
      switch (userSelectionValue)
      {
         // If user selects 1, add a sentence
      case 1:
      {
         // Get sentence from user
         std::cout << "Enter a new sentence: ";
         std::cin.ignore(); // Ignore the newline character left by previous cin
         std::string sentence;
         std::getline(std::cin, sentence);

         // Check for input errors and handle them with the errorHandling function
         if (errorHandling()) {
            continue;
         }

         // Add sentence to composition
         comp.addSentence(sentence);
         break; // Break out of case 1
      }
      // If user selects 2, add a paragraph
      case 2:
      {
         // Add a paragraph to the composition
         comp.addAParagraph();
         break; // Break out of case 2
      }
      // If user selects 3, print the composition
      case 3:
      {
         // Print the composition
         comp.printComposition();
         break; // Break out of case 3
      }
      // If user selects 4, quit the program
      case 4:
      {
         // Quit the program
         std::cout << "Quitting program..." << std::endl;
         return 0; // Return 0 to end program
      }
      // If user enters an invalid selection, display error message
      default:
      {
         // Display error message if user enters an invalid selection
         std::cout << "Invalid input. Please enter a number between 1 and 4." << std::endl;
         std::cin.clear(); // Clear the error state
         std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Ignore invalid input
         break; // Break out of default
      }
      } // End switch
   } while (userSelectionValue != 4); // Loop until user selects 4 to quit

   return 0; // Return 0 to end program
} // End main


