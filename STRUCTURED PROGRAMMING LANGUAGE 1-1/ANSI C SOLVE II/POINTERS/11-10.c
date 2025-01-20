/*old 11.10 new 12.10 [PRINCE]
Write a function (using pointer parameters) that compares two integer arrays
to see whether they are identical. The function returns 1 if they are identical,
0 otherwise.

solve in c
*/

#include <stdio.h>

int check(int *arr1, int *arr2, int size);

int main()
{
    int size;
    printf("\nEnter the size of the arrays: ");
    scanf("%d", &size);

    int arr1[size];
    printf("\nEnter the elements of the first array: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr1[i]);
    }

    int arr2[size];
    printf("\nEnter the elements of the second array: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr2[i]);
    }

    int result = check(arr1, arr2, size);

    if (result)
    {
        printf("\nArrays are identical.\n\n");
    }
    else
    {
        printf("\nArrays are not identical.\n\n");
    }

    return 0;
}

int check(int *arr1, int *arr2, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (*(arr1 + i) != *(arr2 + i))
        {
            return 0;
        }
    }
    return 1;
}