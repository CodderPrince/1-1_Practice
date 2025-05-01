#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int num,start,end,count=0;
        scanf("%d %d",&start,&end);
        for(num=start; num<=end; num++)
        {
            int prime=1;
            if(num<=1)
            {
                prime=0;
            }
            for(int j=2; j*j<=num; j++)
            {
                if(num%j==0)
                {
                    prime=0;
                    break;
                }
            }
            if(prime)
            {
                count++;
            }
            //count= count+prime;
        }
        printf("%d\n",count);
    }
    return 0;
}

