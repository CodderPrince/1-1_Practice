#include <bits\stdc++.h>
using namespace std;

int coinChange(vector<int> &coins, int amount)
{
    int n = coins.size();
    // int ways[n + 1][amount + 1];
    vector<vector<int>> ways(n + 1, vector<int>(amount + 1));

    for (int i = 0; i <= n; i++)
    {
        ways[i][0] = 1; // only one way to make 0 amount
    }
    // when you have 0 coins and make amount>0
    // fill up first row to infinity
    for (int j = 1; j <= amount; j++)
    {
        ways[0][j] = 0; // no way to make positive amount with 0 coins
    }

    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= amount; ++j)
        {
            // exclude current coin
            if (coins[i - 1] > j)
            {
                ways[i][j] = ways[i - 1][j]; // same number of ways as previous coin
            }
            else
            {
                // min((1 + include), exclude))

                // add the number of ways for previous amount and amount minus current coin
                ways[i][j] = ways[i - 1][j] + ways[i][j - coins[i - 1]];
            }
        }
    }

    // print dp table

    for (int i = 0; i <= n; ++i)
    {
        for (int j = 0; j <= amount; ++j)
        {
            cout << ways[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    cout << "Number of ways to make change: " << ways[n][amount] << endl;
}

int main()
{
    vector<int> coins = {1, 2, 3};
    int amount = 4;
    coinChange(coins, amount);

    return 0;
}
