#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007            // 1e9 + 7
#define PI 3.14159265358979323846 // acos(-1)
#define nl "\n"
int main()
{
    ll a = 50, b = 10, c, d;
    cout << "a " << &a << nl;
    cout << "b " << &b << nl;
    cout << "c " << &c << nl;
    cout << "d " << &d << nl;
    ll *p = &a, *q = &b;
    cout << "p " << &p << nl;
    cout << "q " << &q << nl;

    // c = q - p;
    c = p - q;
    cout << "c " << c << nl;
    return 0;
}