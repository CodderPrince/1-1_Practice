#include<stdio.h>
int main()
{
    int t,i,a,b,c,temp;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
    scanf("%d %d %d",&a,&b,&c);
    printf("Case %d: ",i);
    if(a>b)
    {
    temp=a;
    a=b;
    b=temp;
    }
    if(a>c)
    {
    temp=a;
    a=c;
    c=temp;
    }
    if(b>c)
    {
    temp=b;
    b=c;
    c=temp;
    }
    printf("%d %d %d\n",a,b,c);
    }
    return 0;
}