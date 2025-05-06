#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl "\n"

int main()
{
    int *p;
    p = (int *)malloc(sizeof(int));
    *p = 100;
    p = (int *)malloc(sizeof(int));
    *p = 111;
    printf("%d", *p);

    return 0;
}