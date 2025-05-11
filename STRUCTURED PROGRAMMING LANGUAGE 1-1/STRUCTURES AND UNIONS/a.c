/*#include <stdio.h>

int main()
{
    union
    {
        int a;
        float b;
        double c;
    } x;

    printf("%d\n", sizeof(x));

    x.a = 10;
    printf("%d %f %f\n", x.a, x.b, x.c);

    x.c = 1.23;
    printf("%d %f %f\n", x.a, x.b, x.c);

    return 0;
}
*/

/*#include<stdio.h>
int main()
{
    int number=173;
    while(number>0)
    {
        number %=10;
        printf("Modulus: %d\n",number);
        number/=10;
    }
}

#include <stdio.h>

int test(int number)
{
    int m, n = 0;
    while (number)
    {
        m = number % 10;
        if (m % 2)
        {
            n = n +1;
        }
        number = number / 10;
    }
    return n;
}

int main()
{
    int x = test(135);
    int y = test(246);

    printf("Value of x: %d\n", x);
    printf("Value of y: %d\n", y);

    return 0;
}
*/
#include <stdio.h>

// Global variable
int globalVar = 10;

// Function taking a global variable as a parameter
void modifyGlobal(int x)
{
    x += 5; // Modifying the local parameter, not the global variable
    printf("Inside function: %d\n", x);
}

int main()
{
    printf("Before function call: %d\n", globalVar);

    modifyGlobal(globalVar); // Passing global variable

    printf("After function call: %d\n", globalVar); // globalVar remains unchanged

    return 0;
}
