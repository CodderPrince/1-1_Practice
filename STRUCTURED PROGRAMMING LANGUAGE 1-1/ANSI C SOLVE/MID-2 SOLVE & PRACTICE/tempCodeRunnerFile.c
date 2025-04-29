#include<stdio.h>

int main()
{
    int a,b,result;
    printf("Enter two integer number: ");
    scanf("%d %d",&a,&b);
    result = sum(a,b);
    printf("Sum of two number: %d\n",result);

    return 0;
}

int sum(int a, int b)
{
    return a+b;
}