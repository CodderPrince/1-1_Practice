#include<stdio.h>
#include<string.h>
int main()
{
 int t,i,count=0;
 printf("Enter the test case number: ");
 scanf("%d",&t);
 getchar();
 while(t--)
 {
    char str[20],ch[2];
    pritnf("Enter the sentence: ");
    gets(str);
    printf("Enter the letter you want to search: ");
    gets(ch);
    for(i=0; i<strlen(str); i++)
    {
        if(str[i]==ch[0])
        {
            count++;
        }
    }
    printf("Occurence of '%c' is '%s' is = %d\n",ch[0],str,count);
 }   
 return 0;
}