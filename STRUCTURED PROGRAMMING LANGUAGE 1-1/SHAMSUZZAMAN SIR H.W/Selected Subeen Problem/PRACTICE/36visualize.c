#include<stdio.h>
#include<string.h>
int main()
{
    int t=1;
   // scanf("%d",&t);
    while(t--)
    {
        int n=3;
        //scanf("%d",&n);
        char str[3][6]={"cat", "bat","rat"};
        int i,j;
        for(i=0; i<n; i++)
        {
             //scanf("%s",str[i]);
        }
       
       for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(strcmp(str[i],str[j])>0)
            {
                char temp [6];
                strcpy(temp,str[i]);
                strcpy(str[i],str[j]);
                strcpy(str[j],temp);
            }
        }
    }

    for(i=0; i<n; i++)
    {
        printf("%s\n",str[i]);
    }
    }

    return 0;
}