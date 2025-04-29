#include <stdio.h>

int main() 
{
    float total = 0.0; // Initialize total to 0
    float value;

    do {
        scanf("%f", &value);
        if (value != 999) 
        {
            total += value; // Add value to total
        }
    } while (value != 999);

    printf("%f", total);

    return 0;
}
