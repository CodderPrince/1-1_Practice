#include<stdio.h>
#include<string.h>
int main()
{
    char str1[101],ch[2];
    int i,count=0;
    scanf("%s",str1);
    scanf("%s",ch);
    for(i=0; i<strlen(str1); i++)
    {
        if(str1[i]==ch[0])
        {
            count++;
        }
    }
    printf("Occurence '%c' in '%s' is = %d times\n",ch[0],str1,count);
}