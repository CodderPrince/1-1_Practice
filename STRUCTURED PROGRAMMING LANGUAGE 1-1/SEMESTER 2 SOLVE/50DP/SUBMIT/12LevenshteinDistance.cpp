/*
DP PROBLEM NUMBER : 12
The Levenshtein distance (Edit distance)
Name: PRINCE
ID: 12105007
Approach: Recursion
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl endl

int distance(string x, int m, string y, int n)
{

    // base case
    if (m == 0)
    {
        return n;
    }

    if (n == 0)
    {
        return m;
    }

    int operation;
    if (x[m - 1] == y[n - 1])
    {
        operation = 0;
    }
    else
    {
        operation = 1;
    }

    return min(min(distance(x, m, y, n - 1) + 1,
                   distance(x, m - 1, y, n) + 1),
               distance(x, m - 1, y, n - 1) + operation);
}

int main()
{
    string x = "AB", y = "CB";
    cout << "Minimum operation needed: " << distance(x, x.length(), y, y.length()) << nl;

    return 0;
}