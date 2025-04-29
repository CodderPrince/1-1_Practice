#include <stdio.h>

#define BASE_COST 250
#define PER_CALL_COST 1.25
#define FREE_CALLS 100

int main()
{
    int customer_code, calls_made;
    float bill;
    
    printf("Enter the customer code: ");
    scanf("%d", &customer_code);
    
    printf("Enter the number of calls made: ");
    scanf("%d", &calls_made);
    
    /* Calculate the bill for the customer. */
    if (calls_made <= FREE_CALLS) {
        bill = BASE_COST;
    } else {
        bill = BASE_COST + PER_CALL_COST * (calls_made - FREE_CALLS);
    }
    
    /* Print the bill for the customer. */
    printf("Customer code: %d\n", customer_code);
    printf("Number of calls made: %d\n", calls_made);
    printf("Bill amount: %.2f\n", bill);
    
    return 0;
}