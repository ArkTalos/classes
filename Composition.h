#ifndef COMPOSITION_H
#define COMPOSITION_H
#pragma once

#include <iostream>
#include <vector>
#include <string>

class Composition 
{
private:
	std::vector<std::string> paragraphArray;
	int currentParagraph;

public:
	void addAParagraph();
	void addSentance(std::string aSentance);
	void printComposition();
};

#endif // !"COMPOSITION_HEADER"

