// Most optimize recursive factorial for any online judge

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl endl

const ll N = 1e5 + 10;
ll fact[N];

int factorial(ll n)
{
    fact[0] = fact[1] = 1;
    for (ll i = 2; i < N; i++)
    {
        fact[i] = fact[i - 1] * i;
    }
}

int main()
{
    cout << "Enter a number: ";
    ll n;
    cin >> n;
    factorial(n);
    cout << fact[n] << nl;

    return 0;
}