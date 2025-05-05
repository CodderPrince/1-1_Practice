#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Recursive function to find the longest common subsequence of
// string X[0…m-1] and Y[0…n-1]
string LCS(string X, string Y, int m, int n, auto &lookup)
{
    // return an empty string if the end of either sequence is reached
    if (m == 0 || n == 0)
    {
        return string("");
    }

    // if the last character of X and Y matches
    if (X[m - 1] == Y[n - 1])
    {
        // append current character (X[m-1] or Y[n-1]) to LCS of
        // substring X[0…m-2] and Y[0…n-2]
        return LCS(X, Y, m - 1, n - 1, lookup) + X[m - 1];
    }

    // otherwise, if the last character of X and Y are different

    // if a top cell of the current cell has more value than the left
    // cell, then drop the current character of string X and find LCS
    // of substring X[0…m-2], Y[0…n-1]

    if (lookup[m - 1][n] > lookup[m][n - 1])
    {
        return LCS(X, Y, m - 1, n, lookup);
    }
    else
    {
        // if a left cell of the current cell has more value than the top
        // cell, then drop the current character of string Y and find LCS
        // of substring X[0…m-1], Y[0…n-2]

        return LCS(X, Y, m, n - 1, lookup);
    }
}

// Function to fill the lookup table by finding the length of LCS
// of substring X[0…m-1] and Y[0…n-1]
void LCSLength(string X, string Y, int m, int n, auto &lookup)
{ // fill the lookup table in a bottom-up manner
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            // if current character of X and Y matches
            if (X[i - 1] == Y[j - 1])
            {
                lookup[i][j] = lookup[i - 1][j - 1] + 1;
            }
            // otherwise, if the current character of X and Y don't match
            else
            {
                lookup[i][j] = max(lookup[i - 1][j], lookup[i][j - 1]);
            }
        }
    }
}

// Function to find all LCS of string X and Y
string LCS(string X, string Y)
{
    int m = X.length(), n = Y.length();

    // lookup[i][j] stores the length of LCS of substring X[0…i-1] and Y[0…j-1]
    vector<vector<int>> lookup(m + 1, vector<int>(n + 1));

    // fill lookup table
    LCSLength(X, Y, m, n, lookup);

    // return LCS
    return LCS(X, Y, m, n, lookup);
}

int main()
{

    string X = "BAT", Y = "CAT";
    string ajk = LCS(X, Y);

    string ans;
    int k = 0;
    int a = 0;
    int b = 0;
    for (int i = 0; i < X.length(); i++)
    {
        if (ajk[k] == X[i])
        {
            for (int j = b; j < Y.length(); j++)
            {
                if (ajk[k] == Y[j])
                {
                    ans += ajk[k];
                    k++;
                    b = j + 1;
                    break;
                }
                else
                {
                    ans += Y[j];
                }
            }
        }
        else
        {
            ans += X[i];
        }
    }

    cout << ajk;
}