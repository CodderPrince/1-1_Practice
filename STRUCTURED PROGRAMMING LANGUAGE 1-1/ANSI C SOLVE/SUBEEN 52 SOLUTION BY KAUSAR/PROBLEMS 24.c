#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a[101],i,n;
        scanf("%d",&n);
        for(i=0 ; i<n ; i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=1 ; i<n ; i+=2)
        {
            printf("%d ",a[i]);
        }
        printf("\n");
    }
    return 0;
}
