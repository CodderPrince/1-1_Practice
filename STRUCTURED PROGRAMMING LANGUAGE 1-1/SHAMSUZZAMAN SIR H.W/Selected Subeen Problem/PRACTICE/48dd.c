#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int total_sum=0, sum[101],i,n;
        scanf("%d",&n);
        total_sum= n*(n+1)/2;
        for(i=0; i<(n-1); i++)
        {
            scanf("%d",&sum[i]);
            total_sum= total_sum - sum[i];
        }
        printf("%d\n",total_sum);
    }
    return 0;
}