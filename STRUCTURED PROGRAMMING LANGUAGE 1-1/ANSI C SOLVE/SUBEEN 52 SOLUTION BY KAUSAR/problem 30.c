#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {

        int num,i;
        int count=0;
        scanf("%d",&num);
        int temp=num;
        for(i=1 ; i<num ; i++)
        {
            if( num%i==0)
            {
                count=i+count;
            }
        }
        if(count==temp)
        {
            printf("YES, %d is a perfect number!\n",temp);
        }
        else
        {
             printf("NO, %d is a not perfect number!\n",temp);
        }
    }
    return 0;
}

