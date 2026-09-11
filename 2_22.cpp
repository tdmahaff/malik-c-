//
//  main.cpp
//  2_22
//
// One metric ton is approximately 2,205 pounds. Write a program that
// prompts the user to input the amount of rice, in pounds, a bag can hold.
// The program outputs the number of bags needed to store one metric
// ton of rice.
//
//  Created by Dane Mahaffey on 9/11/26.
//

#include <iostream>
using namespace std;

int main() {
    
    double bag_pounds;
    
    cout << "Input amount of rice in pounds a bag can hold: ";
    cin >> bag_pounds;
    cout << "Number of bags needed to store one metric ton of rice is: " << 2205 / bag_pounds;
    
    return 0;
    
}
