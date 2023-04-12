# Simple Text Editor

This program is a simple text editor that allows the user to create a composition in pieces. The user can enter new sentences or start a new paragraph. The program stores the composition in memory and allows the user to print it out.

## Features

- Create a composition in pieces
- Enter new sentences
- Start a new paragraph
- Display the entire composition

## Classes and Methods

- `Composition`
  - `addAParagraph()`: Creates a new paragraph and adds it to the composition.
  - `addSentence()`: Creates a new sentence and adds it to the last paragraph in the composition.
  - `printComposition()`: Prints out the entire composition.
- `Paragraph`
  - `addASentence()`: Adds a new sentence to the paragraph.
  - `printParagraph()`: Prints out the entire paragraph.
- `Sentence`
  - `sentence()`: Returns the sentence text.
  - `printSentence()`: Prints out the sentence.

## Usage

1. Compile and run the program.
2. A menu will be displayed with the following options:

>This program allows a user to enter a written composition in pieces :
>>1. Enter a new sentence.
>>2. Start a new paragraph.
>>3. Print the composition.
>>4. QUIT

3. Enter the number corresponding to your desired action:
- To add a new sentence, enter `1` and then type the sentence.
- To start a new paragraph, enter `2`.
- To display the entire composition, enter `3`.
- To quit the program, enter `4`.

## Files

- `classes.cpp`: This file contains the `main` function and the menu system for user interaction.
- `Composition.h`: The header file for the `Composition` class.
- `Composition.cpp`: The implementation file for the `Composition` class.
- `Paragraph.h`: The header file for the `Paragraph` class.
- `Paragraph.cpp`: The implementation file for the `Paragraph` class.
- `Sentence.h`: The header file for the `Sentence` class.
- `Sentence.cpp`: The implementation file for the `Sentence` class.

## Dependencies

- C++ Standard Library

## Limitations

- The project does not support saving compositions to a file or loading previously saved compositions.
- Error handling for user input is limited and may not cover all possible input errors.

Please let me know if you need any additional information or if you have any questions.
