/*
Write a program to build a linked list by adding
new nodes at the beginning, at the end or
in the middle of the linked list. Also write a
function display( ) which displays all the nodes
present in the linked list.
*/

#include <bits\stdc++.h>
using namespace std;

typedef struct Node
{
    int data;
    struct Node *next;
} Node;

int main()
{
    Node *a = NULL;
    Node *b = NULL;
    Node *c = NULL;

    a = new Node;
    b = new Node;
    c = new Node;

    a->data = 10;
    b->data = 20;
    c->data = 30;

    a->next = b;
    b->next = c;
    c->next = NULL;

    cout << "\nOriginal Linked List\n\n";
    Node *current = a;
    while (current != NULL)
    {
        cout << current->data << " -> ";
        current = current->next;
    }
    cout << "\n\n";

    Node *newNode = new Node;
    newNode->data = 25;
    newNode->next = b->next;
    b->next = newNode;

    cout << "After adding new value in the middle\n\n";
    current = a;
    while (current != NULL)
    {
        cout << current->data << " -> ";
        current = current->next;
    }
    cout << "\n\n";

    Node *lastNode = new Node;
    lastNode->data = 40;
    lastNode->next = NULL;
    cout << "After adding value to the last\n\n";
    current = a;
    while (current != NULL)
    {
        cout << current->data << " -> ";
        current = current->next;
    }
    cout << "\n\n";

    delete a;
    delete b;
    delete c;
    delete newNode;
    delete lastNode;

    return 0;
}
