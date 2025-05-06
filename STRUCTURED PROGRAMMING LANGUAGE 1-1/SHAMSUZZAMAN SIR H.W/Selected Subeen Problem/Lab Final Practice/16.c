#include<stdio.h>
#include<string.h>

int main()
{
    int t;
    scanf("%d",&t);
    getchar();
    while(t--)
    {
        char str1[101],hw[101];
        gets(str1);
        int i,j=0;
        for(i=0; i<strlen(str1); i++)
        {
            if(str1[i] !=' ')
            {
                hw[j] = str1[i];
                j++;
            }
            else if(j>0)
            {
                hw[j] = '\0';
                strrev(hw);
                printf("%s ",hw);
                j=0;
            }
            else
            {
                printf(" ");
            }
        }
        if(j>0)
        {
            hw[j] ='\0';
            strrev(hw);
            printf("%s ",hw);
        }
        printf("\n");
    }

    return 0;
}