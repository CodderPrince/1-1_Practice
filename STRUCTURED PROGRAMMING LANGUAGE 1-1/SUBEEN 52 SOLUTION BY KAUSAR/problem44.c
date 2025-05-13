#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        for( int i=0 ; i<n ; i++)
        {
            for( int s=0 ; s<n-i ; s++)
            {
                printf(" ");
            }
            int c;
            for( int j=0 ; j<=i ; j++)
            {
                if(i==0 || j==0)
                {
                    c=1;
              printf("%d ",c) ;
                }

                else
                    {
                    c=(c*(i-j+1)/j);
                    printf("%d ",c);
                    }
            }
            printf("\n");
        }
    }
    return 0;
}
