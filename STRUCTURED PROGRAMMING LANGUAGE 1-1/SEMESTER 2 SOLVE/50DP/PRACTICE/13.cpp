#include <bits\stdc++.h>
#include <vector>
using namespace std;

int findLargestSquareSubmatrix(vector<vector<int>> const &mat)
{
    int M = mat.size();
    cout<<M<<endl;
    if (M == 0)
    {
        return 0;
    }

    int N = mat[0].size();

    // `dp` will store the size of the largest square submatrix
    // ending at the corresponding cell in the matrix
    vector<vector<int>> dp(M, vector<int>(N, 0));

    // Initialize the first row and column of dp matrix
    for (int i = 0; i < M; ++i)
    {
        dp[i][0] = mat[i][0];
    }

    for (int j = 0; j < N; ++j)
    {
        dp[0][j] = mat[0][j];
    }

    // Build the dp matrix iteratively
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

    // Find the maximum value in the dp matrix, which represents
    // the size of the largest square submatrix
    int maxSize = 0;
    for (int i = 0; i < M; ++i)
    {
        for (int j = 0; j < N; ++j)
        {
            maxSize = max(maxSize, dp[i][j]);
        }
    }

    return maxSize;
}

int main()
{
    vector<vector<int>> mat = {
        {1,0,},
        {0,1},
        };

    cout << "The size of the largest square submatrix of 1's is "
         << findLargestSquareSubmatrix(mat);

    return 0;
}
