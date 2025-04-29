#include<stdio.h>
int main()
{
    int num,rev=0,rem=0;
    scanf("%d",&num);//123
    while(num>0)
    {
        rem= num%10;//3
        rev= rev*10+rem;//0+3=3
        num= num/10;

    }
    printf("Rev =%d\n",rev);
}