#include<stdio.h>
int main()
{
    int x,y,z,temp;
    scanf("%d %d %d",&x,&y,&z);
    printf("Before rotate: x=%d\ty=%d\tz=%d\n",x,y,z);
    temp=x;
    x=y;
    y=z;
    z=temp;
    printf("After rotate: x=%d\ty=%d\tz=%d\n",x,y,z);

return 0;
}