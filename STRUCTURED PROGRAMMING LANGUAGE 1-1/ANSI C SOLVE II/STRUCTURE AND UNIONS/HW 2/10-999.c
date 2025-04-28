#include <stdio.h>

struct Vector
{
    int size;
    int elements[100];
};

void displayVector(struct Vector v);

struct Vector modifyVector(struct Vector v, int index, int newValue)
{
    if (index >= 0 && index < v.size)
    {
        v.elements[index] = newValue;
    }
    else
    {
        printf("Invalid index for modification!\n");
    }
    return v;
}

int main()
{
    struct Vector v;
    int size;
    printf("Enter the vector size: ");
    scanf("%d", &v.size);
    printf("Enter the elements: ");
    int i;
    for (i = 0; i < v.size; i++)
    {
        scanf("%d", &v.elements[i]);
    }

    printf("Original Vector: ");
    displayVector(v);

    int index, newValue;
    printf("Enter the index you want to modify: ");
    scanf("%d", &index);
    printf("Enter the new value: ");
    scanf("%d", &newValue);

    modify = modifyVector(v, index, newValue);

    printf("Modified Vector: ");
    displayVector(modify);

    return 0;
}

void displayVector(struct Vector v)
{
    int i;
    printf("( ");
    for (i = 0; i < v.size; i++)
    {
        printf("%d", v.elements[i]);
        if (i < v.size - 1)
        {
            printf(" ");
        }
    }
    printf(" )\n");
}
