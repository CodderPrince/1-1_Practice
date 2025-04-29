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
    for (int i = 0; i < NUM_GIRLS; i++) {
        printf("Enter sales data for girl %d (separated by spaces): ", i+1);
        scanf("%d %d %d", &sales[i][0], &sales[i][1], &sales[i][2]);
    }

    // Compute total sales by each girl
    for (int i = 0; i < NUM_GIRLS; i++) 
    {
        for (int j = 0; j < NUM_ITEMS; j++) 
        {
            girl_totals[i] = girl_totals[i] + sales[i][j];
        }
        printf("Total sales for girl %d: %d\n", i+1, girl_totals[i]);
    }

    // Compute total sales of each item
    for (int i = 0; i < NUM_ITEMS; i++) {
        for (int j = 0; j < NUM_GIRLS; j++) {
            item_totals[i] = item_totals[i] + sales[j][i];
        }
       printf("Total sales of item %d: %d\n", i+1, item_totals[i]);
    }

    // Compute grand total sales
    for (int i = 0; i < NUM_GIRLS; i++) {
        for (int j = 0; j < NUM_ITEMS; j++) {
            grand_total = grand_total  + sales[i][j];
        }
    }
    printf("Grand total sales of all items by all girls: %d\n", grand_total);

    return 0;
}