/* Consider the following program segment:
//include statement(s)
//using namespace statement
int main()
{
//variable declaration
//executable statements
//return statement
}
a. Write a C11 statement that includes the header file iostream.
b. Write a C11 statement that allows you to use cin, cout, and endl
without the prefix std::.
c. Write C11 statement(s) that declare the following variables: num1,
num2, num3, and average of type int.
d. Write C11 statements that store 125 into num1, 28 into num2, and
-25 into num3.
e. Write a C11 statement that stores the average of num1, num2, and
num3 into average.
f. Write C11 statement(s) that output the values of num1, num2,
num3, and average.
g. Compile and run your program. */

#include <iostream>
using namespace std;

int main() {

	int num1, num2, num3, average;

	num1 = 125;
	num2 = 28;
	num3 = -25;
	average = (num1 + num2 + num3) / 3;

	cout << "Num 1: " << num1 << " Num 2: " << num2 << " Num 3: " << num3 << " Average: " << average << endl;

	return 0;
}