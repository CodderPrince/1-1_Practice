// multiplication two matrix using pointers

#include <iostream>
#include <iomanip>
using namespace std;

#define ll long long
#define nl endl

const ll ROW1 = 2;
const ll COL1 = 3;
const ll ROW2 = 3;
const ll COL2 = 2;

ll mat1[ROW1][COL1] = {{1, 2, 3}, {4, 5, 6}};
ll mat2[ROW2][COL2] = {{6, 7}, {7, 4}, {2, 8}};
ll multiplyMat[ROW1][COL2];

// Function to multiply two matrices using pointers
void multiplyMatrices(const ll *mat1, const ll *mat2, ll *result)
{
    for (ll i = 0; i < ROW1; i++)
    {
        for (ll j = 0; j < COL2; j++)
        {
            *(result + i * COL2 + j) = 0; // Initialize result element to 0

            for (ll k = 0; k < COL1; k++)
            {
                *(result + i * COL2 + j) += *(mat1 + i * COL1 + k) * *(mat2 + k * COL2 + j);
            }
        }
    }
}

int main()
{
    // Call the function to multiply matrices
    multiplyMatrices(&mat1[0][0], &mat2[0][0], &multiplyMat[0][0]);

    // Display the result
    for (ll i = 0; i < ROW1; i++)
    {
        for (ll j = 0; j < COL2; j++)
        {
            cout << setw(5) << multiplyMat[i][j];
        }
        cout << nl;
    }

    return 0;
}
