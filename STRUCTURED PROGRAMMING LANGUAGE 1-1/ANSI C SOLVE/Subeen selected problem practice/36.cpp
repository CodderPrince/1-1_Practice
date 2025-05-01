#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl endl

int main()
{
    ll t;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;

        // map<string, int> m;
        set<string> s;
        for (ll i = 0; i < n; i++)
        {
            string str;
            cin >> str;
            s.insert(str);
        }

        for (auto x : s)
        {
            cout << x << nl;
        }
    }

    return 0;
}
