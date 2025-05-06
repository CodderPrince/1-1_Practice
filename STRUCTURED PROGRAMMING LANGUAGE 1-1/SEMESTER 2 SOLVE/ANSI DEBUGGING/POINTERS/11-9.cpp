#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl "\n"

int main()
{
    int x = 10, y = 10;
    int *p1 = &x, *p2 = &y;
    // a
    cout << (*p1)++ << nl;

    // b
    cout << --(*p2) << nl;

    // c
    cout << *p1 + (*p2)-- << nl;

    // d
    cout << ++(*p2) - *p1 << nl;

    return 0;
}