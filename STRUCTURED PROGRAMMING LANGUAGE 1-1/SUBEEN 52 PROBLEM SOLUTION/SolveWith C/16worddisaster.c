#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    getchar();
    while(t--)
    {
        char str[1001];
        gets(str);
        strrev(str);
        printf("%s\n",str);
    }
    return 0;
}