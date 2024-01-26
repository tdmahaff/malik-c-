/*Write a program that prompts the user to input a sequence of char-
acters and outputs the number of vowels. (Use the function isVowel
written in Programming Exercise 2.)*/

#include <iostream>
#include <cctype>
using namespace std;

bool isVowel(char);

int main() {

	string str = ""; 
	int vowelCount = 0;
	cout << "Enter a string: ";
	cin >> str;

	for (int i = 0; i < str.length() - 1; i++) {

		if (isVowel(str[i])) {
			vowelCount++;
		}
		else
			continue;

	}

	cout << "Vowel count is: " << vowelCount;

	return 0;

}

bool isVowel(char ch) {

	switch (toupper(ch)) {
	case 'A':
	case 'E':
	case 'I':
	case 'O':
	case 'U': return true;
	default: return false;

	}

}