#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d", &t);
    getchar();
    while(t--)
   {
    char str[10001];
    char rev[10001];
    int i,j=0,len;
    gets(str);

    printf("%s\n", strrev(str));
  }
    return 0;
}
/*ekhane just bola hoyese ekta simple word ke just reverse korte hobe ejonno ekhane
string reverse function ta use korlei hobe karon ei function tar kaj ei holo ekta 
word ke puropuri reverse kore print kora*/