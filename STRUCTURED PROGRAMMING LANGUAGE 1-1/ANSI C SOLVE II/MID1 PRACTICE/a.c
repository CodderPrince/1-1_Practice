#include<stdio.h>
#include<stdlib.h>

int main()
{
    char *ptr;
    char my[] = "abcdefg";
    ptr = my;
    ptr += 5;

    printf("Value of ptr: %s\n", ptr);

    return 0;
}
