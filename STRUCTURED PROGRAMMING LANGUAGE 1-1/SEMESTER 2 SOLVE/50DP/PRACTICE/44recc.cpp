#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl endl

int lps(string s, int i, int j)
{
    if (i > j)
    {
        return 0;
    }
    if (i == j)
    {
        return 1;
    }
    if (s[i] == s[j])
    {
        return 2 + lps(s, i + 1, j - 1);
    }
    else
    {
        return max(lps(s, i + 1, j), lps(s, i, j - 1));
    }
}
int main()
{

    string s = "aba";
    cout << "LPS: " << lps(s, 0, s.length());
    return 0;
}