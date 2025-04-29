#include<stdio.h>

int main()
{
    int num,count=0,sum=0;
    for(int i=0; i<=100; i++)
    {
        if(i%6==0 && i%4!=0)
        {
            count++;
            printf("NUmber = %d\n",i);
            sum= sum+i;
        }
       
    }
    printf("Count= %d\n",count);
     printf("Sum = %d\n",sum);
    return 0;
}