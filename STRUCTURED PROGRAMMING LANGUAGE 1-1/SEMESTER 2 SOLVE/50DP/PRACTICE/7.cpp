#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl endl

// A utility function to print a set of strings
void printSet(set<string> s)
{
    for (auto str : s)
    {
        cout << str << nl;
    }
}

// A recursive function that returns a set of strings
// containing all the SCS of X and Y
set<string> SCS(string X, string Y, int m, int n)
{
    // if the end of either sequence is reached, return
    // the other sequence as the only SCS
    if (m == 0)
    {
        return {Y.substr(0, n)};
    }
    if (n == 0)
    {
        return {X.substr(0, m)};
    }

    // if the last character of `X` and `Y` matches
    if (X[m - 1] == Y[n - 1])
    {
        // find the SCS of the remaining strings
        set<string> temp = SCS(X, Y, m - 1, n - 1);

        // append the matching character to each SCS in the set
        set<string> ans;
        for (auto str : temp)
        {
            ans.insert(str + X[m - 1]);
        }

        // return the set of SCS
        return ans;
    }
    else
    {
        // otherwise, if the last character of `X` and `Y` don't match

        // find the sets of SCS of X and Y with one character removed from each
        set<string> temp1 = SCS(X, Y, m - 1, n);
        set<string> temp2 = SCS(X, Y, m, n - 1);

        // find the minimum length of the SCS in the two sets
        int min_len = INT_MAX;
        for (auto str : temp1)
        {
            min_len = min(min_len, (int)str.length());
        }
        for (auto str : temp2)
        {
            min_len = min(min_len, (int)str.length());
        }

        // append the removed characters to each SCS in the respective sets
        // and add them to the final set of SCS if their length is equal to the minimum
        set<string> ans;
        for (auto str : temp1)
        {
            if (str.length() == min_len)
            {
                ans.insert(str + X[m - 1]);
            }
        }
        for (auto str : temp2)
        {
            if (str.length() == min_len)
            {
                ans.insert(str + Y[n - 1]);
            }
        }

        // return the set of SCS
        return ans;
    }
}

int main()
{
    string X = "ABCBDAB", Y = "BDCABA";
    int m = X.length(), n = Y.length();

    // find the set of SCS of X and Y
    set<string> scs = SCS(X, Y, m, n);

    // print the length and the set of SCS
    cout << "The length of the shortest common supersequence is "
         << scs.begin()->length() << nl;
    cout << "The shortest common supersequences are:" << nl;
    printSet(scs);

    return 0;
}
