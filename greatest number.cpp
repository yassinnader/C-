#include <iostream>
using namespace std; 

int main ()
{
    int num1, num2, num3;
    cout << "num1 ";
    cin >> num1;
    cout << "num2 ";
    cin >> num2;
    cout << "num3 ";
    cin >> num3;

    if (num1 > num2 && num1 > num3)
    {
        cout << num1 << " Is The Greatest Number\n";
    }
    else
    {
        if (num2 > num3 && num2 > num1)
        {
            cout << num2 << " Is The Greatest Number\n";
        }
        else
        {
            if (num3 > num2 && num3 > num1 )
            {
                cout << num3 << " Is The Greatest Number\n";
            }
            
        }
    }
    
    return 0;       
}  