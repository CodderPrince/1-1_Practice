#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl endl

ll isPrime(ll x)
{
    if (x <= 1) // n=1
    {
        return 0;
    }
    if (x <= 2 || x <= 3)
    {
        return 1;
    }
    if (x % 2 == 0) // n=16
    {
        return 0;
    }
    for (int i = 3; i * i <= x; i += 2)
    {
        if (x % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll cnt = 0;
        ll x = sqrt(n);
        if (x * x == n && isPrime(x))
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}