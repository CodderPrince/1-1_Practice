#include <stdio.h>

int main() {
  // Declare a 2D array with 3 rows and 4 columns.
  int array[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12} };

  // Print the elements of the array.
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 4; j++) {
      printf("%d ", array[i][j]);
    }
    printf("\n");
  }

  return 0;
}
