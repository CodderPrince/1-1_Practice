#include<stdio.h>
int main()
{
    float a,x,y;
    printf("Enter the value of x & y: ");
    scanf("%f %f",&x,&y);
    if(x-y == 0)
    {
        printf("The results of the following expression is undefined!");
    }
    else
    {
        a = (x+y)/(x-y);
        printf("(a)= %.3f",a);
    }
    return 0;
}