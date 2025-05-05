/*
Write a program to implement a stack
using a linked list.
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl endl

#define capacity 3
int Mystack[capacity];
int top = -1;

void push(int x)
{
    if (top < (capacity - 1))
    {
        top++;
        Mystack[top] = x;
        cout << "Value added successfully: " << x << nl;
    }
    else
    {
        cout << "No spaces!\n\n";
    }
}

int pop()
{
    if (top >= 0)
    {
        int val = Mystack[top];
        top--;
        return val;
    }
    cout << "Exception from POP! Empty Stack\n\n";
}

int peek()
{
    if (top >= 0)
    {
        return Mystack[top];
    }
    cout << "Exception from PEEK! Empty Stack\n\n";
}

int main()
{
    cout << "\n**My stack**\n\n";
    peek();

    push(10);
    push(20);
    push(30);

    cout << "Pop item: " << pop() << nl;
    push(40);

    cout << "Top of stack: " << peek() << nl << nl;

    return 0;
}