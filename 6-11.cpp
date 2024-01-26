/*
* 
* The following formula gives the distance between two points, ( , )1 1x y
and ( , )2 2x y in the Cartesian plane:
( ) ( )2 1 2 2 1 2
x x y y2 1 2
Given the center and a point on the circle, you can use this formula to
find the radius of the circle. Write a program that prompts the user to
enter the center and a point on the circle. The program should then
output the circle’s radius, diameter, circumference, and area. Your pro-
gram must have at least the following functions:
a. distance: This function takes as its parameters four numbers that rep-
resent two points in the plane and returns the distance between them.
b. radius: This function takes as its parameters four numbers that
represent the center and a point on the circle, calls the function
distance to find the radius of the circle, and returns the circle’s radius.
c. circumference: This function takes as its parameter a number
that represents the radius of the circle and returns the circle’s cir-
cumference. (If r is the radius, the circumference is rπ2 .)
d. area: This function takes as its parameter a number that repre-
sents the radius of the circle and returns the circle’s area. (If r is the
radius, the area is rπ 2 .)
Assume that π 5 3.1416.

*/

#include <iostream>
using namespace std;

double distance(int, int, int, int);
double radius(int, int, int, int);
double circumference(double);
double area(double);

int main() {

	int x1 = 0, x2 = 0, y1 = 0, y2 = 0;
	double radiusValue = 0;

	cout << "Enter x1, x2, y1 and y2: ";
	cin >> x1 >> x2 >> y1 >> y2;

	radiusValue = radius(x1, x2, y1, y2);

	cout << "Circle radius: " << radiusValue << endl;
	cout << "Circle diameter: " << radiusValue * 2 << endl;
	cout << "Circle circumference: " << circumference(radiusValue) << endl;
	cout << "Circle area: " << area(radiusValue) << endl;

	return 0;

}

double distance(int x1, int x2, int y1, int y2) {

	return sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));

}
double radius(int x1, int x2, int y1, int y2) {

	return distance(x1, x2, y1, y2);

}
double circumference(double radius) {

	return 2 * 3.14 * radius;

}
double area(double radius) {

	return 3.14 * pow(radius, 2);

}