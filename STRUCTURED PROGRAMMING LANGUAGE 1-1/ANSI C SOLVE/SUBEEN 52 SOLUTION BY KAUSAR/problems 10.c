#include<stdio.h>
int main()
{
    int T;
    scanf("%d",&T);
    while(T--)
    {
        int r1,r2,b,played_ball;
       double  current_rr,required_rr;
       scanf("%d %d %d", &r1 , &r2 , &b);
       played_ball=300-b;
       current_rr=(r2*1.0/played_ball)*6;
       required_rr=(1.0*(r1-r2+1)/b)*6;
       printf("%0.2lf %0.2lf", current_rr,required_rr);
       printf("\n");
    }
    return 0;

}
