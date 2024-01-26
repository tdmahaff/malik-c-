/* 
* Write a value-returning function, isVowel, that returns the value
true if a given character is a vowel and otherwise returns false.
*/
#include <iostream>
#include <cctype>
using namespace std;

bool isVowel(char);

int main() {

	char ch;
	cout << "Enter a character: ";
	cin >> ch;

	if (isVowel(ch)) {
		cout << "Character is a vowel";
	}
	else
		cout << "Character is not a vowel";

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