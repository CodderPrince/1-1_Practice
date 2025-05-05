#include <bits/stdc++.h>
using namespace std;

string X, Y;
int dp[1001][1001];

int SCSL(int i, int j)
{
    // Base cases
    if (i == 0)
        return j;
    if (j == 0)
        return i;

    // If the value is already computed, return it
    if (dp[i][j] != -1)
        return dp[i][j];

    // If characters at the current positions in both strings are equal
    if (X[i - 1] == Y[j - 1])
    {
        return dp[i][j] = 1 + SCSL(i - 1, j - 1);
    }
    else
    {
        // Compute and memoize the result for the recursive cases
        return dp[i][j] = 1 + min(SCSL(i - 1, j),
                                  SCSL(i, j - 1));
    }
}

void printAllSCS(int i, int j, string current, bool& found)
{
    // If we have reached the end of one of the strings, print the current supersequence
    if (i == 0)
    {
        while (j > 0)
        {
            current.push_back(Y[j - 1]);
            j--;
        }
        reverse(current.begin(), current.end());
        cout << current << endl;
        found = true;
        return;
    }
    if (j == 0)
    {
        while (i > 0)
        {
            current.push_back(X[i - 1]);
            i--;
        }
        reverse(current.begin(), current.end());
        cout << current << endl;
        found = true;
        return;
    }

    // If characters at the current positions in both strings are equal
    if (X[i - 1] == Y[j - 1])
    {
        current.push_back(X[i - 1]);
        printAllSCS(i - 1, j - 1, current, found);
        current.pop_back();
    }
    else
    {
        // If the value from the left cell in the matrix is smaller
        if (dp[i][j - 1] < dp[i - 1][j])
        {
            current.push_back(Y[j - 1]);
            printAllSCS(i, j - 1, current, found);
            current.pop_back();
        }
        // If the value from the top cell in the matrix is smaller
        if (dp[i - 1][j] < dp[i][j - 1])
        {
            current.push_back(X[i - 1]);
            printAllSCS(i - 1, j, current, found);
            current.pop_back();
        }
        // If both values are equal, we can choose either
        if (dp[i][j - 1] == dp[i - 1][j])
        {
            current.push_back(Y[j - 1]);
            printAllSCS(i, j - 1, current, found);
            current.pop_back();

            current.push_back(X[i - 1]);
            printAllSCS(i - 1, j, current, found);
            current.pop_back();
        }
    }
}

int main()
{
    X = "a";
    Y = "bc";

    int m = X.length();
    int n = Y.length();

    // Initialize the dp array with -1
    memset(dp, -1, sizeof(dp));

    // Calculate the length of the shortest common supersequence
    int scs_length = SCSL(m, n);
    cout << "SCSL: " << scs_length << endl;

    // print all possible shortest common supersequences
    cout << "\nPossible Supersequence:\n";
    string current = "";
    bool found = false;
    printAllSCS(m, n, current, found);

    if (!found)
    {
        cout << "No supersequence found." << endl;
    }

    return 0;
}