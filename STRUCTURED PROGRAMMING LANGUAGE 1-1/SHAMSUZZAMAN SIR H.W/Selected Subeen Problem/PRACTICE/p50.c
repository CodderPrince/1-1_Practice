#include <stdio.h>
#include <string.h>

int main()
{
    int T;
    char input[30], output[30];
    scanf("%d", &T);
    while (T--)
    {
        scanf("%s", input);
        int l = strlen(input);
        for (int i = 0; i < l; i++)
        {
            if (input[i] == 'L')
            {
                output[i] = input[i - 1];
            }
            else if (input[i] == 'R')
            {
                output[i] = input[i + 1];
            }
            else
            {
                output[i] = input[i];
            }
        }
        output[l] = '\0'; // Add null terminator to the end of output
        printf("%s\n", output);
    }
    return 0;
}
