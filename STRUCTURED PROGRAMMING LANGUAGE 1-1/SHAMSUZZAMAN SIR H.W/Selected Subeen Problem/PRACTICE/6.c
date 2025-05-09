#include<stdio.h>
int main()
{
    int t,n,sum=0;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);//12345
        int last = n%10;//5
        int first= n/10000;//1
        sum= last+first;//5+1=6
        printf("Sum = %d\n",sum);
        printf("Sum = %d\n",last);
    }
   
    return 0;
}