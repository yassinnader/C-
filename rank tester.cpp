#include <iostream>
using namespace std; 

int main ()
{
    int points;
    cout << "points ";
    cin >> points;
    
    if (points <= 0)
    {
        cout << "bad\n";
    }
    else if 
    (points > 0 && points <= 500)
    
        cout << "not bad\n";
    
    else if (points > 500 && points <= 1000)
    
        cout << "good\n";
    
    else if (points > 1000)
    
        cout << "very good\n";

    
    
    return 0;       
} 