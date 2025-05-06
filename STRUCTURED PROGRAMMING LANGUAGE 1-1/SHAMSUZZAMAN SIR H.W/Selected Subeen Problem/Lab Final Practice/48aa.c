#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int arr[n];
        int ts=0,i;
        ts = n*(n+1)/2;
        for(i=1; i<n; i++)
        {
            scanf("%d",&arr[i]);
            ts = ts-arr[i];
        }
        printf("%d\n",ts);
    }

    return 0;
}