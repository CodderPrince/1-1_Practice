
#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <iterator>
using namespace std;

// Function to return all SCS of substrings `X[0…m-1]`, `Y[0…n-1]`
vector<string> SCS(string X, string Y, int m, int n, auto &lookup)
{
    // if the end of the first string is reached, create a vector
    // containing the second substring and return
    if (m == 0)
    {
        return {Y.substr(0, n)};
    }

    // if the end of the second string is reached, create a vector
    // containing the first substring and return
    else if (n == 0)
    {
        return {X.substr(0, m)};
    }

    // if the last character of `X` and `Y` is the same, it should occur
    // only one time in SSC
    if (X[m - 1] == Y[n - 1])
    {
        // find all SCS of substring `X[0…m-2]` and `Y[0…n-2]`
        vector<string> scs = SCS(X, Y, m - 1, n - 1, lookup);

        // append the current character `X[m-1]` or `Y[n-1]` to all SCS of
        // substring `X[0…m-2]` and `Y[0…n-2]`

        for (string &str : scs)
        { // don't remove `&`
            str.push_back(X[m - 1]);
        }

        return scs;
    }

    // we reach here when the last character of `X` and `Y` don't match

    // if the top cell of a current cell has less value than the left cell,
    // then append the current character of string `X` to all SCS of
    // substring `X[0…m-2]`, `Y[0…n-1]`

    if (lookup[m - 1][n] < lookup[m][n - 1])
    {
        vector<string> scs = SCS(X, Y, m - 1, n, lookup);

        for (string &str : scs)
        { // don't remove `&`
            str.push_back(X[m - 1]);
        }

        return scs;
    }

    // if the left cell of a current cell has less value than the top cell,
    // then append the current character of string `Y` to all SCS of
    // substring `X[0…m-1]`, `Y[0…n-2]`

    if (lookup[m][n - 1] < lookup[m - 1][n])
    {
        vector<string> scs = SCS(X, Y, m, n - 1, lookup);

        for (string &str : scs)
        { // don't remove `&`
            str.push_back(Y[n - 1]);
        }

        return scs;
    }

    // if the top cell value is the same as the left cell, then go in both
    // top and left directions

    // append the current character of string `X` to all SCS of
    // substring `X[0…m-2]`, `Y[0…n-1]`
    vector<string> top = SCS(X, Y, m - 1, n, lookup);
    for (string &str : top)
    { // don't remove `&`
        str.push_back(X[m - 1]);
    }

    // append the current character of string `Y` to all SCS of
    // substring `X[0…m-1]`, `Y[0…n-2]`
    vector<string> left = SCS(X, Y, m, n - 1, lookup);
    for (string &str : left)
    { // don't remove `&`
        str.push_back(Y[n - 1]);
    }

    // merge two vectors and return
    top.insert(top.end(), left.begin(), left.end());
    // copy(left.begin(), left.end(), back_inserter(top));

    return top;
}

// Function to fill the lookup table by finding the length of SCS of
// sequences `X[0…m-1]` and `Y[0…n-1]`
int SCSLength(string X, string Y, int m, int n, auto &lookup)
{
    // initialize the first column of the lookup table
    for (int i = 0; i <= m; i++)
    {
        lookup[i][0] = i;
    }

    // initialize the first row of the lookup table
    for (int j = 0; j <= n; j++)
    {
        lookup[0][j] = j;
    }

    // fill the lookup table in a bottom-up manner
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            // if the current character of `X` and `Y` matches
            if (X[i - 1] == Y[j - 1])
            {
                lookup[i][j] = lookup[i - 1][j - 1] + 1;
            }
            // otherwise, if the current character of `X` and `Y` don't match
            else
            {
                lookup[i][j] = min(lookup[i - 1][j] + 1, lookup[i][j - 1] + 1);
            }
        }
    }
}

// Function to find all shortest common supersequence of string `X` and `Y`
set<string> SCS(string X, string Y)
{
    int m = X.length(), n = Y.length();

    // lookup table stores solution to already computed subproblems;
    // i.e., lookup[i][j] stores the length of SCS of substring
    // `X[0…i-1]` and `Y[0…j-1]`
    vector<vector<int>> lookup(m + 1, vector<int>(n + 1));

    // fill lookup table
    SCSLength(X, Y, m, n, lookup);

    // find all shortest common supersequence
    vector<string> v = SCS(X, Y, m, n, lookup);

    // since a vector can contain duplicates, "copy" the vector to set
    set<string> scs(v.begin(), v.end());

    // to "convert" a vector to use a set
    /* set<string> scs(make_move_iterator(v.begin()),
                    make_move_iterator(v.end())); */

    // return set containing all SCS
    return scs;
}

int main()
{
    // string X = "bat", Y = "cat";
    string X = "atta", Y = "btat";
    // find all shortest common supersequence of string `X` and `Y`
    set<string> scs = SCS(X, Y);

    cout << "The shortest common supersequence of " << X << " and " << Y << " are -"
         << "\n\n";

    // print all SCS present in the set
    for (string str : scs)
    {
        cout << str << endl;
    }

    return 0;
}