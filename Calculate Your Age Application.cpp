#include <iostream>
using namespace std;

int main()
{
    cout << "====================================\n";
    cout << "== Calculate Your Age Application ==\n";
    cout << "====================================\n";

    int age;
    cout << "enter your age: ";
    cin >> age;
    
    int age_in_Months = age * 12;
    int age_in_weeks = age * 52;
    int age_in_days = age * 365;
    int age_in_hours = age * 8766;
    int age_in_minutes = age * 525600;
    int age_in_second = age * 31536000;


    cout << "Age In Months Is: " << age_in_Months << " Months\n";
    cout << "Age In Weeks Is: " << age_in_weeks << " Weeks\n";
    cout << "Age In Days Is: " << age_in_days << " Days\n";
    cout << "Age In Hours Is: " << age_in_hours << " Hours\n";
    cout << "Age In Minutes Is: " << age_in_hours << " Minutes\n";
    cout << "Age In Second Is: " << age_in_hours << " second\n";

    return 0;
}

// 12 month in year
// 52 week in year
// 365 days in year
// 8766 houre in year
// 525600 mintus in the year
// 31536000 second in the year