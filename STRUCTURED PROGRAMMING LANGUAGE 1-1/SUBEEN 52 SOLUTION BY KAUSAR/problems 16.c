#include<stdio.h>
#include<string.h>
int main()
{

  //  int t;
   //scanf("%d",&t);

  // while(t--)
       //{

        int i,j=0,len=0;
         char str[1002] ,  re[1002],ch;
        scanf("%[^\n]",str);
        len=strlen(str);
        for(i=0 ; i<len ; i++)
        {
            if(str[i]!=' ')
            {
                re[j]=str[i];
                j++;
            }
            else if(j>0)
            {
                re[j]='\0';
                kausar(re);
                j=0;
                printf(" ");
            }
            else
            {
              printf(" ");
            }
        }
        if(j>0)
        {
            re[j]='\0';
            kausar(re);
        }
        printf("\n");
   // }
    return 0;
}
void kausar( char r[])
{
  int k,len=0;
  len=strlen(r);
  for(k=len-1 ; k>=0 ; k--)
  {
      printf("%c",r[k]);
  }

}
