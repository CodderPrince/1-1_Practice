#include<stdio.h>
#include<string.h>

int main()
{
    char str[101];
    printf("Enter a string: ");
    gets(str);
    int x,y;
    printf("Enter a number how many characters you want to extract: ");
    scanf("%d",&x);
    printf("Enter the begining index you want to extract: ");
    scanf("%d",&y);
    int i;
    for(i=y-1; i<x+y-1; i++)
    {
        printf("%c",str[i]);
    }
    printf("\n");

    return 0;
}