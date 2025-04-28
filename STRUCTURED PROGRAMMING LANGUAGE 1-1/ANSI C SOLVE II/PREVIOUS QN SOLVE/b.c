#include <stdio.h>
int main()
{
    int i = 0;
    loop: // label for the loop
    if (i != 30)
    {
        i += 2;
        goto loop; // jump to the beginning of the loop
    }
    if (i == 100)
        goto end; // jump to the end of the program
    printf("%d ", i);
    i++;
    goto loop; // jump to the beginning of the loop
    end: // label for the end of the program
    return 0;
}
