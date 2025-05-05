#include <bits\stdc++.h>
#include <string>
#include <vector>
using namespace std;

// Function to find the length of the longest palindromic subsequence
int findLongestPalindrome(const string &X)
{
    int n = X.length();

    // Create a 2D DP table to store the length of palindromic subsequence
    vector<vector<int>> dp(n, vector<int>(n, 0));

    // Base case: each character is a palindrome of length 1
    for (int i = 0; i < n; ++i)
    {
        dp[i][i] = 1;
    }

    // Build the DP table in a bottom-up manner
    for (int len = 2; len <= n; ++len)
    {
        for (int i = 0; i <= n - len; ++i)
        {
            int j = i + len - 1;

            if (X[i] == X[j])
            {
                dp[i][j] = dp[i + 1][j - 1] + 2;
            }
            else
            {
                dp[i][j] = max(dp[i][j - 1], dp[i + 1][j]);
            }
        }
    }

    return dp[0][n - 1];
}

int main()
{
    string X;
    // cout << "Enter the string: ";
    cin >> X;

    string s;
    strcpy(s,X);
    if(strcmp(s,X)==0)
    {
        cout<<"Palindrome!"
    }

    int result = findLongestPalindrome(X);

    // cout << "The length of the longest palindromic subsequence is " << result << endl;
    cout << result << endl;

    return 0;
}
