#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,i;
        scanf("%d",&n);
        int a[n-1];
        for( i=0 ; i<(n-1) ; i++)
        {
            scanf( "%d",&a[i]);
        }
        int j,count;
        for(i=1 ; i<=n ; i++)
        {
            count=0;
            for( j=0 ; j<(n-1) ; j++)
            {
                if(i==a[j])
                   {
                      count=1;
                        break;
                   }
            }
            if(count==0)
            {
                printf("%d",i);



            }
        }
    }
    return 0;
}
