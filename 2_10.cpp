/* Write a program that prompts the user to input five decimal numbers.
The program should then add the five decimal numbers, convert the
sum to the nearest integer, and print the result*/

#include <iostream>
using namespace std;

int main() {

	double num1, num2, num3, num4, num5, sum;
	cout << "Input five decimal numbers: ";
	cin >> num1 >> num2 >> num3 >> num4 >> num5;

	sum = num1 + num2 + num3 + num4 + num5;

	cout << "Sum converted the nearest integer is: " << static_cast<int>(sum + 0.5);

	return 0;

}