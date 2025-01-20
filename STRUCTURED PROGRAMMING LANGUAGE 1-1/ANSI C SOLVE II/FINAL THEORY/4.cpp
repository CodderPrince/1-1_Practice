// static and automatic
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl "\n"

void func()
{
    // int i; doesn't initialize value so print garbage value
    int i = 0;
    static int j;
    i++, j++;
    cout << "i: " << i << " j: " << j << nl;
}
int main()
{
    func();
    func();
    func();

    return 0;
}