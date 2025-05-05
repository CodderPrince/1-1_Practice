#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl endl

ll wt[105], val[105];
ll dp[105][100005];

ll func(int ind, int wt_left)
{
    // base case
    if (wt_left == 0 || ind < 0)
    {
        return 0;
    }

    if (dp[ind][wt_left] != -1)
    {
        return dp[ind][wt_left];
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

    return dp[ind][wt_left] = ans;
}

int main()
{
    // initialize dp array by -1
    memset(dp, -1, sizeof(dp));

    int n, w;
    cin >> n >> w;
    for (int i = 0; i < n; i++)
    {
        cin >> wt[i] >> val[i];
    }

    //start last index to first index
    cout << func(n - 1, w) << nl;

    return 0;
}
