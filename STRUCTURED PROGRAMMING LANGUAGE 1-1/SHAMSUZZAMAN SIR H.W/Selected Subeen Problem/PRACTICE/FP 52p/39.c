#include<stdio.h>
#include<string.h>

int main()
{
    int t;
    scanf("%d",&t);
    getchar();
    while(t--)
    {
        char str[101],str2[101];
        gets(str);
        strcpy(str2,str);
        strrev(str2);
        if(strcmp(str,str2)==0)
        {
            printf("Yes! It is palindrome!\n");
        }
        else
        {
            printf("Sorry! It is not palindrome!\n");
        }
    }

    return 0;
}