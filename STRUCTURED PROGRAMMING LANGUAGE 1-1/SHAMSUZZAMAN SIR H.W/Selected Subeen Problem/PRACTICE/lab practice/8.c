#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
    int t,i;
    scanf("%d",&t);
    getchar();
    for(i=1; i<=t; i++)
    {
        int a,b,c,max,min,mid;
        scanf("%d %d %d",&a,&b,&c);
        if(a>b && a>c)
        {
            max=a;
            if(b>c)
            {
                mid=b;
                min=c;
            }
            else
            {
                mid=c;
                min=b;
            }
        }
        else if(a<b && b>c)
        {
            max=b;
            if(a>c)
            {
                mid=a;
                min=c;
            }
            else
            {
                mid=c;
                min=a;
            }
        }
        else 
        {
            max=c;
            if(a>b)
            {
                mid=a;
                min=b;
            }
            else
            {
                mid=b;
                min=a;
            }
        }
        printf("Case %d: %d %d %d\n",i,min,mid,max);
    }

    return 0;
}