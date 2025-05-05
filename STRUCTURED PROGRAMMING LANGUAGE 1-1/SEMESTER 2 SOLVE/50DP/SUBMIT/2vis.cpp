#include <bits\stdc++.h>
using namespace std;

vector<string> LCS(string s1, string s2, int m, int n, auto &dp)
{
    if (m == 0 || n == 0)
    {
        return {""};
    }

    if (s1[m - 1] == s2[n - 1])
    {
        vector<string> lcs = LCS(s1, s2, m - 1, n - 1, dp);

        for (string &str : lcs)
        {
            str.push_back(s1[m - 1]);
        }

        return lcs;
    }

    if (dp[m - 1][n] > dp[m][n - 1])
    {
        return LCS(s1, s2, m - 1, n, dp);
    }

    if (dp[m][n - 1] > dp[m - 1][n])
    {
        return LCS(s1, s2, m, n - 1, dp);
    }

    vector<string> top = LCS(s1, s2, m - 1, n, dp);
    vector<string> left = LCS(s1, s2, m, n - 1, dp);

    top.insert(top.end(), left.begin(), left.end());

    return top;
}

void LCSLength(string s1, string s2, int m, int n, auto &dp)
{
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (s1[i - 1] == s2[j - 1])
            {
                dp[i][j] = dp[i - 1][j - 1] + 1;
            }
            else
            {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }
}

set<string> LCS(string s1, string s2)
{
    int m = s1.length(), n = s2.length();
    vector<vector<int>> dp(m + 1, vector<int>(n + 1));
    LCSLength(s1, s2, m, n, dp);
    vector<string> v = LCS(s1, s2, m, n, dp);
    set<string> lcs(make_move_iterator(v.begin()), make_move_iterator(v.end()));
    return lcs;
}

int main()
{
    string s1 = "tat", s2 = "ata";
    set<string> lcs = LCS(s1, s2);

    for (string str : lcs)
    {
        cout << str << endl;
    }

    return 0;
}