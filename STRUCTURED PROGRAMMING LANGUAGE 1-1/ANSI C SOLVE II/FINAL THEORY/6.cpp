// second way of pass by reference

#include <bits/stdc++.h>
using namespace std;
void square(int &x) // received original x address
{
    x = x * x;
    cout << "Update current value: " << x << endl;
}
int main()
{
    int x = 5;
    cout << "Before: " << x << endl;
    square(x); // pass copy of x
    cout << "After Updated: " << x << endl;
    square(x); // pass copy of x
    cout << "After Updated: " << x << endl;

    return 0;
}
/*
pass by reference means update the current value
*/