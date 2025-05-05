// bottom-down

#include <bits\stdc++.h>
using namespace std;

int minCost(vector<vector<int>> const &matrix)
{
    // base case
    if (matrix.size() == 0)
    {
        return 0;
    }

    int row = matrix.size();
    int col = matrix[0].size();
    // create a 2d dp array
    vector<vector<int>> dp(row, vector<int>(col, 0));

    dp[0][0] = matrix[0][0];
    int i, j;

    // fill the first row
    for (int i = 1; i < col; i++)
    {
        dp[0][i] = dp[0][i - 1] + matrix[0][i];
    }

    // fill the first col
    for (i = 1; i < row; i++)
    {
        dp[i][0] = dp[i - 1][0] + matrix[i][0];
    }

    // now fill the other cell
    for (i = 1; i < row; i++)
    {
        for (j = 1; j < col; j++)
        {
            dp[i][j] = matrix[i][j] + min(dp[i - 1][j], dp[i][j - 1]);
        }
    }

    return dp[row - 1][col - 1];
}

int main()
{
    vector<vector<int>> matrix =
        {
            {4, 7},
            {6, 9}};

    cout << "The minimum cost is " << minCost(matrix) << endl; // Start from cell (0, 0)

    return 0;
}
