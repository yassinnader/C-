#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double num1, num2, result;
    char operation;

    cout << "Enter an operation (+, -, *, /, ^, log, ln, sin, cos, tan, asin, acos, atan): ";
    cin >> operation;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    switch (operation) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 == 0) {
                cout << "Error: Division by zero" << endl;
                return 1;
            }
            result = num1 / num2;
            break;
        case '^':
            result = pow(num1, num2);
            break;
        case 'log':
            if (num1 <= 0) {
                cout << "Error: Logarithm of non-positive number" << endl;
                return 1;
            }
            result = log10(num1);
            break;
        case 'ln':
            if (num1 <= 0) {
                cout << "Error: Natural logarithm of non-positive number" << endl;
                return 1;
            }
            result = log(num1);
            break;
        case 'sin':
            result = sin(num1);
            break;
        case 'cos':
            result = cos(num1);
            break;
        case 'tan':
            result = tan(num1);
            break;
        case 'asin':
            if (abs(num1) > 1) {
                cout << "Error: Arcsine argument out of range" << endl;
                return 1;
            }
            result = asin(num1);
            break;
        case 'acos':
            if (abs(num1) > 1) {
                cout << "Error: Arccosine argument out of range" << endl;
                return 1;
            }
            result = acos(num1);
            break;
        case 'atan':
            result = atan(num1);
            break;
        default:
            cout << "Invalid operation" << endl;
            return 1;
    }

    cout << "Result: " << result << endl;

    return 0;
}