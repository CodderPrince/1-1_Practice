#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int row,col,x,num;
        scanf("%d %d",&x,&num);
        for(row=0; row<x; row++)
        {
            for(col=0; col<=row; col++)
            {
                printf("%d ",num);
            }
            printf("\n");
        }

        for(row=x-1; row>0; row--)
        {
            for(col=0; col<row; col++)
            {
                printf("%d ",num);
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}