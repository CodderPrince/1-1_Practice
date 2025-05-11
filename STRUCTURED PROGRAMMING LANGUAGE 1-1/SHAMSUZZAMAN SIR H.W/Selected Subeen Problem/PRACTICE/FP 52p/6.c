#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int f,l,sum=0,n;
        scanf("%d",&n);
        f=n/10000;
        l=n%10;
        sum=f+l;
        printf("Sum = %d\n",sum);
    }
    return 0;
}