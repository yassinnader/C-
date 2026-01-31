#include <iostream>
using namespace std;

// Declare Function
void calc(int numOne, int numTwo, char op)
{
    if (op == '+')
    {
        cout << numOne + numTwo << "\n";
    }
    else if (op == '-')
    {
        cout << numOne - numTwo << "\n";
    }
    else if (op == '*')
    {
        cout << numOne * numTwo << "\n";
    }
    else if (op == '/')
    {
        cout << numOne / numTwo << "\n";
    }
    else if (op == '%')
    {
        cout << numOne % numTwo << "\n";
    }
    else 
    {
        cout << "invalud";
    }
}

int main()
{ 
    calc(100, 80, '&');
    return 0;
}
