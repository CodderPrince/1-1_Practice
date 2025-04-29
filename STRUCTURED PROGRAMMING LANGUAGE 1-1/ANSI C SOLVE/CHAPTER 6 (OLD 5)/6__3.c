#include<stdio.h>
int main()
{
    int a,b,c,d,m,n;
    float x1,x2;
    printf("Enter the value of a,b,c,d,m,b: ");
    scanf("%d %d %d %d %d %d", &a,&b,&c,&d,&m,&n);
   float u= a*d -c*b;
    if(u!=0)
    {
        x1=(m*d-b*n)/u;
        x2=(n*a-m*c)/u;
        printf("The value of x1: %.3f\n",x1);
        printf("The value of x2: %.3f\n",x2);
    }
    else
    {
        printf("The result is undefined!");
    }
    return 0;
}