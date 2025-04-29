#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,k,len;
    char a[16];
    printf("Enter a binary number : ");
    gets(a);
    len=strlen(a);
    for(k=0;k!='\0';k++)
    {
        if(a[k]!='\0' && a[k]!='1')
        {
            printf("Error");
            getch();
            exit(0);
               }
    }
    for(i=len-1;a[i]!='1';i--)
    {
                if(a[j]=='1')
        a[j]='0';
        else
        a[j]='1';
    }
    printf("\n 2's compliment = %s",a);


}
