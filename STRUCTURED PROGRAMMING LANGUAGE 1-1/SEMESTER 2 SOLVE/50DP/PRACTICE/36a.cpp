#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007            // 1e9 + 7
#define PI 3.14159265358979323846 // acos(-1)
#define nl "\n"

bool isMatch(int i, int j, string &pattern, string &text, auto &dp)
{
    // base case
    if (i < 0 && j < 0)
    {
        return true;
    }
    if (i < 0 && j >= 0)
    {
        return false;
    }
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

    if (dp[i][j] != 0)
    {
        return dp[i][j];
    }

    if (pattern[i] == '?' || pattern[i] == text[j])
    {
        dp[i][j] = isMatch(i - 1, j - 1, pattern, text, dp);
    }
    else if (pattern[i] == '*')
    {
        dp[i][j] = isMatch(i - 1, j, pattern, text, dp) || isMatch(i, j - 1, pattern, text, dp);
    }
    else
    {
        dp[i][j] = 0;
    }
    return dp[i][j];
}

int main()
{
    // cin.ignore();
    int a, b;
    cin >> a >> b;
    string pattern, text;
    // getline(cin, pattern);
    // getline(cin, text);
    //  string pattern = "vk*cup";
    //  string text = "vkcup";
    cin >> pattern;
    cin >> text;
    int m = pattern.length();
    int n = text.length();

    vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));

    if (isMatch(m - 1, n - 1, pattern, text, dp))
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }

    return 0;
}