#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl "\n"
int add(int a, int b);
int main()
{
    int a, b;
    cin >> a >> b;
    cout << add(a, b) << nl;

    return 0;
}
int add(int a, int b)
{
    return a + b;
}