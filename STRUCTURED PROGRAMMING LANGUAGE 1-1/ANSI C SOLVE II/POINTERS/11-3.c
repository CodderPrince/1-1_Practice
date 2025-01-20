/*old 11.3 new 12.3 [PRINCE]
Write a function that receives a sorted array of integers and an integer value, and inserts the
value in its correct place.
*/

#include <stdio.h>

void insertValue(int arr[], int size, int value);

int main()
{
    int size;
    printf("\nEnter the size of the array: ");
    scanf("%d", &size);

    int arr[size], i;
    printf("Enter the sorted elements of the array: ");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    int value;
    printf("Enter the value to insert: ");
    scanf("%d", &value);

    insertValue(arr, size, value);

    printf("Array after inserting the value: ");
    for (i = 0; i <= size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n\n");

    return 0;
}

void insertValue(int arr[], int size, int value)
{
    int i, j;

    for (i = 0; i < size; i++)
    {
        if (arr[i] > value)
        {
            break;
        }
    }

    for (j = size - 1; j >= i; j--)
    {
        arr[j + 1] = arr[j];
    }

    arr[i] = value;
}
