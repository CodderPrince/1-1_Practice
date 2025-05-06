#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=1; i<=t; i++)
    {
        int num,count=0;
        scanf("%d",&num);
        for(int i=5; i<=num; i= i*5)
        {
            count= count + num/i;
        }
        printf("%d\n",count);
    }
    return 0;
}