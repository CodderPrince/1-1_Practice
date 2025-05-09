#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    getchar();
    while(t--)
    {
        char str[101],rev[101];
        gets(str);
        strcpy(rev,str);
        strrev(rev);
        if(strcmp(str,rev)==0)
        {
            printf("Yes! it is a palindrome!\n");
        }
        else
        {
            printf("No! it is not a palindrome!\n");
        }
    }
    return 0;
}