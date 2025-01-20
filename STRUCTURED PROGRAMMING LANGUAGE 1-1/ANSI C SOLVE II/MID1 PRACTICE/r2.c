#include <stdio.h>
#include <string.h>

int main()
{
    char a[100] = "Hello", b[] = "Its Me", *p, *q;
    int l = strlen(a);
    int m = strlen(b);
    
    p = a;
    q = b;
    p += l;
    q += m - l;

    do
    {
        *p++ = *q--;
    } while (m--);

    *p = '\0';

    printf("%s\t%s\n", a, q);

    return 0;
}
