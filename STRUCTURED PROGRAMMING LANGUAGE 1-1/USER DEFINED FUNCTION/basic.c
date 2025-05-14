/*#include <stdio.h>

void insert(int *x, int *y)
{
    *x = 10;
    *y = 20;
}

int main()
{
    int x, y;

    insert(&x, &y);

    printf("x: %d, y: %d\n", x, y);

    return 0;
}
*/

/*

#include <stdio.h>

// Function prototype with int return type
int exampleFunction();

int main()
{
    // Calling the function and assigning the result to a float variable
    float result = exampleFunction();

    return 0;
}

// Function definition with a return type of int
int exampleFunction()
{
    return 3.14; // Compilation error: type mismatch between int and float
}

/*void myFunction(int a, int b, int c) {
    // ...
}

int main() {
    int a,b,c;
    myFunction(10, 20); // Warning: Missing argument for parameter 'c'
}*/

/*void function()
{
    int i = 0;        // Automatic variable
    static int j = 0; // Static variable

    i++; // i starts from 0 each time the function is called
    j++; // j retains its value across function calls

    printf("i = %d, j = %d\n", i, j);
}

int main()
{
    function(); // Output: i = 1, j = 1
    function(); // Output: i = 1, j = 2
    function(); // Output: i = 1, j = 2
}*/

/*void square(int *num)
{
    *num = (*num) * (*num);
    printf("Inside the function: %d\n", *num);
}

int main()
{
    int number = 5;
    printf("Before calling the function: %d\n", number);
    square(&number);
    printf("After calling the function: %d\n", number);
    return 0;
}*/

#include <stdio.h>

// Function declaration
int xyz(void);

int main()
{
    // Function calls and addition
    int result = xyz() + xyz();
    printf("Result: %d\n", result);
    return 0;
}

// Function definition
int xyz(void)
{
    // Your implementation goes here
    return 42; // Just an example value, replace it with your logic
}
