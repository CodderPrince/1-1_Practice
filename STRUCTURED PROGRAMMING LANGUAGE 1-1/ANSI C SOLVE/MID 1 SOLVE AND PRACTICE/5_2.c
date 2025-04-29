#include<stdio.h>

int main()
{
    int i,sum=0;
    for(i=101; i<=200; i++)
    {
        if(i%7==0)
        {
            printf("%d\n",i);
             sum= sum+i;
        }
       
    }
     printf("Sum = %d\n",sum);
    return 0;
}