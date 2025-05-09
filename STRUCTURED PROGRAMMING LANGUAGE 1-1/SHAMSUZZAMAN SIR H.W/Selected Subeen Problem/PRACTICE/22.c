#include <stdio.h>

int main() 
{
  int start, end, count = 0;

  //printf("Enter the start and end of the range: ");
  scanf("%d %d", &start, &end);

  for (int i = start; i <= end; i++) {
    int isPrime = 1;

    for (int j = 2; j * j <= i; j++) {
      if (i % j == 0) {
        isPrime = 0;
        break;
      }
    }

    if (isPrime) {
      count++;
    }
  }

  printf("%d\n", count);

  return 0;
}
