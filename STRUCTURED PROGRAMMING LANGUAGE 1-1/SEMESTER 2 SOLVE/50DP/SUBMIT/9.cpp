/*
DP PROBLEM NUMBER : 9
LONGEST INCREASING SUB Sequence[LIS]
Name: PRINCE
ID: 12105007
Approach: Simple DP
*/
#include <bits/stdc++.h>
using namespace std;

int LIS(int arr[], int n)
{
    vector<int> dp(n, 1);

    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[i] > arr[j] && (dp[i] < dp[j] + 1))
            {
                dp[i] = dp[j] + 1;
            }
        }
    }

    return *max_element(dp.begin(), dp.end());
}

int main()
{
    int arr[] = {1, 2, 5, 4};
    int n = 4;

    cout << "The length of the LIS is: " << LIS(arr, n);

    return 0;
}
