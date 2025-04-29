#include<stdio.h>
int main()
{
    unsigned long long int n,fact=1,i;
    scanf("%llu",&n);
    for(i=2; i<=n; i++)
    {
        fact= fact*i;
    }
    printf("Factorial= %llu\n",fact);
}