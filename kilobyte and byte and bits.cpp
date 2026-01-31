#include <iomanip>
#include <iostream>
using namespace std; 

int main ()
{
    double kilobyte;
    cout << "enter your kilobytes to convert to bytes & bits";
    cin >> kilobyte;
    double bytes = kilobyte * 1024;
    cout << bytes << "byets\n";
    double bit = bytes * 8;
    cout << bit << "bits\n";
    return 0;       
}