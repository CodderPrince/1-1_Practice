#include<stdio.h>
int main()
{
    int a=0, b=0, c=0, d=0,marks;
    printf("Enter 100 students marks: ");
    for(int i= 1; i<=100; i++)
    {
        scanf("%d",&marks);
        if(marks>80)
        {
            a++;
        }
        else if(marks>60)
        {
            b++;
        }
         else if(marks>40)
        {
            c++;
        }
         else if(marks<=40)
        {
            d++;
        }
    printf("Who have obtained more than 80: %d\n",a);
    printf("Who have obtained more than 60: %d\n",b);
    printf("Who have obtained more than 40: %d\n",c);
    printf("Who have obtained 40 or less  : %d\n",d);
    return 0;
}