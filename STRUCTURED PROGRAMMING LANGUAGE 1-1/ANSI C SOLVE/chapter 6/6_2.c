#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    long long int fact=1;
    for(int i=1; i<=n; i++)
    {
        fact= fact*i;
    }
    printf("The factorial number: %lld\n",fact);
}