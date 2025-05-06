#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int arr[n],i,total_sum=0;
        total_sum = n*(n+1)/2;
        for(i=1; i<n; i++)
        {
            scanf("%d",&arr[i]);
            total_sum = total_sum - arr[i];
        }
        printf("%d\n",total_sum);
    }

    return 0;
}