#include <bits\stdc++.h>
using namespace std;

// pass by reference
void s(int *n)
{
    *n = (*n) * (*n);
    cout << *n << endl;
}
int main()
{
    int n = 5;
    cout << n << endl;
    s(&n);
    cout << n << endl;
}
