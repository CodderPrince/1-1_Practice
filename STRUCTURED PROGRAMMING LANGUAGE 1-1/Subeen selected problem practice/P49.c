#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        unsigned long long int n,i,count=0;
        scanf("%llu",&n);
        for(i=2; i<=n/2; i++)//loop ta muloto cholbe n/2 porjonto n=11 hole 11/2=5 porjonto loop ta cholbe ar i++ increase hote thakbe
        {
            if(n%i==0)
            {
                count++;
                break;
            }
            else
            {
                count=0;
            }
        }
        if(count==0 || n==2)
        {
            printf("%llu is a prime\n",n);
        }
        else
        {
            printf("%llu is not a prime\n",n);
        }
    }
    return 0;
}
