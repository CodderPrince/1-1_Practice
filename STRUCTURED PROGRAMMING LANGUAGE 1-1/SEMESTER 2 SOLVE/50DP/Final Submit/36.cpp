/*
DP PROBLEM NUMBER : 36
Wildcard Pattern Matching [WPM]
Name: PRINCE
ID: 12105007
APPROACH: Recursion + DP
*/
#include <bits\stdc++.h>
using namespace std;

// Function that matches an input string with a given wildcard pattern
bool isMatch(int i, int j, string &pattern, string &text, auto &dp)
{
    // If both the input string and pattern reach their end, return true
    if (i < 0 && j < 0)
    {
        return true;
    }
    // If only the pattern reaches its end, return false
    if (i < 0 && j >= 0)
    {
        return false;
    }
    // If only the input string reaches its end, return true
    // if the remaining characters in the pattern are all '*'
    if (j < 0 && i >= 0)
    {
        for (int k = 0; k <= i; k++)
        {
            if (pattern[k] != '*')
            {
                return false;
            }
        }
        return true;
    }

    // If the subproblem is encountered for the first time
    if (dp[i][j] != 0)
    {
        return dp[i][j];
    }
    // If current characters match or pattern has '?'
    if (pattern[i] == '?' || pattern[i] == text[j])
    {
        dp[i][j] = isMatch(i - 1, j - 1, pattern, text, dp);
    }
    // If current character is '*' means there is two option take or not take
    else if (pattern[i] == '*')
    {
        // Takes * and match or don't take * and match
        dp[i][j] = isMatch(i - 1, j, pattern, text, dp) || isMatch(i, j - 1, pattern, text, dp);
    }
    // If characters don't match and there's no wildcard
    else
    {
        dp[i][j] = 0;
    }

    return dp[i][j];
}

// Wildcard Pattern Matching Implementation in C++
int main()
{
    string pattern = "x***x?";
    string text = "xyxzzxy";

    int m = pattern.length();
    int n = text.length();

    // Create a DP table
    vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));

    if (isMatch(m - 1, n - 1, pattern, text, dp))
    {
        cout << "Match";
    }
    else
    {
        cout << "No Match";
    }

    // Print the DP table
    cout << "\nDp Table:" << endl;
    for (int i = 0; i <= n; ++i)
    {
        for (int j = 0; j <= m; ++j)
        {
            cout << dp[j][i] << " ";
        }
        cout << endl;
    }

    return 0;
}
