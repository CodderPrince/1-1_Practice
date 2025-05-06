// old 10.4 new 11.4 **PRINCE**
// create a function to check input date is valid or not [Raajkumar]
/*
1.Check date, month, year validity
2. Check year is leap year or not
3. If leaf year count february is 29 days
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl endl

struct date
{
    int day;
    int month;
    int year;
};

int valid(struct date d)
{
    if (d.day < 1 || d.month < 1 || d.year < 1 || d.day > 31 || d.month > 12)
    {
        return 0;
    }
    int month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (d.year % 400 == 0 || (d.year % 4 == 0 && d.year % 100 != 0))
    {
        month[1] = 29;
    }
    if (d.day > month[d.month - 1])
    {
        return 0;
    }
    return 1;
}

int printDate(struct date d)
{
    const char month[][20] =
        {
            "January", "February", "March", "April", "May", "June",
            "July", "August", "September", "October", "November", "December"};
    cout << d.month[month - 1] << " " << d.day << ", " << d.year << nl << nl;
}

int main()
{
    struct date Date;
    cout << "\nEnter Day: ";
    cin >> Date.day;
    cout << "Enter Month: ";
    cin >> Date.month;
    cout << "Enter Year: ";
    cin >> Date.year;

    if (valid(Date))
    {
        cout << "Date is Valid!\n";
        printDate(Date);
    }
    else
    {
        cout << "Date is invalid!\n\n";
    }

    return 0;
}