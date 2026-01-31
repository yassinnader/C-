#include <iostream>
using namespace std;

int main () 
{
    char letter;
    int ascll;
    cout << "input the letter: ";
    cin >> letter;

    cout << "input the ascll: ";
    cin >> ascll;
    cout << "ascll is: " << int (letter) << endl;
    cout << " letter is: " << char (ascll) << endl;
    return 0;
}