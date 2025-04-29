#include<stdio.h>
int main()
{
    int t;
    printf("Total test case numebr: ");
    scanf("%d",&t);
    while(t--)
 {
    float a;
    int x;
    printf("Enter the integer number: ");
    scanf("%f",&a);
    if(a>=0)
    {
        x = a + 0.5;
    }
    else
    {
        x = a - 0.5;
    }
    printf("Nearest value of %.2f is: %d\n",a,x);
 }
   
    return 0;
}