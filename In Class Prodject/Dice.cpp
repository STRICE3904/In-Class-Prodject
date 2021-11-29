#include <iostream>
#include <Dice.h>

using namespace std;

dice::dice(float maxValue)
{
	this->maxValue = maxValue
}

void SetDiceNumber(float dicenumber)
{

}

void SetDiceAmmount(float maxValue)
{
	
}

void DisplayRoll(float dicenumber, float maxValue)
{
	int result = 0;
	for (size_t i = 0; i < dicenumber; i++)
	{
		result += rand() % maxValue + 1; 
	}
	return result
}