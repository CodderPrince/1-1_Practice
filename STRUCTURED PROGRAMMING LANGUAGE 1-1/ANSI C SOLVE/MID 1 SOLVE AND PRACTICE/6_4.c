#include<stdio.h>
int main()
{
    int a=0,b=1,n,i=1,c=0;
    scanf("%d",&n);
    if(n>=1)
    {
        printf("%d ",b);
        i++;
    }
    do
    {
        c= a+b;
        printf("%d ",c);
        a=b;
        b=c;
        i++;
    }
    
    while (i<=n);
    {
        printf("\n");
    }
    
}