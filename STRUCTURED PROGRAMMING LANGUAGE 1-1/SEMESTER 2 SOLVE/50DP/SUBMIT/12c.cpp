#include <iostream>
#include <string>
using namespace std;

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

    int a = distance(x, m, y, n - 1) + 1;
    cout << "Value of a: " << a << nl;
    int b = distance(x, m - 1, y, n) + 1;
    cout << "Value of b: " << b << nl;
    int c = distance(x, m - 1, y, n - 1) + operation;
    cout << "Value of c: " << c << nl;
   

    return min(min(a, b), c);
}

int main()
{
    string x = "AB", y = "CB";
    //cout << x.length() << nl;
    //cout << y.length() << nl;

    cout << "Minimum operation needed: " << distance(x, x.length(), y, y.length())<<nl;

    return 0;
}
