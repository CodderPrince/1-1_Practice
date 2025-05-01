#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int i,x,n;
        scanf("%d %d",&x,&n);
        if(x>n)
        {
            printf("Invalid!\n");
        }
        else
        {
        for( i=x ; i<=n ; i++)
        {
            if(i%x==0)
            {
                printf("%d\n",i);
            }
        }
        }

    }
    return 0;
}
