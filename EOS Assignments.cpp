// EOS Assignments.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	string pathLED = "sys/class/leds/beaglebone:green:usr";
	int numberLED=0;
	int ledValue;
		 string ledMode;
	cout << "enter the LED number you would like to activate \n to to activate ALL Leds enter 4";
	cin >> ledValue;
	cout << "enter a mode for the LED";
	cin >> ledMode;
	
	if (ledValue >=0 && ledMode !="") {
		switch (ledValue)
		{
		case 0: numberLED = 0;
			break;
		case 1:numberLED = 1;
			break;
		case 2: numberLED = 2;
			break;
		case 3: numberLED = 3;
			break;
		case 4:numberLED=4;
			break;
		default: cout << "you entered an invalid value, please enter a number between 1-4";
			break;
		}
		cout << "you entered: " << ledValue + " " + ledMode;

	}
	else
	{
		cout << "enter the LED number you would like to turn on & the mode you would like to set";

	}


	
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
