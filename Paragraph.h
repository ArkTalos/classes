#ifndef PARAGRAPH_H
#define PARAGRAPH_H
#pragma once

#include <iostream>
#include <vector>
#include <string>

class Paragraph
{
private:
	std::vector<int> sentenceArray;
public:
	void addASentence(std::string theText);
	void print();
};

#endif

