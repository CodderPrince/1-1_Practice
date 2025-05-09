#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,i,ts=0;
        scanf("%d",&n);
        ts = n*(n+1)/2;
        int array[n];
        for(i=1; i<=(n-1); i++)
        {
            scanf("%d",&array[i]);
            ts = ts - array[i];
        }
        printf("%d\n",ts);
    }

    return 0;
}