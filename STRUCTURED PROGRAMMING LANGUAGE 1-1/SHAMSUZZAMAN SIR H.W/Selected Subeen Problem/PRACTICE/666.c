#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        int first=0,last=0,sum=0;
        scanf("%d",&n);//12345
        first= n/10000;//1
        last= n%10;//5
        sum= first+last;
        printf("Sum = %d\n",sum);
    }
    return 0;
}