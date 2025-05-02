#include <stdio.h>

int main() {
  int m[2];
  int *p = m;
  m[0] = 100;
  m[1] = 200;
  printf("%d %d\n", *p++, *p);
  return 0;
}
