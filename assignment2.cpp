//
//#include <iostream>
//using namespace std;
//using std::string;
///*
//Make a C/C++ function/method that can adjust the light intensity to a level between 0 and 100 % (visually graded),
//given by a parameter. e.g. turn on max. intensity: pwm_light(100);
//• Write a simple program that use the function to demonstrate it works.
//It must take one command line parameter to set light intensity; e.g. set_light 50 (to set light intensity to 50%)
//• The program must check whether the port and PWM channel are initialized, otherwise do this first.
//• Use one of the Beaglebone’s PWM channels for output.
//*/
//string pwmLEDPath = "sys/class/pwm/pwmchip1";
//string pwmLEDState = "cat/sys/ devices/platform/ocp/ocp:P9_21_pinmux/state";
//
//int main()
//{
//
//	
//	int ledValue;
//	string ledMode;
//	cout << "enter the LED number you would like to turn on";
//	cin >> ledValue;
//	cout << "enter a mode for the LED";
//	cin >> ledMode;
//
//	cout << "you entered: " << ledValue;
//	return 0;
//}
//void pwm_light(int intensity) {
//
//	//check if pin is set for pwm if it is not set it for pwm
//	if (pwmLEDState != "pwm")
//		{
//
//		//Config - pin P9_21 pwm
//		}
//
//}
//// Run program: 