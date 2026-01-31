#include <iostream>
using namespace std;

int main()
{
    int geussNumber = 7;
    int geusstryes = 0;
    int chosse;
    cout << "guess the number between 1 & 10\n";
    while (true)
    {
        cin >> chosse;
        if (chosse == geussNumber)
        {
            cout << "Great, Correct Guess\n";
            break;
        }
        else 
        {
            cout << "Sorry, Wrong Guess\n";
            geusstryes++;
        }
        if (geusstryes == 3)
        {
            cout << "Sorry, you faild the number is: " << geussNumber << "\n";
            break;
        }
    }
    return 0;
}