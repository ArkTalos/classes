#ifndef COMPOSITION_H
#define COMPOSITION_H
#pragma once

#include <iostream>
#include <vector>
#include <string>
#include "Paragraph.h"

class Composition 
{
private:
	std::vector<Paragraph> paragraphArray;
	int currentParagraph = -1;

public:
	void addAParagraph();
	void addSentence(std::string aSentence);
	void printComposition();
};

#endif // !"COMPOSITION_HEADER"

