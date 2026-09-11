//
//  main.cpp
//  2_16
//
//  A milk carton can hold 3.78 liters of milk. Each morning, a dairy farm
// ships cartons of milk to a local grocery store. The cost of producing one
// liter of milk is $0.38, and the profit of each carton of milk is $0.27. Write
// a program that does the following:
// a. Prompts the user to enter the total amount of milk produced in the
// morning.
// b. Outputs the number of milk cartons needed to hold milk. (Round
// your answer to the nearest integer.)
// c. Outputs the cost of producing milk.
// d. Outputs the profit for producing milk.
//
//  Created by Dane Mahaffey on 9/11/26.
//

#include <iostream>
using namespace std;

int main() {
    
    double milk_produced = 0;
    cout << "Enter total amount of milk produced in the morning in liters: ";
    cin >> milk_produced;
    cout << "\nNumber of milk cartons needed to hold milk: " << static_cast<int>((milk_produced / 3.78)+ .5) << endl;
    cout << "Cost of producing milk is: " << milk_produced * .38 << endl;
    cout << "Profit for producing milk is: " << (milk_produced / 3.78) * .27 << endl;
    
    return 0;
    
}
