#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n, total_sum=0, i;
        scanf("%d",&n);
        int array[n];
        total_sum = n*(n+1)/2;
        for(i=0; i<n-1; i++)
        {
            scanf("%d",&array[i]);
            total_sum = total_sum - array[i];
        }

        printf("%d\n",total_sum);
    }

    return 0;
}