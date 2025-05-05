#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl endl
int fact(ll n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * fact(n - 1);
    }
}
 
int main()
{
    cout << "Enter a number: ";
    ll n;
    cin >> n;

    ll res = fact(n);
    cout << "Factorial value is: " << res << nl;

    return 0;
}