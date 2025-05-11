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
        int n;
        scanf("%d",&n);
        int i,count=0;
        for(i=5; i<=n; i=i*5)
        {
            count = count+n/i;
        }
        printf("%d\n",count);
    }

    return 0;
}