#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b,len,i;
        scanf("%d %d %d",&a,&b,&len);
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