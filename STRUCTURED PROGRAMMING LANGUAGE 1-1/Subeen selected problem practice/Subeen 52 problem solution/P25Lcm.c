#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
    long long int a,b,tmp,i;
    scanf("%lld %lld",&a,&b);
    if(b>a)
    {
        tmp=b;
        b=a;
        a=tmp;
    }
    if(a%b==0)
    {
        printf("LCM = %lld\n",a);
    }
    else
    {
    for(i=a; ; i= i+a)
    {
        if(i%b==0)
        {
            break;
        }
    }
    printf("LCM = %lld\n",i);
    }
    }
    return 0;
}
