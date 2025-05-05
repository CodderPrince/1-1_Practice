#include <bits/stdc++.h>
using namespace std;

string X, Y;
int dp[4][4];

int shortestCommonSupersequenceLength(int i, int j)
{
    if (i == 0)
        return j;
    if (j == 0)
        return i;
    if (dp[i][j] != -1)
        return dp[i][j];
    if (X[i - 1] == Y[j - 1])
    {
        return dp[i][j] = 1 + shortestCommonSupersequenceLength(i - 1, j - 1);
    }
    else
    {
        return dp[i][j] = 1 + min(shortestCommonSupersequenceLength(i - 1, j),
                                  shortestCommonSupersequenceLength(i, j - 1));
    }
}

void printAllSCS(int i, int j, string current)
{
    if (i == 0)
    {
        while (j > 0)
        {
            current.push_back(Y[j - 1]);
            j--;
        }
        reverse(current.begin(), current.end());
        cout << current << endl;
        return;
    }
    if (j == 0)
    {
        while (i > 0)
        {
            current.push_back(X[i - 1]);
            i--;
        }
        reverse(current.begin(), current.end());
        cout << current << endl;
        return;
    }
    if (X[i - 1] == Y[j - 1])
    {
        current.push_back(X[i - 1]);
        printAllSCS(i - 1, j - 1, current);
    }
    else
    {
        if (dp[i][j - 1] < dp[i - 1][j])
        {
            current.push_back(Y[j - 1]);
            printAllSCS(i, j - 1, current);
        }
        if (dp[i - 1][j] < dp[i][j - 1])
        {
            current.push_back(X[i - 1]);
            printAllSCS(i - 1, j, current);
        }
        if (dp[i][j - 1] == dp[i - 1][j])
        {
            current.push_back(Y[j - 1]);
            printAllSCS(i, j - 1, current);
            current.pop_back(); // remove the last character
            current.push_back(X[i - 1]);
            printAllSCS(i - 1, j, current);
        }
    }
}
int main()
{
    X = "cb";
    Y = "bcd";
    int m = X.length();
    int n = Y.length();
    memset(dp, -1, sizeof(dp));
    int scs_length = shortestCommonSupersequenceLength(m, n);
    cout << "The length of the shortest common supersequence is: " << scs_length << endl;
    cout << "\nPossible Supersequence:\n";
    string current = "";
    printAllSCS(m, n, current);

    return 0;
}