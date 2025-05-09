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
        int i;
        strcpy(rev,str);
        strrev(rev);
        if(strcmp(str,rev)==0)
        {
            printf("Yes! It is palindrome!\n");
        }
        else
        {
            printf("Sorry! It is not palindrome!\n");
        }
    }
    return 0;
}