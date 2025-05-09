#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int i, arr[n];
        for(i=0; i<n; i++)
        {
            scanf("%d",&arr[i]);
        }
        for(i=0; i<n; i= i+2)
        {
            printf("%d ",arr[i]);
        }
        printf("\n");
    }

    return 0;
}