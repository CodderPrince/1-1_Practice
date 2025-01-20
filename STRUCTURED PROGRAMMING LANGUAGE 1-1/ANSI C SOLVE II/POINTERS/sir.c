#include <String.h>
#include <stdio.h>
#include <stdlib.h>
int main()
{
    // declaring the string pointer array as well as a char array
    char *names[5], a[5];
    int l, i;
    char *x;
    printf("Enter 5 strings:\n");
    // taking inputs in char array as well
    // as copying them to the string pointer array
    for (i = 0; i < 5; i++)
    {
        scanf("%s", a); // taking values in char array
        l = strlen(a);
        // used malloc to allocate dynamic memory. l+1 to store "\0".
        x = (char *)malloc(l + 1);
        strcpy(x, a);
        names[i] = x;
    }
    printf("The strings are:\n");

    for (i = 0; i < 5; i++)
        printf("%s\n", names[i]);

    return 0;
}
