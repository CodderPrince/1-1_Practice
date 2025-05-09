#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    getchar();
    while(t--)
    {
        int i,j=0;
        char str1[101],str2[102];
        gets(str1);
        for(i=0; i<strlen(str1); i++)
        {
            if(str1[i]!=' ')
            {
                str2[j]=str1[i];//this
                j++;
            }
            else if(j>0)
            {
                str2[j]='\0';
                reverse(str2);
                j=0;
                printf(" ");
            }
            else
            {
                printf(" ");
            }
        }
        if(j>0)
        {
             str2[j]='\0';//this
                reverse(str2);
        }
    printf("\n");
    }
    return 0;
}

int reverse(char reverse_str2[101])
{
    int k;
    for(k= strlen(reverse_str2)-1; k>=0; k--)
    {
        printf("%c",reverse_str2[k]);
    }
}