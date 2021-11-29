#include <iostream>
#include <string>
#include <ctime>
#include <Dice.h>

using namespace std;


int main()
{
	srand(time(NULL));

	float dicenumber;
	float maxValue;
	cout << "Type ammount of dice and ammount of dice sides";
	cin >> dicenumber >> maxValue;
	dice.DisplayRoll(dicenumber, maxValue);
	cout << dice.DisplayRoll() << endl;

	return 0;

}
