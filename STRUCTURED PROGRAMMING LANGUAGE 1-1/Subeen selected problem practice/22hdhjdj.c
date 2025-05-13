#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int start,i,end,count=0;
        scanf("%d %d",&start,&end);
        for( i=start; i<=end; i++)
        {
            int prime=1;
            if(i<=1)
            {
                prime=0;
            }
            for(int j=2; j*j<=i; j++) 
            {
                if(i%j==0)
                {
                    prime=0;
                    break;
                }
            }
            if(prime)
            {
                count++;
            }
        }
        printf("%d\n",count);
    }
    return 0;
}