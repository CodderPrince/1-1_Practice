#include<stdio.h>
int main()
{
    int x,b,sum=0;
    scanf("%d",&x);
    for(int i=1; i<=4; i++)
    {
        b=x%10;
        sum= sum+b;
        x= x/10;
    }
    printf("Sum = %d\n",sum);

    return 0;
}