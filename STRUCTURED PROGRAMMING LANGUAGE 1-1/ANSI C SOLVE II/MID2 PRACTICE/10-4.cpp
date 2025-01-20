#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl endl

struct Date
{
    int day;
    int month;
    int year;
};

int valid(Date d)
{
    if (d.day < 1 || d.month < 1 || d.year < 1 || d.day > 31 || d.month > 12)
    {
        return 0;
    }

    int month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (d.year % 400 == 0 || (d.year % 4 == 0 && d.year % 100 != 0))
    {
        month[1] = {29};
    }
    if (d.day > month[d.month - 1])
    {
        return 0;
    }

    return 1;
}

int printDate(Date d)
{
    const char month[][20] =
        {
            "January", "February", "March", "April", "May", "June",
            "July", "August", "September", "October", "November", "December"};

    cout << d.month[month - 1] << " " << d.day << ", " << d.year << nl << nl;
}

int main()
{
    Date date;
    cout << "\nEnter Day: ";
    cin >> date.day;
    cout << "Enter month: ";
    cin >> date.month;
    cout << "Enter Year: ";
    cin >> date.year;

    if (valid(date))
    {
        cout << "\nDate is valid!\n";
        printDate(date);
    }

    else
    {
        cout << "Date is invalid!\n\n";
    }

    return 0;
}