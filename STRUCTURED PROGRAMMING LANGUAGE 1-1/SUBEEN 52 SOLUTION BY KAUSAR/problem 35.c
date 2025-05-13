#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d",&t);

    while(t--)
    {
        int x1,y1,r,x2,y2;
        scanf("%d %d",&x1,&y1);
         scanf("%d",&r);
         scanf("%d %d",&x2,&y2);
        int w=(x2-x1)*(x2-x1);
        int x=(y2-y1)*(y2-y1);
        int z=x+w;
        int p=sqrt(z);
        if(p<r)

        {
            printf("The point is inside the circule\n");
        }
        else
        {
               printf("The point is not inside the circule\n");
        }

    }
    return 0;
}
