// tag

/*
In this code tag is : Person
tag is mainly used in structure and union
by using tag it helps you store different types of data in one tag.
Here is an example given below:
*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl "\n"

struct Person
{
    string name;
    int age;
};
int main()
{
    struct Person p;
    p.name = "Prince";
    p.age = 22;
    cout << p.name << nl;
    cout << p.age << nl;

    return 0;
}