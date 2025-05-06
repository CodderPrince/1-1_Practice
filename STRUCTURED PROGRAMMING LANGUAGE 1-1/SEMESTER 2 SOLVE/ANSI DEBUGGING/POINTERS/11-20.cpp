#include <bits\stdc++.h>
using namespace std;

int func(void)
{
    cout << "ID: 12105007\n";
    return 14;
}

int main()
{

    int (*p)(void); // create a pointer function that not takes any argument
    //int *p(void); wrong way to initialize a pointer function
    p = func; // Assign the address of function to the pointer
    // cout << p << endl;

    // Using the pointer to call the function
    int result = p();

    printf("Batch: %d\n", result);

    return 0;
}
