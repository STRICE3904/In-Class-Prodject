
#ifndef DICE_H
#define DICE_H	

#include <string>

using namespace std;


class dice
{
public:
	dice(float maxValue);
	~dice();

	void DisplayRoll(float dicenumber, float maxValue);

private:
	float maxValue;
};
#endif
