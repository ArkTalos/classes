#ifndef COMPOSITION_H
#define COMPOSITION_H
#pragma once

#include <iostream>
#include <vector>
#include <string>

class Composition 
{
private:
	std::vector<int> paragraphArray;
	int currentParagraph;

public:
	void addAParagraph();
	void addSentance(std::string aSentance);
	void print();
};

#endif // !"COMPOSITION_HEADER"

