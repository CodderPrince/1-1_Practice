#include <stdio.h>

int main() {
    // Pointer to an array of size 5
    int arr1[5] = {10, 20, 30, 40, 50};
    int (*ptr1)[5] = &arr1;  // ptr1 points to the entire array arr1

    printf("Elements of arr1 through ptr1:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", (*ptr1)[i]);  // Access elements using (*ptr1)[index]
    }

    printf("\n");

    // Array of 5 pointers
    int arr2[5] = {60, 70, 80, 90, 100};
    int *ptr2[5];  // Array of 5 pointers

    // Assign each pointer in ptr2 to point to an element of arr2
    for (int i = 0; i < 5; i++) {
        ptr2[i] = &arr2[i];
    }

    printf("Values pointed to by ptr2:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", *ptr2[i]);  // Access values using *ptr2[index]
    }

    return 0;
}
