#include<stdio.h>
int main()
{
    int t=1,T;
    scanf("%d",&T);
    while(T--)
    {
        int num;
        scanf("%d",&num);
        printf("Case %d:",t);
        for(int i=1 ; i<=num ; i++)
        {
            if(num%i==0)
            {
                printf("%d ",i);
            }
        }
        printf("\n");
        t++;
    }
    return 0;
}
