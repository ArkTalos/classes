#ifndef SENTANCE_H
#define SENTANCE_H
#pragma once

#include <iostream>
#include <vector>
#include <string>

class Sentance
{
private:
	std::string theSentance;
public:
	std::string sentance(std::string inputSentence);
	void printSentence();
};

#endif