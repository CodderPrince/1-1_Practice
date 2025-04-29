#include<stdio.h>
int main()
{
    int i,call;
    double bills=0;
    scanf("%d",&call);
    if(call<=100)
    {
        printf("Total bills this month: Rs.250");
    }
    else{
        bills= 250 + (call-100)*1.25;
        printf("Total bill this month: %.2lf\n",bills);
    }
}