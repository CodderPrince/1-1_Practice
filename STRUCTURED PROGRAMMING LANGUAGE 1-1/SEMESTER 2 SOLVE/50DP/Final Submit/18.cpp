/*
DP PROBLEM NUMBER : 18
Knapsack 0-1
Name: PRINCE
ID: 12105007
APPROACH: Recursion
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl endl

ll wt[] = {3, 4, 5}, val[] = {30, 50, 60};

ll knapsack(int w, int n)
{
    // base case
    // there is no weight and no items
    if (w == 0 || n == 0)
    {
        return 0;
    }

    // If the weight of the current item exceeds the remaining capacity,
    // move to the next item without choosing the current one
    if (wt[n - 1] <= w)
    {
        return max(val[n - 1] + knapsack(w - wt[n - 1], n - 1), knapsack(w, n - 1));
    }

    else
    {
        return knapsack(w, n - 1);
    }
}

int main()
{
    int n = 3, w = 8;

    // start last index to first index
    cout << knapsack(w, n) << nl;

    return 0;
}

//recursion function ensures all types of combinations