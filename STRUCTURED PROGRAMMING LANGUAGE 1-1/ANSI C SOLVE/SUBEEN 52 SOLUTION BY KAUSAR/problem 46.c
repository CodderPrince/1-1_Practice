#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b,c;
        scanf("%d %d %d",&a,&b,&c);
        double s;
        s=(a+b+c)/2;
        double r;
        r=s*(s-a)*(s-b)*(s-c);
        double k;
        k=sqrt(r);
        printf("%.3lf\n",k);
    }
    return 0;
}
