#include <stdio.h>
#include <string.h>

int main()
{
    // assign integer number
    int x = 10;
    int *ptr = &x;
    printf("value of ptr = %d\n", *ptr);

    // assign a character
    char c = 's';
    char *y = &c;
    printf("Value of character = %c\n", *y);

    // assign a string
    char ch[] = "prince";
    char *p = ch;
    printf("Value of string = %s\n", p);
}