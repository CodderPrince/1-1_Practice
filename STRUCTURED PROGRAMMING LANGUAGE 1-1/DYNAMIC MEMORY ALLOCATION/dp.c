#include <stdio.h>
#include <stdlib.h>

int main()
{
    // declare a pointer to store the address of the allocated memory
    int *ptr;

    // allocate memory for 10 integers using malloc
    ptr = (int *)malloc(10 * sizeof(int));

    // check if the memory allocation was successful
    if (ptr == NULL)
    {
        printf("Memory allocation failed.\n");
        exit(1);
    }

    // assign values to the allocated memory
    for (int i = 0; i < 10; i++)
    {
        ptr[i] = i + 1;
    }

    // print the values stored in the allocated memory
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", ptr[i]);
    }
    printf("\n");

    // free the allocated memory
    free(ptr);

    return 0;
}
