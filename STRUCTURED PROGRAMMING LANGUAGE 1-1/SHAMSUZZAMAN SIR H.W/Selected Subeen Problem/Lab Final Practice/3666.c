#include<stdio.h>
#include<string.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n1;
        scanf("%d",&n1);
        char str[n1][101];
        int i;
        for(i=0; i<n1; i++)
        {
            scanf("%s",str[i]);
        }
        int j;
        for(i=0; i<n1; i++)
        {
            for(j=i+1; j<n1; j++)
            {
                if(strcmp(str[i],str[j])>0)
                {
                    char temp[101];
                    strcpy(temp, str[i]);
                    strcpy(str[i],str[j]);
                    strcpy(str[j],temp);
                }
            }
        }
        for(i=0;i<n1; i++)
        {
            printf("%s\n",str[i]);
        }
    }

    return 0;
}