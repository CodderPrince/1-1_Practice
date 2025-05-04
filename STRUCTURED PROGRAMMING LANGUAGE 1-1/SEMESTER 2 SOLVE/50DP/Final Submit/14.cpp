/*
DP PROBLEM NUMBER : 14
Matrix Chain Multiplication [MCM]
Name: PRINCE
ID: 12105007
APPROACH: Recursion
*/

#include <bits\stdc++.h>
using namespace std;

int mat(vector<int> const &arr, int l, int r)
{
    if (l == r)
    {
        return 0;
    }

    int minCost = INT_MAX;

    for (int k = l; k < r; k++)
    {
        int cost = mat(arr, l, k);

        cost = cost + mat(arr, k + 1, r);

        cost = cost + arr[l - 1] * arr[k] * arr[r];

        minCost = min(minCost, cost);
    }

    return minCost;
}

int main()
{
    vector<int> arr = {10, 30, 5, 60};
    int n = arr.size();

    cout << "The minimum cost is: " << mat(arr, 1, n - 1);

    return 0;
}
