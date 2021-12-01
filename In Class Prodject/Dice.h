
#ifndef DICE_H
#define DICE_H	

#include <string>

using namespace std;


class dice
{
public:
	int result = 0;
	dice();

	int Dice(int maxValue, int dicenumber, int result);

	int maxValue;
	int dicenumber;
};
#endif
