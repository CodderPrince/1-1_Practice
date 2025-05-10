#include<stdio.h>

int main()
    {
        int t;
        scanf("%d",&t);
        while(t--)
        {
            int a,b,i,j;
            scanf("%d %d",&a,&b);
            for(i=0; i<a; i++)
            {
                for(j=0; j<=i; j++)
                {
                    printf("%d ",b);
                }
                printf("\n");
            }
            
            for(i=a-1; i>0; i--)
            {
                for(j=0; j<i; j++)
                {
                    printf("%d ",b);
                }
                printf("\n");

            }
            printf("\n");
           
        }
        return 0;
    }