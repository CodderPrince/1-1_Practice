#include<stdio.h>
int main()
{
    int i,sum=0;
    for(i=1; i<=99; i+=2)
    {
        sum= sum+i;
    }
    printf("Sum of the series: %d\n",sum);
}