/*old 11.4 new 12.4 [PRINCE]
Write a function using pointers to add two matrices and
to return the resultant matrix to the calling function.
*/

#include <stdio.h>

void addMatrices(int *mat1, int *mat2, int rows, int cols, int resMat[rows][cols]);

int main()
{

    int mat1[] = {1, 2, 3,
                  4, 5, 6};
    int mat2[] = {3, 4, 5,
                  1, 2, 3};

    int rows = 2;
    int cols = 3;

    int resMat[rows][cols];

    addMatrices(mat1, mat2, rows, cols, resMat);
    printf("\nAfter adding two matrices:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%5d", resMat[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    return 0;
}

void addMatrices(int *mat1, int *mat2, int rows, int cols, int resMat[rows][cols])
{
    int i, j;
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            resMat[i][j] = *(mat1 + i * cols + j) + *(mat2 + i * cols + j);
        }
    }
}
