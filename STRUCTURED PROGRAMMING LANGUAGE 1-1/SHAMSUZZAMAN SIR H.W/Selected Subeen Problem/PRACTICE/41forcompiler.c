#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int i,fact=1;
        double sum=0;
        int n;
        scanf("%d",&n);
        for(i=1;i<=n; i++)
        {
            fact= fact*i;
            sum= sum+ (double)i/fact;
        }
        printf("%.4lf\n",sum);
    }
    return 0;
}