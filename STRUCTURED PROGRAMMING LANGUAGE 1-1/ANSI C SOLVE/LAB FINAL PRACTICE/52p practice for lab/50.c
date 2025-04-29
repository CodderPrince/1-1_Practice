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
       int i;
       for(i=0; i<strlen(str1); i++)
       {
            if(str1[i]=='L')
            {
                str1[i]=str1[i-1];
            }
            else if(str1[i]=='R')
            {
                str1[i]=str1[i+1];
            }
            else
            {
                str1[i]=str1[i];
            }
       }
       for(i=0; i<strlen(str1); i++)
       {
        printf("%c",str1[i]);
       }
       printf("\n");
    }

    return 0;
}