#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
    int t;
    scanf("%d",&t);
    getchar();
    while(t--)
    {
        double x;
        int count=0;
        scanf("%lf",&x);
        while(x>=1.0)
        {
            x = x/2.0;
            count++;
        }
        printf("%d days\n",count);
    }

    return 0;
}