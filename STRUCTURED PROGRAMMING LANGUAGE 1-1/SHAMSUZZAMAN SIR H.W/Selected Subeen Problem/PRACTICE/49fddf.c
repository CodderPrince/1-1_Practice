#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int i;
        unsigned long long int n;
        scanf("%llu",&n);
        for(i=2; i<n; i++)
        {
            if(n%i == 0)
            {
                printf("%llu is not a prime\n",n);
                break;
            }
        }

        if(i*i>n)
        {
            printf("%llu is a prime\n",n);
        }
    }

    return 0;
}