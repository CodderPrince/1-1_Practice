#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,row,col,ncr;
        scanf("%d",&n);
        for(row=0; row<=n; row++)
        {
            for(col=0; col<=n; col++)
            {
                if(row==0 || col==0)
                {
                    ncr=1;
                    printf("%d ",ncr);
                }
                else
                {
                    ncr = ncr*(row-col+1)/col;
                    printf("%d ",ncr);
                }
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}