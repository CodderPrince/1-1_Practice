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
        int a,b,n;
        scanf("%d %d %d",&a,&b,&n);
        int i;
        for(i=1; i<=n; i++)
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