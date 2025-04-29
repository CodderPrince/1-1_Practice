#include<stdio.h>
int main()
{
    float c,x,y;
    printf("Enter the value of x & y: ");
    scanf("%f %f",&x,&y);
        c = (x+y)*(x-y);
        printf("(c)= %.3f",c);
    
    return 0;
}