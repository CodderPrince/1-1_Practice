/*
DP PROBLEM NUMBER : 2
Longest Commeon Subsequence[LCS]
Name: PRINCE
ID: 12105007
Approach dp table: bottom-up
Print approach: Basic
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl "\n"

void lcs(string s1, string s2)
{
    int m = s1.size(); // 1st string len
    int n = s2.size(); // 2nd string len

    // create 2d dp array
    vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));

    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            // if both character same
            if (s1[i - 1] == s2[j - 1])
            {
                dp[i][j] = 1 + dp[i - 1][j - 1];
            }
            else
            {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }

    for(int i=0;i<=m; i++)
    {
        for(int j=0;j<=n;j++)
        {
            cout<<dp[i][j]<<" ";
        }
        cout<<nl;
    }
    cout<<nl;
    // complete fillup dp table

    // printing part

    // create a blank string for store
    string ans = "";

    // initialize two pointer
    int i = m, j = n;

    // check untill any pointer became null

    while (i > 0 && j > 0)
    {
        // if both characters are same then keep 1st str. char.
        if (s1[i - 1] == s2[j - 1])
        {
            ans += s1[i - 1];

            i--;
            j--;
        }
        // if top row cell is bigger then decrease i pointer
        else if (dp[i - 1][j] > dp[i][j - 1])
        {
            ans += s1[i - 1];
            i--;
        }
        // if left col is bigger then decrease j pointer
        else
        {
            ans += s2[j - 1];
            j--;
        }
    }

    while (i > 0)
    {
        ans += s1[i - 1];
        i--;
    }
    while (j > 0)
    {
        ans += s2[j - 1];
        j--;
    }

    reverse(ans.begin(), ans.end());

    cout << "\nLongest common supersequence: " << ans << nl << nl;
}

int main()
{
    string s1 = "bat";
    string s2 = "cat";
    lcs(s1, s2);

    return 0;
}