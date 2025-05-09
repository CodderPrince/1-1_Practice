#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int first,last,count=0,i,j;
        scanf("%d %d",&first,&last);
        for(i=first; i<=last; i++)
        {
            for(j=2; j*j<=i; j++)
            {
                 if(i==1)
            {
                continue;
            }
            if(i%j == 0)
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