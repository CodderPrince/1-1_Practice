#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl endl

int distance(string x, int m, string y, int n)
{
    cout << "Called with m = " << m << " and n = " << n << endl;

    // base case
    if (m == 0)
    {
        cout << "Base case: m = 0, return " << n << endl;
        return n;
    }

    if (n == 0)
    {
        cout << "Base case: n = 0, return " << m << endl;
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

    return min(min
                (distance(x, m, y, n - 1) + 1,
                distance(x, m - 1, y, n) + 1),
            distance(x, m - 1, y, n - 1) + operation);
}

int main()
{
    string x = "AB", y = "CB";
    cout << "Minimum operation needed: " << distance(x, x.length(), y, y.length()) << nl;

    return 0;
}
