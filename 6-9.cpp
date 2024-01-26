#include <iostream>
using namespace std;

void reverseDigit(int);

int main() {

	int input = 0;
	cout << "Enter an integer: ";
	cin >> input;
	cout << "Reverse digit is: ";
	reverseDigit(input);

	return 0;

}

void reverseDigit(int x) {

	int revNum = 0;

	while (x != 0) {

		cout << x % 10;
		x /= 10;

	}


}