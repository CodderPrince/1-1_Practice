#include <bits/stdc++.h>
using namespace std;

const int rows = 2;
const int cols = 3;

int mat1[rows][cols] =
    {
        {1, 2, 3},
        {4, 5, 6}
    };

int mat2[rows][cols] =
    {
        {3, 4, 5},
        {1, 2, 3}
    };

int resMat[rows][cols];

void addMatrices(int *mat1, int *mat2);

int main()
{
    addMatrices(*mat1, *mat2);

    cout << "\nAfter adding two matrices:\n";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << setw(5) << resMat[i][j];
        }
        cout << endl;
    }
    cout << endl;

    return 0;
}

void addMatrices(int *mat1, int *mat2)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            resMat[i][j] = *(mat1 + i * cols + j) + *(mat2 + i * cols + j);
        }
    }
}
