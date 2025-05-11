#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
    int t;
    scanf("%d",&t);
    getchar();
    while(t--)
    {
        char str1[101],str2[101];
        gets(str1);
        strcpy(str2,str1);
        strrev(str2);
        if(strcmp(str1,str2)==0)
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