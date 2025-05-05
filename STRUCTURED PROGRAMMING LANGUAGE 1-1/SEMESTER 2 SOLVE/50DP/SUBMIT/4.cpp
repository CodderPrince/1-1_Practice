/*
DP PROBLEM NUMBER : 4
Longest Palindromic Subsequence[LPS]
Name: PRINCE
ID: 12105007
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl endl

int LPS(const string &str)
{
    int n = str.length();

    vector<vector<int>> dp(n, vector<int>(n, 0));

    for (int i = 0; i < n; ++i)
    {
        dp[i][i] = 1;
    }

    for (int len = 2; len <= n; len++)
    {
        for (int i = 0; i <= n - len; i++)
        {
            int j = i + len - 1;

            if (str[i] == str[j])
            {
                dp[i][j] = dp[i + 1][j - 1] + 2;
            }
            else
            {
                dp[i][j] = max(dp[i][j - 1], dp[i + 1][j]);
            }
        }
    }

    return dp[0][n - 1];
}

int main()
{
    string str;
    cout << "\nEnter the string: ";
    cin >> str;

    string temp = str;
    reverse(temp.begin(), temp.end());
    if (str == temp)
    {
        ll length = str.size();
        cout << "The length of the longest palindromic subsequence is: " << length << nl << nl;
    }

    else
    {
        int result = LPS(str);

        cout << "The length of the longest palindromic subsequence is: " << result << nl << nl;
    }

    return 0;
}
