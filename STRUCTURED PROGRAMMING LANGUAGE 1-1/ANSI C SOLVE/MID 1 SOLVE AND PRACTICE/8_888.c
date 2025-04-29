#include<stdio.h>
#include<string.h>
int main()
{
    char str1[101],str2[101];
    int i,len=0;
    scanf("%s",str1);
    len= strlen(str1);
    for(i=0; i<len; i++)
    {
        str2[i]=str1[len-1-i];
    }
    str2[i]='\0';
    
    if(strcmp(str1,str2)==0)
    {
        printf("The word is palindrome!");
    }
    else
    {
        printf("The word is not palindrome!");
    }
}