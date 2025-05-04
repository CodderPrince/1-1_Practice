#include <iostream>
#include <vector>
#include <set>
using namespace std;

// Function to fill the lookup table and calculate the length of SCS
int fillLookup(string X, string Y, vector<vector<int>> &lookup)
{
    int m = X.length();
    int n = Y.length();

    for (int i = 0; i <= m; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            if (i == 0 || j == 0)
                lookup[i][j] = 0;
            else if (X[i - 1] == Y[j - 1])
                lookup[i][j] = lookup[i - 1][j - 1] + 1;
            else
                lookup[i][j] = max(lookup[i - 1][j], lookup[i][j - 1]);
        }
    }

    return lookup[m][n];
}

// Function to recursively construct the SCS
void constructSCS(string X, string Y, vector<vector<int>> &lookup, int i, int j, string scs, set<string> &scsSet)
{
    if (i == 0)
    {
        scs = Y.substr(0, j) + scs;
        scsSet.insert(scs);
        return;
    }
    if (j == 0)
    {
        scs = X.substr(0, i) + scs;
        scsSet.insert(scs);
        return;
    }

    if (X[i - 1] == Y[j - 1])
    {
        constructSCS(X, Y, lookup, i - 1, j - 1, X[i - 1] + scs, scsSet);
    }
    else
    {
        if (lookup[i - 1][j] < lookup[i][j - 1])
        {
            constructSCS(X, Y, lookup, i, j - 1, Y[j - 1] + scs, scsSet);
        }
        else if (lookup[i - 1][j] > lookup[i][j - 1])
        {
            constructSCS(X, Y, lookup, i - 1, j, X[i - 1] + scs, scsSet);
        }
        else
        {
            constructSCS(X, Y, lookup, i, j - 1, Y[j - 1] + scs, scsSet);
            constructSCS(X, Y, lookup, i - 1, j, X[i - 1] + scs, scsSet);
        }
    }
}

// Function to find the shortest common supersequences
set<string> findSCS(string X, string Y)
{
    int m = X.length();
    int n = Y.length();

    vector<vector<int>> lookup(m + 1, vector<int>(n + 1, 0));
    fillLookup(X, Y, lookup);

    set<string> scsSet;
    string scs = "";
    constructSCS(X, Y, lookup, m, n, scs, scsSet);

    return scsSet;
}

int main()
{
    string X="BAT", Y="CAT";

    set<string> scsSet = findSCS(X, Y);

    cout << "Shortest Common Supersequences:" << endl;
    for (const string &scs : scsSet)
    {
        cout << scs << endl;
    }

    return 0;
}