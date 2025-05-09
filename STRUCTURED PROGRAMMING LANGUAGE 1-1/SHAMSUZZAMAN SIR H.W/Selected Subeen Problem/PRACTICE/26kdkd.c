#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        double x;
        scanf("%lf",&x);
        int i,result=0;
        while(x>=1.0)
        {
            x = x/2.0;
            result++;
        }
        printf("%d days\n",result);
    }

    return 0;
}