#include<stdio.h>
#include<string.h>
int main()
{
    char str1[101],str2[2];
    int i,j,count=0;
    scanf("%s",str1);
    scanf("%s",str2);

    for(i=0; i<strlen(str1); i++)
    {
        if(str1[i]==str2[0])
        {
            count++;
        }
    }
    printf("Occurence '%c' is '%s' is = %d\n ",str2[0],str1,count);
}