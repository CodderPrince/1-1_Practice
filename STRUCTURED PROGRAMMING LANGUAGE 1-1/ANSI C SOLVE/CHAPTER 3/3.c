#include <stdio.h>
#include <string.h>

#define MAX_DIGITS 50

int main()
{
    char num_str[MAX_DIGITS];
    int len, i, j;
    
    printf("Enter an integer: ");
    scanf("%s", num_str);
    
    len = strlen(num_str);
    printf("%s\n", num_str);
    
    for (i = 0; i < len - 1; i++)
    {
        for (j = 0; j < len - i - 1; j++) 
        {
            printf("%c", num_str[j]);
        }
        printf("\n");
    }
    
    return 0;
}