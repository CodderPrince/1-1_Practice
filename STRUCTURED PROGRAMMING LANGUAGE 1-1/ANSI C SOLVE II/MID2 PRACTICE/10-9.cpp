#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl endl

struct Vector
{
    int s;
    int element[10];
};

void displayV(Vector v)
{
    for (int i = 0; i < v.s; i++)
    {
        cout << v.element[i] << " ";
    }
    cout << nl;
}

void modification(Vector &v, int indexx, int val)
{
    if (indexx >= 0 && indexx <= v.s)
    {
        v.element[indexx] = val;
    }
    else
    {
        cout << "Invalid index input!\n";
    }
}

void mul(Vector &v, int scalar)
{
    for (int i = 0; i < v.s; i++)
    {
        v.element[i] *= scalar;
    }
}

int main()
{
    struct Vector v;
    cout << "Enter Vector size: ";
    cin >> v.s;

    cout << "Enter vector element: ";
    for (int i = 0; i < v.s; i++)
    {
        cin >> v.element[i];
    }
    // original vector
    cout << "Original Vector: ";
    displayV(v);

    // modification vector
    cout << "Enter index to modify: ";
    int indexx;
    cin >> indexx;
    cout << "Enter value to modify: ";
    int val;
    cin >> val;
    cout << "After modification: ";
    modification(v, indexx, val);
    displayV(v);

    // after multiplication
    cout << "Enter a scalar value: ";
    int scalar;
    cin >> scalar;
    cout << "After multiplication: ";
    mul(v, scalar);
    displayV(v);

    return 0;
}