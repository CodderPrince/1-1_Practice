/*
DP PROBLEM NUMBER : 4
Longest Palindromic Subsequence[LPS]
Name: PRINCE
ID: 12105007

Solving process: RECURSION
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl endl

int lps(string str, int i, int j)
{
    // base case
    if (i > j)
    {
        return 0;
    }
    if (i == j)
    {
        return 1;
    }
    if (str[i] == str[j])
    {
        return 2 + lps(str, i + 1, j - 1);
    }
    else
    {
        return max(lps(str, i + 1, j), lps(str, i, j - 1));
    }
}

int main()
{
    string str = "abbad";
    // getline(cin,str);

    cout << "LPS : " << lps(str, 0, str.length() - 1);

    return 0;
}