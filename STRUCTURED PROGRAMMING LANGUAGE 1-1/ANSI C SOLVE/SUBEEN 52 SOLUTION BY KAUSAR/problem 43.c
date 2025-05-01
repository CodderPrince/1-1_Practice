#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int p,q,r,i;
        scanf("%d",&p);
        scanf("%d",&q);
        scanf("%d",&r);
        int temp=1;
        for(i=1 ; i<=q ; i++)
        {
            temp=(temp*p)%r;
        }
        printf("Result = %d\n",temp);
    }
    return 0;
}
