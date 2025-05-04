/*
DP PROBLEM NUMBER : 7
SHORTEST COMMON SUPERSEQUENCE LENGTH[SCSL]
Name: PRINCE
ID: 12105007
Approach dp table: bottom-up
*/

#include <bits\stdc++.h>
using namespace std;

int SCSLength(string X, string Y)
{
    int m = X.length();
    int n = Y.length();

    // Create a 2D vector array of size (m+1) x (n+1)
    vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));

    // base condition

    /*fill up first row 0 to m
    0,0 index is 0 if both str is blank
    if n is blank but m is 1 len then 0,1 is 1
    fill up that condition for first row and first col
    */

    // first row
    for (int i = 0; i <= n; i++)
    {
        dp[0][i] = i;
    }
    // first col
    for (int j = 0; j <= m; j++)
    {
        dp[j][0] = j;
    }

    // start 1,1 index and compare last to first
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

    // print dp table
    
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

int main()
{
    string X = "bat", Y = "cat";
    //string X = "a", Y = "cat";

    cout << "SCSL: " << SCSLength(X, Y);

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