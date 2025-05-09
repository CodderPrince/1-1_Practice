#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int first,last,i,count=0,j;
        scanf("%d %d",&first,&last);
        for(i=first; i<=last; i++)
        {
            if(i==1)
            {
                continue;
            }
            for(j=2; j*j<=i; j++)
            {
                if(i%j==0)
                {
                    break;
                }
            }
            if(j*j>i)
            {
                count++;
            }
        }
        printf("%d\n",count);
    }

    return 0;
}