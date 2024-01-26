/*
* During winter when it is very cold, typically, everyone would like to
know the windchill factor, especially, before going out. Meteorologists
use the following formula to compute the windchill factor, W:
W T V T V35.74 0.6215 * 35.75 * 0.4275 * * ,0.16 0.16
5 1 2 1
where V is the wind speed in miles per hour and T is the temperature
in degrees Fahrenheit. Write a program that prompts the user to input
* 
* the wind speed in miles per hour, and the temperature in degrees Fahr-
enheit. The program then outputs the windchill factor. Your program
must contain at least two functions: one to get the user input and the
other to determine the windchill factor.
* */


#include <iostream>
using namespace std;

double windchill(double, double);

int main() {

	double windspeed, tempFahrenheit;

	cout << "Input the wind speed in miles per hour: ";
	cin >> windspeed;

	cout << "Enter the temperature in degrees fahrenheit: ";
	cin >> tempFahrenheit;

	cout << "Windchill factor is: " << windchill(windspeed, tempFahrenheit);

	return 0;

}

double windchill(double windspeed, double tempFahrenheit) {

	return 35.74 + (.6215 * tempFahrenheit) - (35.76 * pow(windspeed, .16)) + (.4275 * tempFahrenheit * pow(windspeed, .16));

}
