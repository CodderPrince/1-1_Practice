#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl endl
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back
#define mp make_pair
#define F first
#define S second

#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define ROF(i, a, b) for (int i = (a); i > (b); i--)
#define F0R(i, n) FOR(i, 0, n)
#define ROF0R(i, n) ROF(i, n, 0)
#define EACH(x, a) for (auto &x : a)

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define ld long double

#define mod 1000000007            // 1e9 + 7
#define PI 3.14159265358979323846 // acos(-1)
#define endl "\n"

typedef vector<int> vi;
typedef pair<int, int> pii;

// Additional Macros and Constants
#define sz(v) (int)v.size()
#define INF 1000000000

// Additional Data Structures
typedef vector<pii> vpii;
typedef vector<ll> vll;
typedef set<int> si;
typedef unordered_set<int> usi;
typedef map<int, int> mi;
typedef unordered_map<int, int> umi;

// Function to find max, min, and mid
ll mul(ll a, ll b, ll c)
{
    ll max_val, min_val, mid_val;
    if (a > b && a > c)
    {
        max_val = a;
        if (b > c)
        {
            min_val = c;
            mid_val = b;
        }
        else
        {
            mid_val = c;
            min_val = b;
        }
    }
    else if (b > a && b > c)
    {
        max_val = b;
        if (a > c)
        {
            min_val = c;
            mid_val = a;
        }
        else
        {
            mid_val = c;
            min_val = a;
        }
    }
    else
    {
        max_val = c;
        if (a > b)
        {
            mid_val = a;
            min_val = b;
        }
        else
        {
            mid_val = b;
            min_val = a;
        }
    }
    return make_tuple(max_val, min_val, mid_val);
}

// Main function
int main()
{
    fastio;

    ll a, b, c;
    cin >> a >> b >> c;

    // Call the function to get max, min, and mid
    auto result = mul(a, b, c);

    // Print the results
    cout << "Max: " << get<0>(result) << ", Min: " << get<1>(result) << ", Mid: " << get<2>(result) << nl;

    return 0;
}
