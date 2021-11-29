#include <iostream>
#include <ctime>
#include <Dice.h>

using namespace std;

dice::dice(float maxValue)
{
	this->maxValue = maxValue
}

void DisplayRoll(float dicenumber, float maxValue)
{
	int maxValue = maxValue;
	int result = 0;
	for (int i = 0; i < dicenumber; i++)
	{
		result += rand() % maxValue + 1; 
	}
	return result;
}