#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int r1,r2,upb,plb;
        double crr,rrr;
        scanf("%d %d %d", &r1, &r2, &upb);
        plb= 300- upb;
        crr= r2/(plb/6.0);
        
        if(r1<r2)
        {
            rrr=0.0;
        }
        else
        {
            rrr= (r1-r2+1)/(upb/6.0);
        }
         printf("%.2lf %.2lf\n",crr,rrr);
    }
    return 0;
}