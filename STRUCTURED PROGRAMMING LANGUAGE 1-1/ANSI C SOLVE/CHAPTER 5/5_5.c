#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter 2 digits number: ");
    scanf("%d %d",&a, &b);
    printf("\t%4d\n\tx%3d\n",a,b);
    printf("  \t-----------\n");
    int x,y;
    x = b%10;
    printf("%dx%d is   \t%d\n",x,a,x*a);
    y = b/10;
   printf("%dx%d is    \t%d\n",y,a,y*a);
    printf("  \t-----------\n");
    printf("Add  them\t%d",a*b);
}