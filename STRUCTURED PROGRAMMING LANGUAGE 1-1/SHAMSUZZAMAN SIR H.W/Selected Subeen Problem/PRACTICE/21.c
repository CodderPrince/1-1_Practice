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
        int i;
        gets(str);
        printf("%s\n",strrev(str));
    }
    return 0;
}