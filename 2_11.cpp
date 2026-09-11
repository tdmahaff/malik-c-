//
//  main.cpp
//  2_11
//
// Write a program that prompts the capacity, in gallons, of an automo-
// bile fuel tank and the miles per gallon the automobile can be driven.
// The program outputs the number of miles the automobile can be driven
// without refueling.
//  Created by Dane Mahaffey on 9/11/26.
//

#include <iostream>
using namespace std;

int main() {
    
    float gallons = 0, mpg = 0;
    
    cout << "Enter gallons and mpg: ";
    cin >> gallons >> mpg;
    
    cout << "Miles automobiles can be driven without refeuling is: " << gallons * mpg;
    
    return 0;
    
}
