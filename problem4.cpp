#include <iostream>
using namespace std;

int main() 
{
    int day, month, year;
    cin >> day >> month >> year;

    if (month < 1 && month > 12) { 
        cout << "INVALID DATE";
        return 0;
    }

    bool leapYear = (year % 400 == 0) ||
                    (year % 4 == 0 && year % 100 != 0);

    int Maxdays;

    if (month == 2) {
        Maxdays = leapYear ? 29 : 28;
    }
    else if (month == 4 || month == 6 ||
             month == 9 || month == 11) {
        Maxdays = 30;
    }
    else {
        Maxdays = 31;
    }

    if (day >= 1 && day <= Maxdays) {
        cout << "VALID DATE";
    }
    else {
        cout << "INVALID DATE";
    }

    return 0;
}