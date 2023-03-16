#ifndef PARAGRAPH_H
#define PARAGRAPH_H
#pragma once

#include <iostream>
#include <vector>
#include <string>

class Paragraph
{
private:
	std::vector<std::string> sentenceArray;
public:
	void addASentence(std::string theText);
	std::string printParagraph();
};

#endif

