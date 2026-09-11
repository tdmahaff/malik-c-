//
//  Write a program that prompts the user to input five decimal numbers.
// The program should then add the five decimal numbers, convert the
// sum to the nearest integer, and print the result.
//

#include <iostream>
using namespace std;


int main() {
    
    double num1 = 0, num2 = 0, num3 = 0, num4 = 0, num5 = 0;
    
    cout << "Enter five numbers separated by a space: ";
    cin >> num1 >> num2 >> num3 >> num4 >> num5;
    
    cout << static_cast<int>(num1 + num2 + num3 + num4 + num5 + .5);
    
    return 0;
    
}
