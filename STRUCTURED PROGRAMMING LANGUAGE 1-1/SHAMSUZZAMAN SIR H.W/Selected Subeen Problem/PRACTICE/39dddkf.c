#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    getchar();
    while(t--)
    {
        char str[101],re[101];
        gets(str);
        strcpy(re,str);
        strrev(re);
        if(strcmp(str,re)==0)
        {
            printf("Yes! It is palindrome!\n");
        }
        else
        {
            printf("No! It is not palindrome!\n");
        }
    }
    return 0;
}