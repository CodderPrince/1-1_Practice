#include<stdio.h>
#include<math.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&t);
        double fact=1,result=0,i;
        
        for(i=1; i<=n; i++)
        {
            fact = fact*i;
            result = result + (double)(i/fact);
        }
        printf("%.4lf\n",result);
    }

    return 0;
}