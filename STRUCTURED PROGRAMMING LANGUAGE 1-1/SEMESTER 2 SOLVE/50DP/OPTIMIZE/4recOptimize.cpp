/*
DP PROBLEM NUMBER : 4
Longest Palindromic Subsequence[LPS]
Name: PRINCE
ID: 12105007
Algorithm: Recursion
*/

#include <bits/stdc++.h>
using namespace std;

int dp[1001][1001];

// Optimized LPS function

int lps(string &str, int i, int j)
{
    // Base cases
    if (i > j)
    {
        return 0;
    }
    if (i == j)
    {
        return 1;
    }

    // Check the cache
    if (dp[i][j] != -1)
    {
        return dp[i][j];
    }

    // Recursive calculations
    if (str[i] == str[j])
    {
        dp[i][j] = 2 + lps(str, i + 1, j - 1);
    }
    else
    {
        dp[i][j] = max(lps(str, i + 1, j), lps(str, i, j - 1));
    }

    return dp[i][j];
}

int main()
{
    string str = "bbbab";
    // getline(cin, str);

    int n = str.length();
    memset(dp, -1, sizeof(dp));

    int lpsLength = lps(str, 0, n - 1);

    cout << "LPS : " << lpsLength << endl;

    return 0;
}
