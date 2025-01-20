#include <stdio.h>
#include <string.h>
int main()
{
    // Declare two char arrays and initialize them
    char a[100] = "Hello", b[] = "Its Me";
    // Declare two char pointers
    char *p, *q;
    // Get the lengths of the char arrays
    int l = strlen(a);
    int m = strlen(b);
    // Assign the addresses of the char arrays to the pointers
    p = a;
    q = b;
    // Move the pointers to the end of the char arrays
    p += l;
    q += m - l;
    // Copy the second half of b to the end of a using pointer arithmetic
    do
    {
        *p++ = *q--;
    } while (m--);
    // Add a null terminator to the end of a
    *p = '\0';
    // Print the concatenated string and the second half of b
    //printf("%s\t%s\n", a, q);
    cout<<a<<endl;
    cout<<a<<endl;
    cout<<a<<endl;
    return 0;
}
