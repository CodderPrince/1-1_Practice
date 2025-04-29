#include<stdio.h>
int main()

{
    int sum=0;
    for(int n=1; n!=10; n= n+2)
    {
        sum = sum+n;
    }
    printf("%d\n",sum);
}