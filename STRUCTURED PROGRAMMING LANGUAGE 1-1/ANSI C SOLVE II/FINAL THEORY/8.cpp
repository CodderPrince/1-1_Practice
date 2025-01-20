#include <iostream>

using namespace std;

void printArray(int *array, int size)
{
    
    cout<<"After modification: ";
    for (int i = 0; i < size; i++)
    {
        cout << array[i] * 2 << " ";
    }
    cout << endl;
}

int main()
{
    int array[] = {1, 2, 3, 4, 5};
    int size = sizeof(array) / sizeof(array[0]);
    cout<<"Before modification: ";
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
    printArray(array, size); // Pass array by pointer

    cout<<"After modification: ";
    for (int i = 0; i < size; i++)
    {
        cout << array[i] * 2 << " ";
    }
    cout << endl;

    return 0;
}