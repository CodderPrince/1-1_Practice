#include<stdio.h>
#include<string.h>

int main()
{
    int t;
    scanf("%d",&t);
    getchar();
    while(t--)
    {
        int i;
        char str[101];
        gets(str);
        for(i=0; i<strlen(str); i++)
        {
            if(str[i]=='L')
            {
                str[i] = str[i-1];
            }

            else if(str[i]=='R')
            {
                str[i] = str[i+1];
            }

            else
            {
                str[i]=str[i];
            }
        }

        str[strlen(str)]='\0';
        for(i=0; i<strlen(str);i++)
        {
            printf("%c",str[i]);
        }
        printf("\n");
    }

    return 0; 
}