/*
DP PROBLEM NUMBER : 15
Find minimum cost to reach the
last cell of a matrix from its first cell
Name: PRINCE
ID: 12105007
APPROACH: Bottom-down
*/

#include <bits\stdc++.h>
using namespace std;

int minCost(vector<vector<int>> const &matrix)
{
    // base case
    //matrix row
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

for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
           cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    return dp[row - 1][col - 1];
}

int main()
{
    vector<vector<int>> matrix =
        {
            {4, 5, 6},
            {7, 8, 9},
            {3, 2, 1}};

    cout << "The minimum cost is: " << minCost(matrix) << endl;

    return 0;
}
