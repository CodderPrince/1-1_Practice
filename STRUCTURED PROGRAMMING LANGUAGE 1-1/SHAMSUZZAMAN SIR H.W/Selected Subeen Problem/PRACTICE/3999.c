#include <stdio.h>
#include <string.h>

int main() 
{
  int t;
  scanf("%d", &t);
  getchar();
  while (t--) 
  {
    char str[101];
    gets(str);
    int len = strlen(str);
    int flag = 1;
    for (int i = 0; i < len / 2; i++) 
    {
      if (str[i] != str[len - i - 1]) 
      {
        flag = 0;
        break;
      }
    }
    if (flag) 
    {
      printf("Yes, the word '%s' is palindrome!\n",str);
    } else {
      printf("No, the word '%s' is not palindrome!\n",str);
    }
  }
  return 0;
}
