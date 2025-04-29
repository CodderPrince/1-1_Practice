#include<stdio.h>

int main()
{
    float x,y;
    int sum=0;
    printf("Enter two value of x and y: ");
    scanf("%f %f",&x,&y);
    sum= x+y;
    printf("X= %.2f\nY = %.2f\nSum = %d\n",x,y,sum);

    return 0;
}