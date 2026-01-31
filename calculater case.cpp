#include <iostream>

using namespace std; 

int main ()
{
    double num = 5;
    double n1;
    cout << "enter number 1: ";
    cin >> n1;
    double n2;
    cout << "enter number 2: ";
    cin >> n2;
    int op;
    
    cout << "[1] +\n";
    cout << "[2] -\n";
    cout << "[3] *\n";
    cout << "[4] /\n";
    cout << "enter OPERATION: ";
    cin >> op;

    switch (op)
    {
    case 1:
        cout << n1 << " + " << n2 << " = " << n1 + n2 << "\n";
        break;
    
    case 2:
        cout << n1 << " - " << n2 << " = " << n1 - n2 << "\n";
        break;
    
    case 3:
        cout << n1 << " * " << n2 << " = " << n1 * n2 << "\n";
        break;
    
    case 4:
        cout << n1 << " / " << n2 << " = " << n1 / n2 << "\n";
        break;
    default:
        cout << "Operation Is Not Valid\n";
        break;
    } 
    return 0;       
}