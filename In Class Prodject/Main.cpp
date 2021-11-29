#include <iostream>
#include <string>
#include <Dice.h>

using namespace std;


int main()
{
	float dicenumber;
	float diceammount;
	cout << "Type ammount of dice and ammount of dice sides";
	cin >> dicenumber >> diceammount;
	dice.SetDiceNumber(dicenumber);
	dice.SetDiceSides(diceammount);
	dice.DisplayRoll();

	return 0;

}
