//PRINCE_14

#include <stdio.h>

int main() 
{
    int count = 1;

    for ( ; ; ) 
    {
        printf("Iteration: %d\n", count);
        count++;

        if (count > 5) 
        {
            break;
        }
    }
    printf("Loop finished!\n");

    return 0;
}
