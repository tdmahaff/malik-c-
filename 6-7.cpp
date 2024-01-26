/*
* Write a program that prompts the user to enter two positive integers
less than 1,000,000,000 and the program outputs the sum of all the
prime numbers between the two integers. Two prime numbers are
called twin primes, if the difference between the two primes is 2 or −2.
Have the program output all the twin primes and the number of twin
primes between the two integers.
*/

#include <iostream>
using namespace std;

bool isPrime(int);

int main() {

	int num1 = 0, num2 = 0, min = 0, max = 0, primeTotal = 0;
	int prime1 = 0, prime2 = 0, twinPrimeCount = 0;
	cout << "Enter two positive integers less than 1,000,000,000";
	cin >> num1 >> num2;

	if (num1 < num2) {
		min = num1;
		max = num2;
	}
	else {
		min = num2;
		max = num1;
	}

	for (int x = min; x < max; x++) {
		if (isPrime(x)) {
			primeTotal += x;
			prime2 = prime1;
			prime1 = x;
			if (prime2 - prime1 == 2 || prime2 - prime1 == -2) {
				cout << "Twin primes: " << prime1 << " " << prime2 << endl;
				twinPrimeCount += 2;
			}
		}
	}

	cout << "Sum of all prime numbers between two integers: " << primeTotal << endl;
	cout << "Numbert of twin primes between the two integers: " << twinPrimeCount << endl;

}

bool isPrime(int x) {

	for (int i = 2; i < x / 2; i++) {

		if (x % i == 0) {
			return false;
		}

	}

	return true;

}