//struct
/*
this is a keyword that is mainly used to store
different types of data type in one name
here in file name i store int and string data types value.

*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl "\n"

typedef struct file
{
    int a;
    string str;
} f;
int main()
{
    f s;
    s.a = 10;
    s.str = "Prince";
    cout << s.a << nl;
    cout << s.str << nl;

    return 0;
}