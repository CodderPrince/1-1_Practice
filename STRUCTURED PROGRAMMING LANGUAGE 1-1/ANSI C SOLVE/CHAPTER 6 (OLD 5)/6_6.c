#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
 float sq,sum,i,j;
 printf("Number ");
 j=0.1;
 loop3:
printf(" %f",j);
j=j+0.1;
if(j<0.5)
goto loop3;
 printf("\n");
 i=1;
 loop1:
 printf("%f",i);
 j=0.1;
 loop:
 sum=i+j;
 sq=sqrt(sum);
 printf(" %f",sq);
 j=j+0.1;
 if(j<0.5)
goto loop;
 i=i+1;
 if(i<=4)
 {
printf("\n");
goto loop1;
 }
 getch();
}