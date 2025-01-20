// With the help of an example, explain the relationship between aray and pointer.

/*
An array is a collection of same data type, stored in contiguous memory location.
A pointer is variable that stores an address of another variable.
Array and pointer both are related to each other.

When we declare an array then array names represents the first elements of the array.
We can easily access the array elements by using pointer variables.
Here is an example given below:

*/
#include <stdio.h>

int main()
{
    int arr[4] = {23, 34, 45, 66};
    int *ptr = arr;
    //printf("%d\n",ptr);
    for (int i = 0; i < 4; i++)
    {
        printf("Value of x[%d] is: %d\n", i, *(ptr + i));
    }

    return 0;
}

/*
*ptr = arr this line represents the array's first element which is 23.
We can also print arrays element by using pointer variables.
Arrays element we can access arr[0],arr[1].....arr[n]
We can also access this value by using pointer.
arr[0] is equivalent to *(ptr + i) when i = 0

So, we can say that array and pointer's both are useful term in programming and
we can easily access array's element by using pointer.
*/