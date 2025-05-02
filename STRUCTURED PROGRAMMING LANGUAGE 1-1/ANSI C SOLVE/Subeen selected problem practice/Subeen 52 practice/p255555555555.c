#include <stdio.h>

void main()
{
    int t;
    scanf("%d", &t);
    while(t--){
    int i, n1, n2, max, lcm=1;


     //printf("\n\n  LCM of two numbers:\n ");
     //printf("----------------------\n");


    //printf("Input 1st number for LCM: ");
    scanf("%d %d", &n1, &n2);
    //printf("Input 2nd number for LCM: ");
    //scanf("%d", &n2);


    max = (n1>n2) ? n1 : n2;


    for(lcm=max;  ; lcm+=max)
    {

       if( lcm%n1 == 0 && lcm%n2 == 0)
        {
        printf("LCM = %d\n", lcm);
        break;
        }
        lcm++;
    }
    printf("LCM = %d\n",lcm);
    }
}
