#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    getchar();
    while(t--)
    {
        int i,count=0;
        char str[10001], ch[2];
        gets(str);
        gets(ch);
        for(i=0; i<strlen(str); i++)
        {
            if(str[i]==ch[0])
            {
                count++;
            }
        }
        if(count>0)
        {
            printf("Occurrence of '%c' in '%s' = %d\n",ch[0],str,count);
        }
        else
        {
            printf("'%c' is not present\n",ch[0]);
        }
    }   


    return 0;
}