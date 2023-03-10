# classes
This program is a simple text editor that allows the user to create a composition in pieces. The user can enter new sentences or start a new paragraph. The program stores the composition in memory and allows the user to print it out.

The program consists of three classes: Composition, Paragraph, and Sentence. The Composition class is responsible for managing the composition, while the Paragraph class manages the paragraphs, and the Sentence class manages the sentences.

The Composition class has three methods: addAParagraph(), addSentence(), and printComposition(). The addAParagraph() method creates a new paragraph and adds it to the composition. The addSentence() method creates a new sentence and adds it to the last paragraph in the composition. The printComposition() method prints out the entire composition.

The Paragraph class has two methods: addASentence() and printParagraph(). The addASentence() method adds a new sentence to the paragraph. The printParagraph() method prints out the entire paragraph.

The Sentence class has two methods: sentance() and printSentence(). The sentance() method returns the sentence text. The printSentence() method prints out the sentence.

The main() function displays a menu of options to the user and prompts them to enter a selection. Based on the user's selection, the program calls the appropriate method in the Composition class. The program loops until the user chooses to quit.
