// sizeof
/*
sizeof is a keyword that used to know size
of any data types in bytes
for this example here total integer value is 4
we know that integer value is takes 4 bytes in memory
so total size is 4*4=16 bytes
*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl "\n"

int main()
{
    int arr[] = {2, 3, 1, 7};
    cout << "Array size in bytes: " << sizeof(arr) << nl;
    cout << "Array size without bytes: " << sizeof(arr) / 4 << nl;

    return 0;
}