#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        char str[n][10001];
        int i,j;
        for(i=0; i<n; i++)
        {
            scanf("%s",str[i]);
        }

        for(i=0; i<n; i++)
        {
            for(j=i+1; j<n; j++)
            {
                char temp[10001];
                if(strcmp(str[i],str[j])>0)
                {
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