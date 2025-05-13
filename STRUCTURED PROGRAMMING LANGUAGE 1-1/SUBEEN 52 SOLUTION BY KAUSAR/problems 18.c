 #include<stdio.h>
 #include<string.h>
 int main()
 {
    char s[1002];
    int i,len=0,t;
   // scanf("%d",&t);
   // getchar();
   // while(t--)
    //{
        scanf("%[^\n]",s);
      // gets(s);
        len=strlen(s);
        for(i=0 ; i<len ; i++)
        {
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
            {
                 printf("%c",s[i]);
            }
        }
        printf("\n");
        for( i=0 ; i<len ; i++)
        {
            if(s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u' && s[i]!=' ')
            {
               printf("%c",s[i]);
            }
        }
   // }
    return 0;
 }
