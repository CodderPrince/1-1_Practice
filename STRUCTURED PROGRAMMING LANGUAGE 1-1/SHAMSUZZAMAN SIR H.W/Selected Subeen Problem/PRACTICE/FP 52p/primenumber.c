#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        unsigned long long int x;
        int i;
        scanf("%llu",&x);
        for(i=2; i*i<=x; i++)
        {
            if(x%i ==0)
            {
                printf("%llu is not a prime\n",x);
                break;
            }
        }
        if(i*i>x)
        {
            printf("%llu is a prime\n",x);
        }
    }

    return 0;
}