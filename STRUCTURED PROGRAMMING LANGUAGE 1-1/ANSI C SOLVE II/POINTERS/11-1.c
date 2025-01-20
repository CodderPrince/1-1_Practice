/*  old 11.1 new 12.1 [PRINCE]
    Write a program using pointers to read in an array of integers and
    print its elements in reverse order.
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
    int *ptr = arr; // here *ptr value is array 0 index address

    printf("Enter the array elements: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", ptr);
        ptr++; // increment array index address
    }

    printf("\nOriginal array: ");
    printArray(arr, size);

    printf("\nReversed array: ");
    reverseArray(arr, size);

    return 0;
}

void printArray(int *receive, int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        printf("%d ", receive[i]);
    }
    printf("\n");
}

void reverseArray(int *reverse, int size)
{
    int i;
    for (i = size - 1; i >= 0; i--)
    {
        printf("%d ", *(reverse + i)); // print last index to first
    }
    printf("\n\n");
}
