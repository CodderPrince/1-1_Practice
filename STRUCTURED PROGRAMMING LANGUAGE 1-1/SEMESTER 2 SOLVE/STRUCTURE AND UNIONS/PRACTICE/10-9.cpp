/*
***old 10.9 new 11.9*** *PRINCE*
Write a class template to represent a generic vector.
Include member functions to
perform the following tasks:
(a) To create the vector
(b) To modify the value of a given element
(c) To multiply by a scalar value
(d) To display the vector in the following form (10, 20, 30 …)
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl endl

struct Vector
{
    int s;
    int elements[10];
};

void org(struct Vector v)
{
    for (int i = 0; i < v.s; i++)
    {
        cout << v.elements[i] << " ";
    }
    cout << nl;
}

void modify(struct Vector &v, int index, int value)
{
    if (index >= 0 && index < v.s)
    {
        v.elements[index] = value;
    }
    else
    {
        cout << "Invalid index for modification!\n";
    }
}
void sca(struct Vector &v, int scalar)
{
    for (int i = 0; i < v.s; i++)
    {
        v.elements[i] *= scalar;
    }
}
int main()
{
    struct Vector v;
    int s;

    cout << "Enter the vector size: ";
    cin >> v.s;

    cout << "Enter the vector elements: ";
    for (int i = 0; i < v.s; i++)
    {
        cin >> v.elements[i];
    }

    cout << "Original vector: ";
    org(v);

    cout << "Enter the index you want to modify: ";
    int index;
    cin >> index;
    cout << "Enter the new value: ";
    int value;
    cin >> value;
    modify(v, index, value);
    cout << "After modification: ";
    org(v);

    int scalar;
    cout << "Enter a scalar value to multiply: ";
    cin >> scalar;
    sca(v, scalar);
    cout << "After multiply: ";
    org(v);

    return 0;
}
