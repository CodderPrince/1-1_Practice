#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    getchar();
    while(t--)
        {

    char s[100];
  //  scanf("%d[^\n]",s);
    gets(s);
    char* token=strtok(s,",!;?. ");
      int count=0;
    while(token!=NULL)
    {
        count++;
        token=strtok(NULL,",!;?. ");
    }
    printf("count = %d",count);
    printf("\n");
        }

}
