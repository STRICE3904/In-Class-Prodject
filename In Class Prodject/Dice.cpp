#include <iostream>
#include <ctime>
#include "Dice.h"

using namespace std;

int Dice(int maxValue, int dicenumber, int result)
{
	for (int i = 0; i < dicenumber; i++)
	{
		result += rand() % maxValue + 1;
	}
	cout << "Dice roll was: " << result << endl;

	return result;
}