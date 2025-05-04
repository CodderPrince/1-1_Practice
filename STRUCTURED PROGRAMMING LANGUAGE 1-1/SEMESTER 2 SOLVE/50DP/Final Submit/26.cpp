/*
DP PROBLEM NUMBER : 26
Coins change I [coins can be repeated]
Minimum number of coins needed
Name: PRINCE
ID: 12105007
APPROACH: Bottom-up
*/

#include <bits\stdc++.h>
using namespace std;

int coinChange(vector<int> &coins, int amount)
{
    int n = coins.size();
    // int dp[n + 1][amount + 1];
    vector<vector<int>> dp(n + 1, vector<int>(amount + 1));

    // Base case initialization
    // when you have 0 coins and make amount 0
    // first coloumn is fill up 0
    for (int i = 0; i <= n; i++)
    {
        dp[i][0] = 0;
    }
    // when you have 0 coins and make amount>0
    // fill up first row to infinity
    for (int j = 1; j <= amount; j++)
    {
        dp[0][j] = 1e5;
    }

    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= amount; ++j)
        {
            // exclude current coin
            if (coins[i - 1] > j)
            {
                dp[i][j] = dp[i - 1][j];
            }
            else
            {
                // min((1 + include), exclude))
                dp[i][j] = min((1 + dp[i][j - coins[i - 1]]), dp[i - 1][j]);
            }
        }
    }

    // print dp table
    for (int i = 0; i <= n; ++i)
    {
        for (int j = 0; j <= amount; ++j)
        {
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    int result = dp[n][amount];
    if (result > 1e4)
    {
        return -1;
    }
    else
    {
        return result;
    }
}

int main()
{
    vector<int> coins = {1, 2, 3};
    int amount = 4;
    cout << "Minimum coins needed: " << coinChange(coins, amount) << endl; // Output: 3
    return 0;
}
