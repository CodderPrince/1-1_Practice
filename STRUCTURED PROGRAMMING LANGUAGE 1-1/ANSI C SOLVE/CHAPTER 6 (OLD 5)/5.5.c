#include<stdio.h>
int main()
{
    int math,phy,che,threee,mp;
    printf("Enter marks in physics: ");
    scanf("%d",&phy);
    printf("Enter marks in math: ");
    scanf("%d",&math);
    printf("Enter marks in chemistry: ");
    scanf("%d",&che);
    threee=math+phy+che;
    mp=math+phy;
    if(math>=60&&phy>=50&&che>=40&&threee>=200||(mp)>=150)
    {
        printf("Allowed\n");
    }
    else
    {
        printf("Not allowed\n");
    }

    return 0;

}
