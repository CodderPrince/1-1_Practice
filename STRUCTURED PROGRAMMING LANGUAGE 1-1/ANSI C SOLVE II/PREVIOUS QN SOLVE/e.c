#include <stdio.h>
#include <string.h>

struct soldier
{
    char *name;
    char *rank;
    int serial_number;
};

int main()
{
    struct soldier soldier1, soldier2, soldier3, *ptr;
    ptr = &soldier3;
    soldier3.name = "Mr.X";
    printf("\n%s", (*ptr).name);
    printf("\n%c", *ptr->name);
    printf("\n%c", *soldier3.name);
    printf("\n%c", *(ptr->name + 4));
    return 0;
}
