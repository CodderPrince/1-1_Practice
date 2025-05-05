#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl "\n"

int main()
{

    int m = 10;
    int *p2 = &m;
    cout << *p2 << nl;
    int n = 5;
    int *p1 = &n;
    int x = *p1 + *p2++;
    cout << x << nl;
    // int *p1=&p2;
    // int **p1 = &p2;
    // cout << **p1 << nl;
    return 0;
}