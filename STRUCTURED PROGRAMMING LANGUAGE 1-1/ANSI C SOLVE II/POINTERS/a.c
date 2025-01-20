#include <stdio.h>
#include <string.h>

int main()
{
    // What is the output of the following code?
    int m[2];
    int *p = m;
    printf("%d\n",*p);
    printf("%d\n",&p);
    m[0] = 100;
    m[1] = 200;

    printf("%d %d\n", ++*p, *p);
   // int x= ++*p;
   // printf("%d %d", &x, &p);
}