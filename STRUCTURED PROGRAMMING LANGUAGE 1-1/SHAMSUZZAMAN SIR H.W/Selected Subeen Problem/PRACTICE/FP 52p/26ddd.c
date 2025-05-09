#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        double x,sum=0;
        scanf("%lf",&x);
        while(x>=1.0)
        {
            x = x/2;
            sum++;
        }
        printf("%.0lf days\n",sum);
    }

    return 0;
}