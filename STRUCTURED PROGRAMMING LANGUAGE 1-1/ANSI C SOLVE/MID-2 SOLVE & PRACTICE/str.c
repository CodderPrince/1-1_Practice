#include <stdio.h>
#include<string.h>

int main() {
  char s1[] = "ANIL KUMAR GUPTA";
  char s2[] = "KUMAR";
  char *ptr;

  ptr = strstr(s1, s2);
  printf("%s\n", ptr);

  return 0;
}
