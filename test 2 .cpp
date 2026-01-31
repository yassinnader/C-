#include <iostream>
#include <ctime>

using namespace std;

int main() {
    // Get the user's birth year, month, and day
    int birthYear, birthMonth, birthDay;
    cout << "Enter your birth year (1900-2024): ";
    cin >> birthYear;
    cout << "Enter your birth month (1-12): ";
    cin >> birthMonth;
    cout << "Enter your birth day (1-31): ";
    cin >> birthDay;

    int age;
    int age_in_year = age * 124 ;
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