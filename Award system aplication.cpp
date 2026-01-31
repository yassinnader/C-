#include <iostream>
using namespace std; 

int main ()
{
    int num;
    cout << "Type the Number\n";
    cin >> num;

    switch (num)
    {
    case 100:
    case 110:
    case 120:
        cout << "Congrates For The Iphone";
        break;

    case 200:
        cout << "Congrates For The Ipad";
        break;
    
    case 300:
        cout << "Congrates For The TV";
        break;
    
    case 400:
        cout << "Congrates For The KeyChain";
        break;

    default:
        cout << "No Award For This Number";
        break;
    }
    return 0;       
}    