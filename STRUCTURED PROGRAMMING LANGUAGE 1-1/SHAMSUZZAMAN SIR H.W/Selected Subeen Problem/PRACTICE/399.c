#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    getchar();
    while(t--)
    {
        char str1[101], str2[101];
        gets(str1);
        str2[101]=strrev(str1);
        if (strcmp(str1,str2)==0)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }
}