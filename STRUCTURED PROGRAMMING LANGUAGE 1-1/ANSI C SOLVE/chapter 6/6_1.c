#include <stdio.h>

int main() 
{
    int number, reverse = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &number);

    while (number > 0) 
    {
        remainder = number % 10;
        reverse = reverse * 10 + remainder;
        number = number/10;
    }

    printf("The reversed number is: %d\n", reverse);

    return 0;
}