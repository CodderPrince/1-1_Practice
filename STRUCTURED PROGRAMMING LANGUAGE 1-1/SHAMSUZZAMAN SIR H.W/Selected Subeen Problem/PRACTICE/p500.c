#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    getchar();
    while(t--)
    {
        char input[30],output[30];
        int i;
        gets(input);
        for(i=0; i<strlen(input); i++)
        {
            if(input[i]== 'L')
            {
                output[i]=input[i-1];
            }
            else if(input[i]== 'R')
            {
                output[i]= input[i+1];
            }
            else
            {
                output[i]=input[i];
            }            
        }
        output[strlen(input)]='\0';
        printf("%s\n",output);
    }
        
}
