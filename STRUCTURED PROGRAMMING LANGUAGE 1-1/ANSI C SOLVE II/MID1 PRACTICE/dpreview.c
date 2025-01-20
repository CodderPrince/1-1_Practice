/*#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, *ip;

    // Corrected syntax for calloc
    ip = (int *)calloc(4, sizeof(int));

    for (i = 0; i < 4; i++)
        // Corrected syntax for the loop
        *ip++ = i * i;

    printf("%d\n", *--ip);

    // Free the allocated memory
    free(ip);

    return 0;
}*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p;
    p = malloc(sizeof(int));
    *p=100;
    p=malloc(sizeof(int));
    *p=111;
    printf("%d\n",*p);

}