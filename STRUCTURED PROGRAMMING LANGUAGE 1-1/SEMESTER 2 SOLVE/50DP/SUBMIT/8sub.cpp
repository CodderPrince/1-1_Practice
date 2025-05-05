/*
DP PROBLEM NUMBER : 8
Longest Commeon Supersequence[LCS]
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

    // fill up dp table
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            // if both characters same
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

    // printing part
    // create a blank string for storing the LCS
    string ans = "";

    // initialize pointers to traverse dp table
    int i = m, j = n;

    // backtrack to find LCS
    while (i > 0 && j > 0)
    {
        // If current characters are same, they are part of LCS
        if (s1[i - 1] == s2[j - 1])
        {
            ans += s1[i - 1];
            i--;
            j--;
        }
        // Move in the direction of greater value
        else if (dp[i - 1][j] > dp[i][j - 1])
        {
            ans += s1[i - 1];
            i--;
        }
        else
        {
            ans += s2[j - 1];
            j--;
        }
    }

    // Add remaining characters from s1
    while (i > 0)
    {
        ans += s1[i - 1];
        i--;
    }

    // Add remaining characters from s2
    while (j > 0)
    {
        ans += s2[j - 1];
        j--;
    }

    // Reverse the LCS string
    reverse(ans.begin(), ans.end());

    cout << "Longest Common Supersequence: " << ans << nl;
}

int main()
{
    string s1 = "bat";
    string s2 = "cat";
    lcs(s1, s2);

    return 0;
}