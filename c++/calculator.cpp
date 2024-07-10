#include <iostream>
using namespace std;

int main() {
    // oeprator and number variables
    char op = ' ';
    double num1 = 0, num2 = 0, result = 0;

    // calculator program
    cout << "*********** CALCULATOR ***********" << endl;

    // operator
    cout << "Enter ( +, -, *, or / ): "; 
    cin >> op;

        // 1st and 2nd numbers
        cout << "Enter 1st num: ";
        cin >> num1;

        cout << "Enter 2nd num: ";
        cin >> num2;

        // calculation
        switch (op) {
            case '+': result = num1 + num2;
            break;
            case '-': result = num1 - num2;
            break;
            case '/': result = num1 / num2;
            break;
            case '*': result = num1 * num2;
            break;
            default: cout << "Invalid operation!" << endl;
            return 0;
        }

    cout << "Result: " << result << endl;
    
    cout << "**********************************" << endl;

    return 0;
}