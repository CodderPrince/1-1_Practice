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
        gets(str);
        int i;
        for(i=0; i<strlen(str); i++)
        {
            if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
            {
                printf("%c",str[i]);
            }
        }
        printf("\n");
        for(i=0; i<strlen(str); i++)
        {
            if(str[i]!='a' && str[i]!='e' && str[i]!='i' && str[i]!='o' && str[i]!='u' && str[i] !=' ')
            {
                printf("%c",str[i]);
            }
        }
        printf("\n");
    }

    return 0;
}
