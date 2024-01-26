/*
* 
* 
* Write a function that takes as a parameter an integer (as a long long
value) and returns the number of odd, even, and zero digits. Also write
a program to test your function.

*/

#include <iostream>
using namespace std;

void count(long long);

int main() {

	long long integer;
	cout << "Enter an integer: ";
	cin >> integer;
	count(integer);

	return 0;

}

void count(long long integer) {

	int x = 0, evens = 0, odds = 0, zeros = 0;

	while (integer != 0) {
		
		x = integer % 10;
		if (x % 2 == 1) {
			odds++;
		}
		else if (x % 2 == 0 && x != 0) {
			evens++;
		}
		else
			zeros++;

		integer /= 10;

	}

	cout << "Odds: " << odds << " Evens: " << evens << " Zeros: " << zeros << endl;


}