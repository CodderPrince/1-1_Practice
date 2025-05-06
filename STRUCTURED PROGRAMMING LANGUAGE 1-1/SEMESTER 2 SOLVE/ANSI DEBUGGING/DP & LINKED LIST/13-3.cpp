#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl "\n"

int main()
{

    int i, *ip;
    ip = (int *)calloc(4, sizeof(int));
    for (i = 0; i < 4; i++)
        *ip++ = i * i;
    for (i = 0; i < 4; i++)
        // printf("%d\n", *ip--);
        printf("%d\n", *--ip);

    return 0;
}