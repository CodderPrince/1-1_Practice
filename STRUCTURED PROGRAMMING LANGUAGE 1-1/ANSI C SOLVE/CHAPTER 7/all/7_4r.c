#include <stdio.h>

#define NUM_GIRLS 4
#define NUM_ITEMS 3

int main() 
{
    int sales[NUM_GIRLS][NUM_ITEMS];
    int girl_totals[NUM_GIRLS] = {0};
    int item_totals[NUM_ITEMS] = {0};
    int grand_total = 0;

    // Input sales data
    for (int row = 0; row < NUM_GIRLS; row++) 
    {
        printf("Enter sales data for girl %d (separated by spaces): ", row + 1);
        scanf("%d %d %d", &sales[row][0], &sales[row][1], &sales[row][2]);
    }

    // Compute total sales by each girl
    for (int row = 0; row < NUM_GIRLS; row++) 
    {
        for (int col = 0; col < NUM_ITEMS; col++) 
        {
            girl_totals[row] += sales[row][col];
        }
        printf("Total sales for girl %d: %d\n", row + 1, girl_totals[row]);
    }

    // Compute total sales of each item
    for (int col = 0; col < NUM_ITEMS; col++) 
    {
        for (int row = 0; row < NUM_GIRLS; row++) 
        {
            item_totals[col] += sales[row][col];
        }
        printf("Total sales of item %d: %d\n", col + 1, item_totals[col]);
    }

    // Compute grand total sales
    for (int row = 0; row < NUM_GIRLS; row++) 
    {
        for (int col = 0; col < NUM_ITEMS; col++) 
        {
            grand_total += sales[row][col];
        }
    }
    printf("Grand total sales of all items by all girls: %d\n", grand_total);

    return 0;
}
