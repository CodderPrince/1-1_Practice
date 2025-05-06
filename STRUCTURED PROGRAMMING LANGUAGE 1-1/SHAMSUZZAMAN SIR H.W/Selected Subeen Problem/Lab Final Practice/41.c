#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int i;
        double sum=0,fact=1;
        for(i=1; i<=n; i++)
        {
            fact = fact*i;
            sum = sum + (i/fact);
        }
        printf("%.4lf\n",sum);
    }

    return 0;
}