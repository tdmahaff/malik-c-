//
//  main.cpp
//  2_21
//
// Newton’s law states that the force, F, between two bodies of masses
// is F = k*(M1*M2/d^2)
// in which k is the gravitational constant and d is the distance between the
// bodies. The value of k is approximately 6.67 * 10^-8 dyn. cm2/g2. Write
// a program that prompts the user to input the masses of the bodies and
// the distance between the bodies. The program then outputs the force
// between the bodies.
//
//  Created by Dane Mahaffey on 9/11/26.
//

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    
    double k = 6.67 * pow(10, -8), m1 = 0, m2 = 0, distance = 0, force = 0;
    cout << "Enter m1, m2 and distance separated by spaces: ";
    cin >> m1 >> m2 >> distance;
    
    force = k*(m1*m2/pow(distance,2));
    
    cout << "Force between the bodies is: " << force;
    
    return 0;
    
}
