#include<stdio.h>
int main(){
    int i,j,sum=0;
    for(i=100; i<=200; i++)
    {
        if(i%7==0)
        {
            sum= sum+i;
        }
    }
    printf("Sum= %d\n",sum);
    return 0;
}