
#ifndef DICE_H
#define DICE_H	

#include <string>

using namespace std;


class dice
{
public:
	dice();
	~dice();

	void SetDiceNumber(float d_number);

	void SetDiceSides(float d_ammount);

	void DisplayRoll();

private:
	float d_number;
	float d_ammount

};
#endif
