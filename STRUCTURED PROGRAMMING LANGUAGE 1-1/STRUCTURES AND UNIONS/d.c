#include <stdio.h>

// Function using int*[]
void search_a(int *m[], int x)
{
    printf("Value using int*[]: %d\n", *m[0]);
}

// Function using int**
void search_b(int **m, int x)
{
    printf("Value using int**: %d\n", **m);
}

int main()
{
    int num = 42;

    // Example for int*[]
    int arr1[] = {num};
    int *m1[] = {arr1};
    search_a(m1, num);

    // Example for int**
    int *ptr = &num;
    int **m2 = &ptr;
    search_b(m2, num);

    return 0;
}
