#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char str[101];
        scanf("%s",str);
        printf("%s\n",strrev(str));
    }
}
