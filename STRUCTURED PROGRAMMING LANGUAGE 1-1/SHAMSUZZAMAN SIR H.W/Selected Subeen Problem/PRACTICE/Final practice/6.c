#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,first=0,last=0,sum=0;
        scanf("%d",&n);
        
        first = n/10000;
        last = n%10;
        sum = first + last;
        printf("Sum = %d\n",sum);
    }

    return 0;
}