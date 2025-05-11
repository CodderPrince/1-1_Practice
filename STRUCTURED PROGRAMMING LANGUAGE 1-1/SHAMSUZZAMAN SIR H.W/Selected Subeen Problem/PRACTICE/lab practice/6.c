#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        int num,f,l,sum=0;
        scanf("%d",&num);
        f=num/10000;
        l=num%10;
        sum=f+l;
        printf("Sum = %d\n",sum);
    }

    return 0;
}