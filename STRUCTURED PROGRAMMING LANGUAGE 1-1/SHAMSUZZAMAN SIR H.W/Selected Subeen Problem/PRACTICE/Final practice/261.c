#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int count=0;
        double x;
        scanf("%lf",&x);
        while(x>=1.0)
        {
            x = x/2;
            count++;
        }
        printf("%d days\n",count);
    }

    return 0;
}