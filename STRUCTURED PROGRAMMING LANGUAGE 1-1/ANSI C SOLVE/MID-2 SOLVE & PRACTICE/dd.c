#include<stdio.h>
#include<math.h>
#define PI 3.1416

int main()
{
    int a,b,x;
    float side,radian_x;
    printf("Enter the value of a,b and x(in degrees): ");
    scanf("%d %d %d",&a,&b,&x);

    radian_x = x * (PI/180);
    side = sqrt(a*a + b*b - 2*a*b*cos(radian_x));
    printf("Side = %.2f\n",side);

    return 0;
}