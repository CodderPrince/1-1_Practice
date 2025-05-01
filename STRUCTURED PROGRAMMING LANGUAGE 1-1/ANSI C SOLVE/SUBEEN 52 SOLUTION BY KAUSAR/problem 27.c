#include<stdio.h>
int main()
{
    int t,n,rem,i;

    scanf("%d",&t);
    for( i=0 ; i<t ; i++)
    {
        scanf("%d",&n);
        int tem =n;
         int sum=0;
        while(n!=0)
        {
            rem=n%10;
            sum=(rem*rem*rem)+sum;
            n=n/10;
        }
        if(sum==tem)
        {
            printf("%d is an armstrong number!\n",tem);
        }
        else
        {
             printf("%d is not an armstrong number!\n",tem);
        }
    }
    return 0;
}
