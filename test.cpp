#include <iostream>
#include <ctime>

using namespace std;

int main() {
    // Get the user's birth month and day
    int birthMonth, birthDay;
    cout << "Enter your birth month (1-12): ";
    cin >> birthMonth;
    cout << "Enter your birth day (1-31): ";
    cin >> birthDay;

    // Get the current date and time
    time_t now = time(0);
    tm* current_time = localtime(&now);

    // Calculate the age in years
    int ageYears = current_time->tm_year - (1900 + birthDay / 365);

    // Calculate the remaining days in the current year
    int daysInCurrentYear = 365 - (birthDay + (ageYears * 365));

    // Calculate the age in months
    int ageMonths = (ageYears * 12) + (current_time->tm_mon - birthMonth + 1);
    if (current_time->tm_mday < birthDay) {
        ageMonths--;
        daysInCurrentYear += 365;
    }

    // Calculate the age in weeks
    int ageWeeks = daysInCurrentYear / 7;
    daysInCurrentYear %= 7;

    // Calculate the age in days, hours, minutes, and seconds
    int ageDays = daysInCurrentYear;
    int ageHours = current_time->tm_hour;
    int ageMinutes = current_time->tm_min;
    int ageSeconds = current_time->tm_sec;

    // Print the results
    cout << "Your age is:\n";
    cout << "  " << ageYears << " years\n";
    cout << "  " << ageMonths << " months\n";
    cout << "  " << ageWeeks << " weeks\n";
    cout << "  " << ageDays << " days\n";
    cout << "  " << ageHours << " hours\n";
    cout << "  " << ageMinutes << " minutes\n";
    cout << "  " << ageSeconds << " seconds\n";

    return 0;
}