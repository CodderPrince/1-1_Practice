#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int i,n;
        scanf("%d",&n);
        char str[100];
        for(i=0 ; i<n ; i++)
        {
            scanf("%s",&str[i]);
        }
        int j,r;
        char temp[100];
        for(i=0 ; i<n ; i++);
        {
            for(j=i+1 ; j<n ; j++)
            {
                if(strcmp(str[i],str[j])>0);
                {
                    strcpy(temp,str[i]);
                    strcpy(str[i],str[j]);
                    strcpy(str[j],temp);
                }
            }
        }
      for(i=0 ; i<n ; i++)
      {
          printf("%s",str[i]);
      }
    }
    return 0;
}
