#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007            // 1e9 + 7
#define PI 3.14159265358979323846 // acos(-1)
#define nl "\n"

void test(int *a);
int main()
{
    /*int *p;
    p = (int *)malloc(sizeof(int));
    *p = 100;
    p = (int *)malloc(sizeof(int));
    *p = 111;
    printf("%d", *p);
    */
    int x = 50;
    test(&x);
    printf("%d\n", x);

    return 0;
}
void test(int *a)
{
    *a = *a + 50;
}