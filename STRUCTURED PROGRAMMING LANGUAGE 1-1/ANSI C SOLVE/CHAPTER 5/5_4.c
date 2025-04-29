#include<stdio.h>
int main()
{
    float w,v,x,y;
    int a,b,c,d;
    printf("Enter the four floatting number: ");
    scanf("%f %f %f %f",&w,&v,&x,&y);
    a = w + 0.5;
    b = v + 0.5;
    c = x + 0.5;
    d = y + 0.5;
    for(int i=1; i<=a; i++)
        printf("* ");
        printf("%.2f\n",w);
    for(int i=1; i<=b; i++)
        printf("* ");
        printf("%.2f\n",v);
    for(int i=1; i<=c; i++)
        printf("* ");
        printf("%.2f\n",x);
    for(int i=1; i<=d; i++)
        printf("* ");
        printf("%.2f\n",y);
    return 0;
}