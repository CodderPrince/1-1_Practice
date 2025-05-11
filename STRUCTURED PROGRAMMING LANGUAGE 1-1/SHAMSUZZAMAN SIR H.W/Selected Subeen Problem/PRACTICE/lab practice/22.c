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
        int i,j,count=0;
        for(i=a; i<=b; i++)
        {
            if(i==1)
            {
                continue;
            }
            for(j=2; j<i; j++)
            {
                if(i%j==0)
                {
                    break;
                }
            }
            if(j*j>i)
            {
                count++;
            }
        }
        printf("%d\n",count);
    }

    return 0;
}