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
        int a,b;
        scanf("%d %d",&a,&b);
        int i,j;

        for(i=0; i<a; i++)
        {
            for(j=0; j<=i; j++)
            {
                printf("%d ",b);
            }
            printf("\n");
        }
        //printf("\n");
        for(i=a-1; i>0; i--)
        {
            for(j=0; j<i; j++)
            {
                printf("%d ",b);
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}