#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl "\n"

int main()
{
    int m[2];
    *(m + 1) = 100;
    *m = *(m + 1);
    printf("%d\n", m[0]);
    printf("%d\n", *m);
    printf("%d\n", *(m + 1));

    return 0;
}