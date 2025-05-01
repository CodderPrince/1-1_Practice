#include<stdio.h>
long long int fact(long long n)
{
    long long int i,result=1;
    for( i=1 ; i<=n ; i++)
    {
        result=result*i;
    }
    return result;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
       long long int n,i;
       double sum=0.0;
       scanf("%lld",&n);
         for( i=1 ; i<=n ; i++)
         {
         sum=sum+( (double)i/fact(i) );
         }
         printf("%.4lf\n",sum);
    }
    return 0;
}
