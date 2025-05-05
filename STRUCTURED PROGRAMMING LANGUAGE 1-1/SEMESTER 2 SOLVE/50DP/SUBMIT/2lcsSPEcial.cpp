/*
DP PROBLEM NUMBER : 2
Longest Commeon Subsequence[LCS]
Name: PRINCE
ID: 12105007
Approach dp table: bottom-up
Print approach: Traversing bottom to top
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

    // bottom up approach from left to right
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            // if both characters are same
            if (s1[i - 1] == s2[j - 1])
            {
                dp[i][j] = 1 + dp[i - 1][j - 1];
            }
            // fill up max(top, left) value
            else
            {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }
    // complete fillup dp table

    // special techniq for printing
    //  printing part
    //  create a blank string for store

    string str = "";
    for (int i = m; i > 0; i--)
    {
        // check last column pair value only
        // if both are not same means store 1st string last char.
        if (dp[i][n] != dp[i - 1][n])
        {
            str = s1[i - 1] + str;
        }
    }

    cout << "\nLCS is: " << str << nl << nl;
}

int main()
{
    string s1 = "atta";
    string s2 = "btat";
    lcs(s1, s2);

    return 0;
}