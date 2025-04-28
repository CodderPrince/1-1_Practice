#include <stdio.h>

struct Vector
{
    int size;
    int elements[100];
};

struct Vector createVector(int size, int values[])
{
    struct Vector v;
    v.size = size;
    for (int i = 0; i < size; i++)
    {
        v.elements[i] = values[i];
    }
    return v;
}

void displayVector(struct Vector v)
{
    printf("(");
    for (int i = 0; i < v.size; i++)
    {
        printf("%d", v.elements[i]);
        if (i < v.size - 1)
        {
            printf(", ");
        }
    }
    printf(")\n");
}

void modifyElement(struct Vector *v, int index, int newValue)
{
    if (index >= 0 && index < v->size)
    {
        v->elements[index] = newValue;
    }
    else
    {
        printf("Invalid index for modification\n");
    }
}

void multiplyByScalar(struct Vector *v, int scalar)
{
    for (int i = 0; i < v->size; i++)
    {
        v->elements[i] *= scalar;
    }
}



int main()
{
    int size;
    printf("Enter the size of the vector: ");
    scanf("%d", &size);

    int values[size];
    printf("Enter the elements of the vector: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &values[i]);
    }

    struct Vector myVector = createVector(size, values); 

    printf("Original vector: ");
    displayVector(myVector);

    int index, newValue;
    printf("Enter the index to modify and the new value: ");
    scanf("%d %d", &index, &newValue);
    modifyElement(&myVector, index, newValue);

    printf("Modified vector: ");
    displayVector(myVector);

    int scalar;
    printf("Enter a scalar value to multiply the vector: ");
    scanf("%d", &scalar);
    multiplyByScalar(&myVector, scalar);

    printf("Multiplied vector: ");
    displayVector(myVector);

    return 0;
}
