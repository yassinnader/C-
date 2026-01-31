#include <iostream>
using namespace std; 

int main ()
{
    int num1, num2, op;
    cout << "num1 ";
    cin >> num1;
    cout << "num2 ";
    cin >> num2;
    cout << "[1] +\n";
    cout << "[2] -\n";
    cout << "[3] *\n";
    cout << "[4] /\n";
    cout << "[5] %\n";
    cout << "op ";
    cin >> op;

    if (op == 1)
    
        cout << num1 + num2 << "\n";
    
    else if (op == 2)
    
        cout << num1 - num2 << "\n";
        
    
    else if (op == 3)
    
        cout << num1 * num2 << "\n";
        
    
    else if (op == 4)
    
        cout << num1 / num2 << "\n";
    

    else if (op == 5)
    
        cout << num1 % num2 << "\n";
    

    else 
    
        cout << " op is wrong";
    
    
    return 0;       
}    