#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int num;
        //printf("Enter any five digit integer number");
        scanf("%d",&num);
        int first=0,last=0;
        first = num/10000;//here input digit is fixed so we divide 10000 to find first digit
        last = num%10;//one er por jotogulo zero diye divide korbo last er theke totogulo number pabo.. jodi 100 dara divide kortam tahole shesher theke 2 digit count hoto
        printf("Sum = %d\n",first+last);
    }
    return 0;
}