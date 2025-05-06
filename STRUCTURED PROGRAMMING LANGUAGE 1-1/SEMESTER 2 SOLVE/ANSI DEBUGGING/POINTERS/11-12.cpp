#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl "\n"

int main()
{
    int m = 100;
    int *p1 = &m;
    int **p2 = &p1;
    cout << **p2 << nl;

    return 0;
}