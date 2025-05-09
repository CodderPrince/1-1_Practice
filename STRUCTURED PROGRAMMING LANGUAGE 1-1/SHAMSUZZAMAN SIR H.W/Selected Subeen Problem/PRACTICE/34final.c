#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long int a,b,len,i;
        scanf("%ld %ld %ld",&a,&b,&len);
        for(i=1; i<=len; i++)
        {
            if(i%a==0 && i%b==0)
            {
                printf("%d\n",i);
            }
        }
        printf("\n");
    }
    return 0;
}