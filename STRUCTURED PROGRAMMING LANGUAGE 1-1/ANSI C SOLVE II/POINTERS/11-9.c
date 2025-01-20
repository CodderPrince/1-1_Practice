/*  old 11.9 new 12.9 [PRINCE]
    Write a function (using a pointer parameter)
    that reverses the elements of a given array
*/

#include <stdio.h>

void printArray(int *arr, int size);
void reverseArray(int *arr, int size);

int main()
{
    int size;
    printf("\nEnter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    int *ptr = arr;

    printf("\nEnter the array elements: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", ptr);
        ptr++;
    }

    printf("\nReversed array: ");
    reverseArray(arr, size);

    return 0;
}

void reverseArray(int *reverse, int size)
{
    int i;
    for (i = size - 1; i >= 0; i--)
    {
        printf("%d ", *(reverse + i));
    }
    printf("\n\n");
}
