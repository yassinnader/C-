#include <iostream>
#include <limits.h>

using namespace std;

int main() {
    int answer;
    cout << "geuss the number bettween 1 to 10: \n";
    cin >> answer;

    if (answer == 3)
    {
        cout << "Congratulations the number is corret!";
    }

    if (answer != 3)
    {
        cout << "your are wrong try again";
    }
    
    return 0;
}