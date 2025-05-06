#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int i, fact=0,count=0;
        for(i=5; i<=n; i=i*5)
        {
            count = n/i;
            fact= fact+count;
        }
        printf("%d\n",fact);
    }
}