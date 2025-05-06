#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int first =0, last=0,sum=0;
        first = n/10000;
        last = n%10;
        sum = last + first;
        printf("Sum = %d\n",sum);
    }

    return 0;
}