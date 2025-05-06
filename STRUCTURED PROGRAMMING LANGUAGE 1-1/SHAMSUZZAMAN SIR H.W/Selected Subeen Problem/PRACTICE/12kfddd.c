#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int i,x,count=0;
        for(i=5; i<=n; i= i*5)
        {
            x = n/i;
            count = count + x;
        }
        printf("%d\n",count);
    }

    return 0;
}