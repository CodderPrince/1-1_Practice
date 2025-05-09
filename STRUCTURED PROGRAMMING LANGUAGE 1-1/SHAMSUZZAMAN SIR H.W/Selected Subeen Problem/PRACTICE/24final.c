#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int i,n;
        scanf("%d",&n);
        int array[n];
        for(i=0; i<n; i++)
        {
            scanf("%d",&array[i]);
        }
        for(i=0; i<n; i=i+2)
        {
            printf("%d ",array[i]);
        }
        printf("\n");
    }
    return 0;
}