#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl endl

struct date
{
    ll day;
    ll month;
    ll year;
};

ll isValidInput(struct date d)
{
    if (d.year < 1 || d.month < 1 || d.day < 1 || d.month > 12 || d.day > 31)
    {
        return 0;
    }
    ll monthDays[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (d.year % 400 == 0 || (d.year % 4 == 0 && d.year % 100 != 0))
    {
        monthDays[1] = 29;
    }
    if (d.day > monthDays[d.month - 1])
    {
        return 0;
    }
    return 1;
}

ll printDate(struct date p)
{
    char *month[] =
        {"January", "February", "March", "April", "May", "June", "July",
         "August", "September", "October", "November", "December"};
    cout << month[p.month - 1] << " " << p.day << " " << p.year << nl;
}

int main()
{
    struct date Date;
    cout << "Enter day: ";
    cin >> Date.day;
    cout << "Enter month: ";
    cin >> Date.month;
    cout << "Enter year: ";
    cin >> Date.year;

    if (isValidInput(Date))
    {
        cout << "The date is valid!\n";
        printDate(Date);
    }
    else
    {
        cout << "Invalid date input.\n";
    }

    return 0;
}
