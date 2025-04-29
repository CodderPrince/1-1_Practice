#include<stdio.h>

int main()
{
    int i,x;
    x=1;
    for(i=-10; i>=-10;)
    {
        printf("%d ",i);
        for(i=-12; i>=-42; i=i-x)
        {
            x=x*2;
            printf("%d ",i);
        }
    }
}