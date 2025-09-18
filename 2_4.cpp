/* Repeat Programming Exercise 3 by declaring num1, num2, and num3, and
average of type double. Store 75.35 into num1, -35.56 into num2, and
15.76 into num3. */

#include <iostream>
using namespace std;

int main() {

	double num1, num2, num3, average;

	num1 = 75.35;
	num2 = -35.56;
	num3 = 15.76;
	average = (num1 + num2 + num3) / 3;

	cout << "Num 1: " << num1 << " Num 2: " << num2 << " Num 3: " << num3 << " Average: " << average << endl;

	return 0;
}