#include<stdio.h>
#include<string.h>
int main()
{
    char str[101];
    int i,j,len=0;
    scanf("%s",&str);
    printf("%s\n",str);
    for(i=0; i<strlen(str); i++)
    {
        for(j=i+1; j<strlen(str); j++)
        {
            printf("%c",str[j]);
        }
        printf("\n");
    }
    return 0;
}