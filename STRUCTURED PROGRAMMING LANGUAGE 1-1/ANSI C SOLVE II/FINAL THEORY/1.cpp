#include <bits\stdc++.h>
using namespace std;

// pass by value
void s(int n)
{
    int y = n * n;
    cout << y << endl;
}
int main()
{
    int n = 5;
    cout << n << endl;
    s(n);
    cout << n << endl;
}
