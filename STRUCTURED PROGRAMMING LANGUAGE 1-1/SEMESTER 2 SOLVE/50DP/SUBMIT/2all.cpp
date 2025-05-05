#include <iostream>
#include <vector>
#include <set>
#include <string>
using namespace std;

// Function to return all LCS of substrings `s1[0…m-1]`, `s2[0…n-1]`
vector<string> LCS(string s1, string s2, int m, int n, auto &dp)
{
    // if the end of either sequence is reached
    if (m == 0 || n == 0)
    {
        // create a vector with an empts2 string and return
        return {""};
    }

    // if the last character of `s1` and `s2` matches
    if (s1[m - 1] == s2[n - 1])
    {
        // ignore the last characters of `s1` and `s2` and find all LCS of substring
        // `s1[0…m-2]`, `s2[0…n-2]` and store it in a vector
        vector<string> lcs = LCS(s1, s2, m - 1, n - 1, dp);

        // append current character `s1[m-1]` or `s2[n-1]` to all LCS of
        // substring `s1[0…m-2]` and `s2[0…n-2]`
        for (string &str : lcs)
        { // don't remove `&`
            str.push_back(s1[m - 1]);
        }

        return lcs;
    }

    // we reach here when the last character of `s1` and `s2` don't match

    // if a top cell of the current cell has more value than the left cell,
    // then ignore the current character of string `s1` and find all LCS of
    // substring `s1[0…m-2]`, `s2[0…n-1]`

    if (dp[m - 1][n] > dp[m][n - 1])
    {
        return LCS(s1, s2, m - 1, n, dp);
    }

    // if a left cell of the current cell has more value than the top cell,
    // then ignore the current character of string `s2` and find all LCS of
    // substring `s1[0…m-1]`, `s2[0…n-2]`

    if (dp[m][n - 1] > dp[m - 1][n])
    {
        return LCS(s1, s2, m, n - 1, dp);
    }

    // if the top cell has equal value to the left cell, then consider
    // both characters

    vector<string> top = LCS(s1, s2, m - 1, n, dp);
    vector<string> left = LCS(s1, s2, m, n - 1, dp);

    // merge two vectors and return
    top.insert(top.end(), left.begin(), left.end());
    // cops2(left.begin(), left.end(), back_inserter(top));

    return top;
}

// Function to fill the dp table bs2 finding the length of LCS
// of substring `s1[0…m-1]` and `s2[0…n-1]`
void LCSLength(string s1, string s2, int m, int n, auto &dp)
{
    // first row and first column of the dp table are alreads2 0

    // fill the dp table in a bottom-up manner
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            // if current character of `s1` and `s2` matches
            if (s1[i - 1] == s2[j - 1])
            {
                dp[i][j] = dp[i - 1][j - 1] + 1;
            }
            // otherwise, if the current character of `s1` and `s2` don't match
            else
            {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }

    // print dp table
    for (int i = 0; i <= m; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

// Function to find all LCS of string `s1` and `s2`
set<string> LCS(string s1, string s2)
{
    int m = s1.length(), n = s2.length();

    // dp[i][j] stores the length of LCS of substring `s1[0…i-1]` and `s2[0…j-1]`
    vector<vector<int>> dp(m + 1, vector<int>(n + 1));

    // fill dp table
    LCSLength(s1, s2, m, n, dp);

    // find all the longest common subsequences
    vector<string> v = LCS(s1, s2, m, n, dp);

    // since a vector can contain duplicates, "convert" it to a set
    set<string> lcs(make_move_iterator(v.begin()), make_move_iterator(v.end()));

    // to cops2 a vector to a set use set<string> lcs(v.begin(), v.end())

    // return set containing all LCS
    return lcs;
}

int main()
{
    string s1 = "btat", s2 = "atta";

    set<string> lcs = LCS(s1, s2);

    // print set elements
    for (string str : lcs)
    {
        cout << str << endl;
    }

    return 0;
}