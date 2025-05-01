
#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
        {
        int i,count=0;
        int num;
        scanf("%d",&num);
        for(i=5 ; i<=num ; i=i*5 )
        {
            count=count+num /i;
        }
        printf("%d", count);
        printf("\n");
    }
    return 0;
}
