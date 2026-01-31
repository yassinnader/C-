#include <iostream>
#include <string>
#include <cmath>
#include <cctype>

using namespace std;

// Function to check if a string represents a number (digits or decimal point)
bool isNumber(const string& str) {
    for (char c : str) {
        if (!isdigit(c) && c != '.') {
            return false; // If any character is not a digit or decimal point, it's not a number
        }
    }
    return true; // If all characters are digits or decimal points, it's a number
}

int main() {
    string num1, num2, operation;
    double result;

    while (true) {
        cout << "Enter an arithmetic expression (e.g., 5 + 3): \n";
        cout << "num1: \n";
        cin >> num1;
        cout << "operation: \n";
        cin >> operation;
        cout << "num2: \n";
        cin >> num2;
        // Check if both inputs are valid numbers
        if (!isNumber(num1) || !isNumber(num2)) {
            cout << "Please enter valid numbers only." << endl;
            continue;
        }

        // Perform the calculation based on the operation
        if (operation == "+") {
            result = stod(num1) + stod(num2);
        } else if (operation == "-") {
            result = stod(num1) - stod(num2);
        } else if (operation == "*") {
            result = stod(num1) * stod(num2);
        }  else if (operation == "/") {
            result = stod(num1) / stod(num2);
        }  else if (operation == "/") {
            if (stod(num2) == 0) {
                cout << "Division by zero is not allowed." << endl;
                continue;
            }
            result = stod(num1) / stod(num2);
        } else {
            cout << "Invalid operation." << endl;
            continue;
        }

        cout << "Result: " << result << endl;

        // Ask the user if they want to continue
        char choice;
        cout << "Do you want to perform another calculation? (y/n): ";
        cin >> choice;
        if (choice == 'n' || choice == 'N') {
            break;
        }
    }

    return 0;
}