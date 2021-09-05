// date : 04-09-2021
// prog3 : ckeck entered year is leap year or not
#include <iostream>
using namespace std;
bool leapYear(long year); //  returns true/false
int main()
{
    long year;

    // takes year as input
    cout << "Enter year to be checked : ";
    cin >> year;

    // calling function to check leap year
    if (leapYear(year))
    {
        cout << year << " is LEAP year" << endl;
    }
    else
    {
        cout << year << " is not a LEAP year" << endl;
    }

    return 0;
}
bool leapYear(long year)
{
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        return true;
    return false;
}
