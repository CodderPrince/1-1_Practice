// swap two number using pointer function

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl endl

void swap(ll *a, ll *b)
{
    ll temp;
    temp = *b;
    *b = *a;
    *a = temp;

    cout << "After swapping: a = " << *a << " and b = " << *b << nl;
}

int main()
{
    cout << "Enter two number: ";
    ll a, b;
    cin >> a >> b;
    cout << "Before swapping: a = " << a << " and b = " << b << nl;

    swap(&a, &b);

    return 0;
}