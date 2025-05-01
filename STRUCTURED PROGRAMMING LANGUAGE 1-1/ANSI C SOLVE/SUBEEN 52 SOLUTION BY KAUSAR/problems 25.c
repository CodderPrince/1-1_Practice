#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b,lcd,gcd,x,y,tem;
        scanf("%d %d",&a,&b);
        x=a,y=b;
        while(y!=0)
        {
            tem=y;
            y=x%y;
            x=tem;

        }
        gcd=x;
     lcd=(a*b)/gcd;
        printf("LCD = %d\n",lcd);
    }
    return 0;
}
