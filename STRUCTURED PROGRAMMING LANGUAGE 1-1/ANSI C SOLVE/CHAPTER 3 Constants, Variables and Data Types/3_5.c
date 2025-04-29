#include<stdio.h>

int main()
{
    int num;
    printf("Enter an integer number: ");
    scanf("%d",&num);
    int i=0,j,k;
    int arr[101],x;//1234
    while(num>0)
    {
        int x = num%10;//123
        arr[i]= x;
        i++;
        x=x/10;//123
        
    }
    for(j=i-1; j>=0; j--)
    {
        for(k=j; k>0; k--)
        {
            printf("%d ",arr[k]);
        }
    }

 return 0;
}