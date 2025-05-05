#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Function to find Levenshtein distance between string `X` and `Y`.
// `m` and `n` is the total number of characters in `X` and `Y`, respectively
int dist(string X, string Y)
{
    int m = X.length();
    int n = Y.length();
    cout << m << endl;
    cout << n << endl;

    // For all pairs of `i` and `j`, `T[i][j]` will hold the Levenshtein distance
    // between the first `i` characters of `X` and the first `j` characters of `Y`.
    // Note that `T` holds `(m+1)×(n+1)` values.
    vector<vector<int>> T(m + 1, vector<int>(n + 1, 0));

    // we can transform source prefixes into an empty string by
    // dropping all characters

    for (int i = 1; i <= m; i++)
    {
        T[i][0] = i; // (case 1)
    }

    // we can reach target prefixes from empty source prefix
    // by inserting every character

    for (int j = 1; j <= n; j++)
    {
        T[0][j] = j; // (case 1)
    }

    int substitutionCost;

    // fill the lookup table in a bottom-up manner
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (X[i - 1] == Y[j - 1])
            {                         // (case 2)
                substitutionCost = 0; // (case 2)
            }
            else
            {
                substitutionCost = 1; // (case 3c)
            }
            T[i][j] = min({T[i - 1][j] + 1, T[i][j - 1] + 1, T[i - 1][j - 1] + substitutionCost});
        }
    }
    for (int i = 0; i <= m; i++)
    {
        for (int j = 0; j <= n; j++)
        {  
            cout << T[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    return T[m][n];
}

int main()
{
    string X = "cat", Y = "bat";
    /*
    acbcd 1
    acbd 2
    acdba 3

    abda 1
    abcda

    */
    cout << "The Levenshtein distance is " << dist(X, Y);

    return 0;
}
