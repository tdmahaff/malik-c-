//
//  main.cpp
//  2_12
//
// Write a C11 program that prompts the user to input the elapsed time
//for an event in seconds. The program then outputs the elapsed time in
//hours, minutes, and seconds. (For example, if the elapsed time is 9,630
//seconds, then the output is 2:40:30.)
//
//  Created by Dane Mahaffey on 9/11/26.
//

#include <iostream>
using namespace std;


int main() {
    
    int seconds = 0;
    
    cout << "Input elapsed time for an event in seconds: ";
    cin >> seconds;
    
    cout << seconds / 3600 << ":" << (seconds / 60) % 60 << ":" << seconds % 60 << endl;
    
    return 0;
    
}
