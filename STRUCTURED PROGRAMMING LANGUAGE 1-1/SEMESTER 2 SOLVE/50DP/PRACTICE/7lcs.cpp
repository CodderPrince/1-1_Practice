#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl endl

//O(2^(m+n))

int SCSLength(string X, string Y, int m, int n)
{
    //if any string is blank
    
    if (m == 0 || n == 0)
    {
        return n + m;
    }

    if (X[m - 1] == Y[n - 1])
    {
        return SCSLength(X, Y, m - 1, n - 1) + 1;
    }
    else
    {
        // otherwise, if the last character of `X` and `Y` don't match
        return min(SCSLength(X, Y, m, n - 1) + 1, SCSLength(X, Y, m - 1, n) + 1);
    }
}

int main()
{
    string X = "CAT", Y = "BAT";
    int m = X.length(), n = Y.length();

    cout << "The length of the shortest common supersequence is "
         << SCSLength(X, Y, m, n);

    return 0;
}
