/* Write a program that prompts the user to enter five test scores and then
prints the average test score. (Assume that the test scores are decimal
numbers.) */

#include <iostream>
using namespace std;

int main() {

	double score1, score2, score3, score4, score5;

	cout << "Enter five test scores separated by a space: ";
	cin >> score1 >> score2 >> score3 >> score4 >> score5;

	cout << "The average test score is: " << (score1 + score2 + score3 + score4 + score5) / 5;

	return 0;

}