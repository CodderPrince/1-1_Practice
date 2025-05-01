#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char input[22],output[23];
        int i,len;
        gets(input);
        len= strlen(input);
        for(i=0; i<len; i++)
        {
            if(input[i]=='L')
            {
                output[i]= input[i-1];
            }
            else if(input[i]=='R')
            {
                output[i]=input[i+1];
            }
            else
            {
                output[i]=input[i];
            }
        }
        output[len]='\0';
        printf("%s\n",output);
    }
    return 0;

}
