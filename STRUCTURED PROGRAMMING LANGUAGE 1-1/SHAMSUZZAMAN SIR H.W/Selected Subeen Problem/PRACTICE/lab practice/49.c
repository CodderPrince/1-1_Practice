#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
    int t;
    scanf("%d",&t);
    getchar();
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int i,j;
        
        for(i=2; i*i<=n; i++)
        {
        if(n==1)
        {
            continue;
        }
        if(n%i==0)
        {
            printf("%d is not a prime\n",n);
            break;
        }
        }
        if(i*i>n)
        {
            printf("%d is a prime\n",n);
        }
    }

    return 0;
}