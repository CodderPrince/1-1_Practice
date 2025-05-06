#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl "\n"

int func(void)
{
    cout << "ID: 12105007\n";
    return 14;
}
int main()
{
    int (*p)(void);  // create a pointer function that not takes any arguments
    p = func;        // initialize the function address to the pointer
    int batch = p(); // now call the function using pointer
    cout << "Batch: " << batch << nl;

    return 0;
}