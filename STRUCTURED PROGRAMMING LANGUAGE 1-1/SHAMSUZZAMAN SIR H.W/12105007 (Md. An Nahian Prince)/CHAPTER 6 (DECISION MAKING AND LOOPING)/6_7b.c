#include <stdio.h>

int main() 
{
    int row,col,space;

    for (int row = 1; row <= 5; row++) 
    {
        for (int space = 1; space < row; space++) 
        {
            printf(" ");
        }
        for (int col = 1; col <= 6 - row; col++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
