#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        unsigned long long int x;
        scanf("%llu",&x);
        int i;
        for(i=2; i*i<=x; i++)
        {
            if(x%i==0)
            {
                printf("%llu is not prime\n",x);
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