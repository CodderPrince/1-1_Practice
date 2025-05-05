//recursion method

#include <bits\stdc++.h>
using namespace std;

const int ROWS = 2; // Change this to the desired number of rows
const int COLS = 2; // Change this to the desired number of columns
int cost[ROWS][COLS] =
    {
        {4, 7}, // Adjust the values as per the new matrix size
        {6, 9},

};

// Recursive function to find the minimum cost to reach
// cell (m, n) from cell (0, 0)
int minCost(int row, int col)
{
    // base case: reached the destination cell
    if (row == 1 && col == 1)
    {
        return cost[row][col];
    }

    // boundary conditions: check if we are within the bounds of the matrix
    if (row >= ROWS || col >= COLS)
    {
        return INT_MAX;
    }

    // include the current cell's cost in the path and recur to find the minimum
    // of the path from the adjacent left cell and adjacent top cell.
    int x = minCost(row + 1, col); // move down
    int y = minCost(row, col + 1); // move right

    // Minimum of the two calculated costs plus the cost of the current cell
    int mn = min(x, y) + cost[row][col];
    return mn;
}

int main()
{
    cout << "The minimum cost is " << minCost(0, 0) << endl; // Start from cell (0, 0)

    return 0;
}
