/*
DP PROBLEM NUMBER : 23
Find all n-digit binary numbers without any consecutive 1’s
Name: PRINCE
ID: 12105007
Approach: Simple Iterative DP
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll countStrings(int n)
{
    // BASE CASE
    if (n == 0)
    {
        return 0;
    }

    // WHEN N=1
    int zeroend = 1;            //'0'
    int oneend = 1;             //'1'
    int sum = zeroend + oneend; // 2
    if (n == 1)
    {
        return sum;
    }

    //
    int i = 2;
    while (i <= n)
    {
        oneend = zeroend;
        zeroend = sum;
        sum = (oneend + zeroend);
        i++;
    }
    return sum;
}

int main()
{
    int n;
    cin >> n;
    auto ans = countStrings(n);
    cout << ans << "\n";

    return 0;
}
