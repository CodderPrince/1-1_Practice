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
        char str[101],re[101];
        gets(str);
        for(i=0; i<strlen(str); i++)
        {
            if(str[i]!=' ')
            {
                re[j]=str[i];
            }
            else if(j>0)
            {
                re[j]='\0';
                reverse(re);
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
            re[j]='\0';
            reverse(re);
        }
        printf("\n");
    }
    return 0;
}

int reverse (char receiver_re[])
{
    int k;
    for(k=strlen(receiver_re)-1; k>=0; k--)
    {
        printf("%c",receiver_re[k]);
    }
}