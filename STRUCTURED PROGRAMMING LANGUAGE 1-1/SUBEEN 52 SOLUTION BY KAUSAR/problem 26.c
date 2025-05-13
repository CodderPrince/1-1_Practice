#include<stdio.h>
int main()
{
    int t,i;
    double x;
    scanf("%d",&t);
    for( i=0 ; i<t ;i++)
    {
        scanf("%lf",&x);
        int count=0;
        while(x>1.00)
        {
            x=x/2;
            count++;
        }
        printf("%d days\n",count);
    }
    return 0;
}
