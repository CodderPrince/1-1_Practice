#include <bits/stdc++.h>
using namespace std;

// Function to find the length of the longest increasing subsequence
vector<vector<int>> LIS(int arr[], int n)
{
    vector<vector<int>> dp(n);

    dp[0].push_back(arr[0]);

    for (int i = 1; i < n; ++i)
    {
        for (int j = 0; j < i; ++j)
        {
            if (arr[i] > arr[j] && dp[i].size() < dp[j].size() + 1)
            {
                dp[i] = dp[j];
            }
        }
        dp[i].push_back(arr[i]);
    }

    // Find the longest subsequences
    int maxLength = 0;
    for (int i = 0; i < n; i++)
    {
        if (dp[i].size() > maxLength)
        {
            maxLength = dp[i].size();
        }
    }

    vector<vector<int>> longestSubsequences;
    for (int i = 0; i < n; i++)
    {
        if (dp[i].size() == maxLength)
        {
            longestSubsequences.push_back(dp[i]);
        }
    }

    return longestSubsequences;
}

int main()
{
    int arr[] = {1, 2, 5, 4, 6, 11, 10};
    int n = sizeof(arr) / sizeof(arr[0]);

    vector<vector<int>> lisSequences = LIS(arr, n);
    int lisLength = lisSequences[0].size();

    cout << "The length of the LIS is " << lisLength << endl;

    cout << "All possible longest subsequences:" << endl;
    for (const auto &sequence : lisSequences)
    {
        for (int i = 0; i < lisLength; ++i)
        {
            cout << sequence[i] << " ";
        }
        cout << endl;
    }

    return 0;
}