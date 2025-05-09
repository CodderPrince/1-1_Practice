#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int i,total_sum=0, n;
        scanf("%d",&n);
        total_sum = n*(n+1)/2;
        int array[n];
        for(i=1; i<=(n-1); i++)
        {
            scanf("%d",&array[i]);
            total_sum = total_sum - array[i];
        }

        printf("%d\n",total_sum);
    }

    return 0;
}