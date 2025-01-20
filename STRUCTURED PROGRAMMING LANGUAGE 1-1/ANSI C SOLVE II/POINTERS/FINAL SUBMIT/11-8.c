/*old 11.8 new 12.8 [PRINCE]
Given an array of sorted list of using the method of binary integer numbers,
write a function to search for a particular item, search.
And also show how this function may be used in a program.
with the array's middle element. Since the values greater than the middle
Use pointers and pointer arithmetic. (Hint: In binary search,
the target value is compared table is sorted, if the required value is smaller,
we know that all element can be ignored. That is, in one attempt,
we eliminate one half the list. This search can be applied recursively
till the target value is found.)
*/

#include <stdio.h>

int *binarySearch(int *arr, int size, int target);

int main()
{
    int size;
    printf("\nEnter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    printf("\nEnter the sorted elements of the array: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    int target;
    printf("\nEnter the value to search: ");
    scanf("%d", &target);

    int *result = binarySearch(arr, size, target);

    if (result != NULL)
    {
        printf("\nTarget value found at index %ld.\n\n", result - arr);
    }
    else
    {
        printf("\nTarget value not found in the array.\n\n");
    }

    return 0;
}

int *binarySearch(int *arr, int size, int target)
{
    int *left = arr;
    int *right = arr + size - 1;

    while (left <= right)
    {
        int *mid = left + (right - left) / 2;

        if (*mid == target)
        {
            return mid;
        }

        if (*mid < target)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    return NULL;
}