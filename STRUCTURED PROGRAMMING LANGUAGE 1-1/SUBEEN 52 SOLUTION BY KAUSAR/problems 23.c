#include<stdio.h>
int main()
{
    int t;
   scanf("%d",&t);
   while(t--)
    {
        char s[26];
      scanf("%s",&s);
        for(int i=0 ; s[i]!='\0' ; i++)
        {
            if(s[i]>='A' && s[i]<='z')
            {
                printf("%d", s[i]-64);


            }

        }
         printf("\n");
    }
    return 0;
}
