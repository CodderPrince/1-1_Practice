#include <stdio.h>

int main()
{
    FILE *file = fopen("example.txt", "r+");

    if (file == NULL)
    {
        perror("Error opening the file");
        return 1;
    }

    // Read from the file
    fseek(file, 0, SEEK_SET); // Move to the beginning of the file
    char buffer[100];
    fgets(buffer, sizeof(buffer), file);
    printf("Read from file: %s", buffer);

    // Get the current position
    long currentPosition = ftell(file);

    // Write to the file at the current position
    fseek(file, currentPosition, SEEK_SET);
    fputs("Appending this line.", file);

    fclose(file);

    return 0;
}
