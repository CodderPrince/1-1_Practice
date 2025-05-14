// Recommended use of parentheses in macro definition
#include <stdio.h>
#define SQUARE(x) ((x * x))

int main()
{
    int result = SQUARE(2 + 3); // Without parentheses, this would be 2 + 3 * 2 + 3
    // With parentheses: result is 25 (2 + 3 squared)
    printf("%d\n", result);
    return 0;
}
