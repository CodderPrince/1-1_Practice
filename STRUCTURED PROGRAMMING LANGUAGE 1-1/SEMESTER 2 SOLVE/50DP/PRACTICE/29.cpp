#include <iostream>
using namespace std;

// Function to count the number of times pattern `Y[0…n)`
// appears in a given string `X[0…m)` as a subsequence
int count(string X, string Y)
{
    int m = X.size();
    int n = Y.size();

    // `T[i][j]` stores number of times pattern `Y[0…j)`
    // appears in a given string `X[0…i)` as a subsequence
    int T[m + 1][n + 1];

    // if pattern `Y` is empty, we have found subsequence
    for (int i = 0; i <= m; i++)
    {
        T[i][0] = 1;
    }

    // if the input string `X` is empty
    for (int j = 1; j <= n; j++)
    {
        T[0][j] = 0;
    }

    /*
      If the current character of both string and pattern matches,
        1. Exclude current character from both string and pattern
        2. Exclude only the current character from the string

      Otherwise, if the current character of the string and pattern do not match,
      exclude the current character from the string
    */

    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (X[i - 1] == Y[j - 1])
            {
                T[i][j] = T[i - 1][j - 1] + T[i - 1][j];
            }
            else
            {
                T[i][j] = 0 + T[i - 1][j];
            }
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

    // return last entry in the lookup table
    return T[m][n];
}

int main()
{
    string X = "subsequence"; // input string
    string Y = "sue";         // pattern

    cout << count(X, Y) << endl;

    return 0;
}