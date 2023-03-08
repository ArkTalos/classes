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
	int sentance();
	void print(std::string theText);
};

#endif