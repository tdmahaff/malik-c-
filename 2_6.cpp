/* Consider the following program segment :
//include statement(s)
//using namespace statement
int main()
{
	//variable declaration
	//executable statements
	//return statement
}
a.Write C11 statements that include the header files iostreamand
string.
b.Write a C11 statement that allows you to use cin, cout, and endl
without the prefix std::.
c.Write C11 statements that declare the following variables : name of
type stringand studyHours of type double.
d.Write C11 statements that promptand input a string into name
and a double value into studyHours.
e.Write a C11 statement that outputs the values of name and
studyHours with the appropriate text.For example, if the value of
name is "Donald" and the value of studyHours is 4.5, the output is :
Hello, Donald! on Saturday, you need to study 4.5 hours for the exam.
f. Compile and run your program. */

#include <iostream>
#include <string>
using namespace std;

int main() {

	string name;
	double studyHours;

	cout << "Input a name: ";
	cin >> name;
	cout << "Input number of study hours needed for the exam: ";
	cin >> studyHours;

	cout << "Hello, " << name << "! on Saturday, you need to study " << studyHours << " hours for the exam." << endl;

	return 0;
}

