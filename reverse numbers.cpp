#include <iostream>
using namespace std;

int main()
{
    int values[5];
    int input;
    cout << "Tpe 5 numbers to reverse\n";

    for (int i = 4; i > -1; i--)
    {
        cin >> input;
        values[i] = input;
    }

    cout << "========================\n";

    for (int i = 0; i < 5; i++)
    {
        cout << values[i] << "\n";
    }
    return 0;
}
