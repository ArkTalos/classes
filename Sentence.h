#ifndef Sentence_H
#define Sentence_H
#pragma once

#include <iostream>
#include <vector>
#include <string>

class Sentence
{
private:
	std::string theSentence;
public:
	std::string sentence(std::string inputSentence);
	void printSentence();
};

#endif