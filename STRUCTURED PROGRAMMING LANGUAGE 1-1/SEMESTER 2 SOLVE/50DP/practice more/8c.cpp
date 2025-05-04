
#include <bits\stdc++.h>
using namespace std;

// Function to fill the dp table and calculate the length of SCS
int filldp(string X, string Y, vector<vector<int>> &dp, int m, int n)
{
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (X[i - 1] == Y[j - 1])
            {
                dp[i][j] = dp[i - 1][j - 1] + 1;
            }
            else
            {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }

    for (int i = 0; i <= m; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    return dp[m][n];
}

// Function to recursively construct the SCS
void constructSCS(string X, string Y, vector<vector<int>> &dp, int i, int j, string scs, set<string> &scsSet)
{
    if (i == 0)
    {
        scs = Y.substr(0, j) + scs;
        scsSet.insert(scs);
        return;
    }
    if (j == 0)
    {
        scs = X.substr(0, i) + scs;
        scsSet.insert(scs);
        return;
    }

    if (X[i - 1] == Y[j - 1])
    {
        constructSCS(X, Y, dp, i - 1, j - 1, X[i - 1] + scs, scsSet);
    }
    else
    {
        if (dp[i - 1][j] < dp[i][j - 1])
        {
            constructSCS(X,  Y, dp, i, j - 1, Y[j - 1] + scs, scsSet);
        }
        else if (dp[i - 1][j] > dp[i][j - 1])
        {
            constructSCS(X, Y, dp, i - 1, j, X[i - 1] + scs, scsSet);
        }
        else
        {
            constructSCS(X, Y, dp, i, j - 1, Y[j - 1] + scs, scsSet);
            constructSCS(X, Y, dp, i - 1, j, X[i - 1] + scs, scsSet);
        }
    }
}

// Function to find the shortest common supersequences
set<string> findSCS(string X, string Y)
{
    int m = X.length();
    int n = Y.length();

    vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));
    filldp(X, Y, dp, m, n);

    set<string> scsSet;
    string scs = "";
    constructSCS(X, Y, dp, m, n, scs, scsSet);

    return scsSet;
}

int main()
{
    // string X = "atta", Y = "btat";
    //string X = "ABCBDAB", Y = "BDCABA";
    string X = "bat", Y = "cat";
    set<string> scsSet = findSCS(X, Y);

    // cout << "Shortest Common Supersequences:" << endl;
    for (const string &scs : scsSet)
    {
        cout << scs << endl;
    }

    return 0;
}