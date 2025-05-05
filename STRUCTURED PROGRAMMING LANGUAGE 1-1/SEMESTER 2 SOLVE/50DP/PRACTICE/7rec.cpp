/*
DP PROBLEM NUMBER : 7
SHORTEST SUPERSEQUENCE LENGTH[sslL]
Name: PRINCE
ID: 12105007
Algorithm: Recursion
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl endl

int dp[1001][1001];

int ssl(string s1, int m, string s2, int n)
{

    // base case
    if (m == 0 || n == 0)
    {
        return dp[m][n] = m + n;
    }
    if (dp[m][n] != -1)
    {
        return dp[m][n];
    }
    if (s1[m - 1] == s2[n - 1])
    {
        return dp[m][n] = 1 + ssl(s1, m - 1, s2, n - 1);
    }
    else
    {
        return dp[m][n] = min(1 + ssl(s1, m - 1, s2, n), 1 + ssl(s2, m, s2, n - 1));
    }
}

int main()
{
    string s1 = "ab", s2 = "bc";
    int m = s1.length(), n = s2.length();

    memset(dp, -1, sizeof(dp));

    int x = ssl(s1, m, s2, n);
    cout << "Sortest Supersequence: " << x << nl;

    return 0;
}
