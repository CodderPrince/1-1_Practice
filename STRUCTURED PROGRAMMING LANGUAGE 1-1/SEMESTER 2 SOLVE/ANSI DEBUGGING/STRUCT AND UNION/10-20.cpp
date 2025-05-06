#include <stdio.h>

int main()
{
    union x
    {
        int a;
        float b;
        double c;
    } x;

    printf("Size of union x: %d\n", sizeof(x));

    x.a = 10;
    printf("a: %d\n", x.a);

    printf("a: %d b: %f c: %f\n", x.a, x.b, x.c);

    x.c = 1.2763;
    printf("a: %d b: %f c: %f\n", x.a, x.b, x.c);
   // x.b = 3.4;
   // printf("a: %d b: %f c: %f\n", x.a, x.b, x.c);
   // x.c = 1.23;
    //printf("a: %d b: %f c: %f\n", x.a, x.b, x.c);

    return 0;
}
