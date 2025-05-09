#include<stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d",&t);
    getchar();
    while(t--)
    {
        char str[101];
        int count=0
        ,i,len=0;
        gets(str);
        len= strlen(str);
        for(i=0; i<len; i++)
        {
            if(str[i]==' ' && str[i+1]!=0)
            {
                count++;
            }
        }
        printf("%d\n",count);

    }
}