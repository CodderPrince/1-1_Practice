/*
DP PROBLEM NUMBER : 13
Largest square submatrix of 1’s present in a binary matrix
Name: PRINCE
ID: 12105007
Approach: Bottom-up
*/

#include <bits/stdc++.h>
using namespace std;
 
int findLargestSquareSubmatrix(vector<vector<int>> const &mat)
{
    int M = mat.size();
    if (M == 0)
    {
        return 0;
    }

    int N = mat[0].size();
    vector<vector<int>> dp(M, vector<int>(N, 0));
    for (int i = 0; i < M; i++)
    {
        dp[i][0] = mat[i][0];
    }

    for (int j = 0; j < N; j++)
    {
        dp[0][j] = mat[0][j];
    }

    for (int i = 1; i < M; ++i)
    {
        for (int j = 1; j < N; ++j)
        {
            if (mat[i][j] == 1)
            {
                dp[i][j] = 1 + min({dp[i - 1][j], dp[i][j - 1], dp[i - 1][j - 1]});
            }
        }
    }

    for (int i = 0; i < M; ++i)
    {
        for (int j = 0; j < N; ++j)
        {
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    int maxSize = 0;
    for (int i = 0; i < M; ++i)
    {
        for (int j = 0; j < N; ++j)
        {
            maxSize = max(maxSize, dp[i][j]);
        }
    }

    cout << "The size of the largest square submatrix of 1's is " << maxSize << endl;
    return maxSize;
}

int main()
{
    vector<vector<int>> mat =
        {
            {1, 1, 1},
            {1, 1, 0},
            {1, 1, 0},
        };

    findLargestSquareSubmatrix(mat);

    return 0;
}
