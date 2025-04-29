#include<stdio.h>
int main()
{
    int size;
    scanf("%d",&size);
    int a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0;
    int ara[size],i;
    for(i=0;i<size;i++)
    {
        scanf("%d",&ara[i]);
    }
    for(i=0;i<size;i++)
    {
        if(ara[i]>80)
        {
            a++;
        }
        if(ara[i]>60)
        {
            b++;
        }
        if(ara[i]>40)
        {
            c++;
        }
        if(ara[i]<=40)
        {
            d++;
        }
        if(ara[i]>=81&&ara[i]<=100)
        {
            e++;
        }
        if(ara[i]>=61&&ara[i]<=80)
        {
            f++;
        }
       if(ara[i]>=41&&ara[i]<=60)
        {
            g++;
        }
        if(ara[i]>=0&&ara[i]>=40)
        {
            h++;
        }
    }
    printf("The number of student who have obtained 80 marks: %d\n",a);
    printf("The number of student who have obtained 60 marks: %d\n",b);
    printf("The number of student who have obtained 40 marks: %d\n",c);
    printf("The number of student who have obtained 40 or less marks: %d\n",d);
    printf("The number of student who have obtained 81 to 100 marks: %d\n",e);
    printf("The number of student who have obtained 61 t0 80 marks: %d\n",f);
    printf("The number of student who have obtained 41 to 60 marks: %d\n",g);
    printf("The number of student who have obtained 0 t0 40 marks: %d\n",h);

    return 0;


}
