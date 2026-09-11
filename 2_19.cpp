//
//  main.cpp
//  2_19
//
// Write a program that prompts the user to input the number of quar-
// ters, dimes, and nickels. The program then outputs the total value of the
// coins in pennies.
//
//  Created by Dane Mahaffey on 9/11/26.
//

#include <iostream>
using namespace std;

int main() {
    
    int quarters = 0, dimes = 0, nickels = 0;
    
    cout << "Enter # of quarters, dimes, & nickels separated by a space: ";
    cin >> quarters >> dimes >> nickels;
    cout << "Total value of coins is " << quarters * 25 + dimes * 10 + nickels * 5 << " pennies";
    
    return 0;
    
}
