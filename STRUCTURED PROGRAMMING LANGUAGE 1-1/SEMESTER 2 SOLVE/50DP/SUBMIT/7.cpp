/*
DP PROBLEM NUMBER : 7
SHORTEST SUPERSEQUENCE LENGTH[SSL]
Name: PRINCE
ID: 12105007
*/

#include <bits\stdc++.h>
using namespace std;

int SCSLength(string X, string Y)
{
    int m = X.length();
    int n = Y.length();

    // Create a 2D vector array of size (m+1) x (n+1)
    vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));

    // Fill in the rest of the elements
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
                dp[i][j] = min(dp[i][j - 1] + 1, dp[i - 1][j] + 1);
            }
        }
    }

    return dp[m][n];
}

int main()
{
    string X = "AB", Y = "BC";

    cout << "LCS:" << SCSLength(X, Y);

    return 0;
}

/*
AFTER COMPLETE BASE CASE 2D VECTOR LOOK LIKE
    0   1   2   3
    1   0   0   0
    2   0   0   0
    3   0   0   0

AFTER COMPLETE ALL ITERATIONS FINAL OUTPUT: DP[3][3] = 4


TIME COMPLEXITY: O(M*N)
WHICH IS MORE FASTER THAN RECURSION CALL: O(2^(M+N))
*/