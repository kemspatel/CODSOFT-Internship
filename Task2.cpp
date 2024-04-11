#include <iostream>

using namespace std;

int main() {
    char op;
    float num1, num2;

    cout << "Welcome to the Basic Calculator Program!" << endl;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "Choose an operation (+, -, *, /): ";
    cin >> op;

    switch (op) {
        case '+':
            cout << "Result: " << num1 + num2 << endl;
            break;
        case '-':
            cout << "Result: " << num1 - num2 << endl;
            break;
        case '*':
            cout << "Result: " << num1 * num2 << endl;
            break;
        case '/':
            if (num2 == 0) {
                cout << "Error! Division by zero is not allowed." << endl;
            } else {
                cout << "Result: " << num1 / num2 << endl;
            }
            break;
        default:
            cout << "Invalid operation! Please choose from +, -, *, /." << endl;
    }

    return 0;
}
