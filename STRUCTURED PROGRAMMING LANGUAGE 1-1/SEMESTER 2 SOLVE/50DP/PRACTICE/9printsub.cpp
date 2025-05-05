#include <bits/stdc++.h>
using namespace std;

// Function to find the length of the longest increasing subsequence
int LIS(int arr[], int n)
{
    vector<int> dp(n, 1);

    for (int i = 1; i < n; ++i)
    {
        for (int j = 0; j < i; ++j)
        {
            if (arr[i] > arr[j] && dp[i] < dp[j] + 1)
            {
                dp[i] = dp[j] + 1;
            }
        }
    }

    return *max_element(dp.begin(), dp.end());
}

// Function to print all subsequences of a given length
void printSubsequences(int arr[], int n, int length)
{
    vector<int> dp(n, 1); // Declare dp array here

    for (int i = 1; i < n; ++i)
    {
        for (int j = 0; j < i; ++j)
        {
            if (arr[i] > arr[j] && dp[i] < dp[j] + 1)
            {
                dp[i] = dp[j] + 1;
            }
        }
    }

    vector<vector<int>> subsequences;
    for (int i = n - 1; i >= 0; --i)
    {
        if (dp[i] == length)
        {
            vector<int> subsequence;
            subsequence.push_back(arr[i]);
            int currentLength = length - 1;
            int currentElement = arr[i];

            for (int j = i - 1; j >= 0; --j)
            {
                if (arr[j] < currentElement && dp[j] == currentLength)
                {
                    subsequence.push_back(arr[j]);
                    currentElement = arr[j];
                    currentLength--;
                }
            }

            reverse(subsequence.begin(), subsequence.end());
            subsequences.push_back(subsequence);
        }
    }

    // Print all the subsequences
    for (const auto &subsequence : subsequences)
    {
        for (const auto &element : subsequence)
        {
            cout << element << " ";
        }
        cout << endl;
    }
}

int main()
{
    int arr[] = {1, 2, 5, 4, 6, 11, 10, 13, 15, 14};
    int n = sizeof(arr) / sizeof(arr[0]);

    int lisLength = LIS(arr, n);
    cout << "The length of the LIS is " << lisLength << endl;

    cout << "All possible longest subsequences:" << endl;
    for (int i = 1; i <= lisLength; ++i)
    {
        printSubsequences(arr, n, i);
    }

    return 0;
}
