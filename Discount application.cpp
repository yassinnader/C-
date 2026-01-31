#include <iostream>
using namespace std; 

int main ()
{
    int price = 100;
    int disscount = 10;
    int years;
    cout << "Type The Number Of Years in This Company\n";
    cin >> years;

    switch (years)
    {
    case 1:
        disscount = 20;
        break;
    
    case 2:
        disscount = 40;
        break;
    
    case 3:
        disscount = 80;
        break;
    }
    cout << "The price Is " << price - disscount << "\n";
    return 0;       
}  