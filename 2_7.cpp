/* Write a program that prompts the user to input a decimal number and
outputs the number rounded to the nearest integer. */

#include <iostream>
using namespace std;

int main() {

	double num1;

	cout << "Input a decimal number to be rounded: ";
	cin >> num1;

	cout << "Number rounded to nearest integer is: " << static_cast<int>(num1 + 0.5);

	return 0;

}