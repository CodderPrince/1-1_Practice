#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b,last,count=0,i;
        scanf("%d %d %d",&a,&b,&last);
        for(i=1; i<=last; i++)
        {
            if(i%a==0 && i%b==0)
            {
                printf("%d\n",i);
            }
        }
    }

    return  0;
}