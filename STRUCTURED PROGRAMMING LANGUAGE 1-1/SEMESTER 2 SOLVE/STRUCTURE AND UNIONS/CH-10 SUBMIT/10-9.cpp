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

void dis(struct Vector &v)
{
    for (int i = 0; i < v.s; i++)
    {
        cout << v.elements[i] << " ";
    }
    cout << nl;
}

 void modi(struct Vector &v, int val, int ind)
 {
    if(ind >= 0 && ind<v.s)
    {
        v.elements[ind] = val;
    }
    else
    {
        cout<<"Invalid index to modification!\n";
        cout<<"Elements not changed: ";
    }
 }

 void mul(struct Vector &v, int sca)
 {
    for(int i=0; i<v.s; i++)
    {
        v.elements[i] *= sca;
    }
 }

int main()
{
    struct Vector v;
    cout << "Enter vector size: ";
    cin >> v.s;
    cout << "Enter vector elements: ";
    for (int i = 0; i < v.s; i++)
    {
        cin >> v.elements[i];
    }
    cout << "Vector elements: ";
    dis(v);

    cout << "Enter index you want to modify:  ";
    int ind;
    cin >> ind;
    int val;
    cout << "Enter the new value: ";
    cin >> val;
    cout<<"After Modification: ";
    modi(v,val,ind);
    dis(v);

    int sca;
    cout<<"Enter a scalar value: ";
    cin>>sca;
    cout<<"After multiplying: ";
    mul(v,sca);
    dis(v);

    return 0;
}