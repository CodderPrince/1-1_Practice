#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int array[n];
        for(int i=0; i<n; i++)
        {
            scanf("%d",&array[i]);
        }
        for(int i=0; i<n; i+=2)
        {
            printf("%d ",array[i]);
        }
        printf("\n");
    }
    return 0;
}