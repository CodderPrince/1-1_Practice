#include<stdio.h>
#include<string.h>

int main()
{
    int t;
    scanf("%d",&t);
    getchar();
    while(t--)
    {
        char str[101];
        int i;
        gets(str);
        for(i=0; i<strlen(str); i++)
        {
           if(str[i]>='A' && str[i]<='Z')
            {
                printf("%d",str[i]-64);
            }
        }
        printf("\n");
    }

    return 0;
}