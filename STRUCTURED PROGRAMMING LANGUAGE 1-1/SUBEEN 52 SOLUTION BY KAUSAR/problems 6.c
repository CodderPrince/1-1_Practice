#include<stdio.h>
int main()
{
    int T;
    scanf("%d",&T);
    while(T--)
    {
        int num,r1,r2,s=0,sum,r;
        scanf("%d",&num);
        r1=num%10;
        while(num!=0)
        {
           r=num%10;
           s=r+s*10;
           num=num/10;
        }
        r2=s%10;
        sum=r1+r2;
         printf("sum = %d",sum);
         printf("\n");

    }

    return 0;
}
