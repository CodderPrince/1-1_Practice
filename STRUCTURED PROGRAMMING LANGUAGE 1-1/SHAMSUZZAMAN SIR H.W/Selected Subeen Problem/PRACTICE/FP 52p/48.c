#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int ts=0;
        ts = n*(n+1)/2;
        int arr[n];
        int i;
        for(i=1; i<n; i++)
        {
            scanf("%d",&arr[i]);
            ts = ts - arr[i];
        }
        printf("%d\n",ts);
    }

    return 0;
}