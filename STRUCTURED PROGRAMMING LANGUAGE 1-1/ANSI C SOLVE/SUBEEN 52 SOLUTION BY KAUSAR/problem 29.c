#include<stdio.h>
int main()
{
    int T,i;
    scanf("%d",&T);
    for(i=0 ; i<T ; i++)
    {
        char s;
        scanf("%s",&s);
        if(s>='a' && s<='z')
        {
            printf("lowercase character\n");
        }
        else if(s>='A' && s<='Z')
        {
            printf("Uparcase character\n");
        }
        else if(s>='0' && s <='9')
        {
            printf("Numerical difgit\n");
        }
        else
        {
            printf("special character\n");
        }
    }
    return 0;
}
