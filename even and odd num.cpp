#include <iostream>
using namespace std; 

int main ()
{
    int num;
    cout << "enter number\n";
    cin >> num;
    
    if (num % 2 == 0)
    
        cout << "The Number " << num << " even number\n";
    
    else
    
        cout << "The Number " << num << " odd number\n";
    
    return 0;       
}   