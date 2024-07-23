#include <iostream>
#include <cmath>

using namespace std;

int main() {
    // welcome prompt
    cout << "Welcome to The Hypotenuse Calculator!\n";
    
    // calculate hypotenuse
    double a, b, c;

    // enter sides
    cout << "Enter side A: ";
    cin >> a;
    cout << "Enter side B: ";
    cin >> b;
    cout << "Enter side C: ";
    cin >> c;
    
    // powers
    a = pow(a, 2);
    b = pow(b, 2);
    c = sqrt(a + b);

    // result 
    cout << "side C: " << c << endl; 
    return 0;
}