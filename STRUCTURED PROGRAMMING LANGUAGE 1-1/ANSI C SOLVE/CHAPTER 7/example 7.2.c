#include<stdio.h>
#define MAXVAL 50
#define COUNTER 11
int main()
{
float value[MAXVAL];
int i,low,high;
int group[COUNTER] = {0};
for( i = 0 ; i < MAXVAL ; i++ )
{
scanf("%f",&value[i]);
++ group[(int)( value[i])/10];
}
printf("\n");
printf("GROUP RANGE FREQUENCY\n\n" ) ;
for( i = 0 ; i < COUNTER ; i++ )
{
low = i * 10 ;
if(i == 10)
high = 100 ;
else
high = low + 9 ;
printf("%2d %3d to %3d %d\n",i+1, low, high, group[i]);
}
}
