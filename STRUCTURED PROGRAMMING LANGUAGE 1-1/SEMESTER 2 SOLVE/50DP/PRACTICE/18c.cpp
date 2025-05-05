#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl endl

ll wt[]={3,4,5}, val[]={30,50,60};

ll func(int ind, int wt_left)
{
    // base case
    if (wt_left == 0 || ind < 0)
    {
        return 0;
    }

    // If the weight of the current item exceeds the remaining capacity,
    // move to the next item without choosing the current one
    if (wt_left - wt[ind] < 0)
    {
        return func(ind - 1, wt_left);
    }

    // Don't choose item at ind
    ll ans = func(ind - 1, wt_left);

    // Choose item at ind
    ans = max(ans, func(ind - 1, wt_left - wt[ind]) + val[ind]);

    return ans;
}

int main()
{
    int n=3, w=8;
    

    // start last index to first index
    cout << func(n - 1, w) << nl;

    return 0;
}
