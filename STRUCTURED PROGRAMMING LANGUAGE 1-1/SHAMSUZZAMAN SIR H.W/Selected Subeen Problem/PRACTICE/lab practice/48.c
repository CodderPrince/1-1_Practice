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
        int arr[n];
        int ts=0;
        ts = n*(n+1)/2;
        int i;
        for(i=0; i<n-1; i++)
        {
            scanf("%d",&arr[i]);
            ts = ts-arr[i];
        }
        printf("%d\n",ts);
    }

    return 0;
}