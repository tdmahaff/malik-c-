/*

Write a program that defines the named constant PI, const double
PI = 3.14159; , which stores the value of π.The program should use
PIand the functions listed in Table 6 - 1 to accomplish the following :
a.Output the value of π .
b.Prompt the user to input the value of a double variable r, which stores
the radius of a sphere.The program then outputs the following :
i.The value of 4.0 2
rπ, which is the surface area of the sphere.
ii.The value of(4.0 / 3.0) 3
rπ, which is the volume of the sphere.
*/

#include <iostream>
using namespace std;

int main() {

	const double PI = 3.14159;
	double radius = 0;
	cout << "Square root of pi: " << sqrt(PI) << endl;
	
	cout << "Input the value of a double variable r: ";
	cin >> radius;
	cout << "Surface area of the sphere: " << 4 * PI * pow(radius, 2) << endl;
	cout << "Volume of the sphere: " << (4 / 3) * PI * pow(radius, 3);


	return 0;

}