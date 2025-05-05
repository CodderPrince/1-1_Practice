#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl endl

int dis(string s1, int x, string s2, int y)
{
    if (x == 0)
    {
        return y;
    }
    if (y == 0)
    {
        return x;
    }

    int operation;
    if (s1[x - 1] == s2[y - 1])
    {
        operation = 0;
    }
    else
    {
        operation = 1;
    }

    return min(min(dis(s1, x, s2, y - 1) + 1,
                   dis(s1, x - 1, s2, y) + 1),
               dis(s1, x - 1, s2, y - 1) + operation);
}
int main()
{
    string s1 = "abc", s2 = "bcd";
    cout << "Minimum modification: " << dis(s1, s1.length(), s2, s2.length()) << nl;

    return 0;
}