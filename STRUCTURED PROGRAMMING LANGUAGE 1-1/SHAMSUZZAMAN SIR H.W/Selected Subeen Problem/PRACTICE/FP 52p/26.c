#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        double x;
        int count=0;
        scanf("%lf",&x);
        int i;
        while(x>=1.0)
        {
            x = x/2;
            count++;
        }
        printf("%d days\n",count);
    }

    return 0;
}