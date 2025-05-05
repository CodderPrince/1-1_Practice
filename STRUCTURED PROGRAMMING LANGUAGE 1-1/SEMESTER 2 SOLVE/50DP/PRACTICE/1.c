#include <stdio.h>

int main()
{
    int a = 5, b = 10, d = 15, e = 2;

    int *p = &a, *q = &b, *r = &d, *s = &e;
    int x = p - q;
    // int c = *z - *y;
    printf("%d\n", x); // 1
    int c = p - r;
    printf("%d\n", c); // 2
    int y = p - s;     // 3
    printf("%d\n", y);

    char aa='a',bb='b';
    return 0;
}
