#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl endl

typedef struct Node
{
    int data;
    Node *next;
} node;

void print(node *head)
{
    node *current = head;
    while (current != NULL)
    {
        cout << current->data << " -> ";
        current = current->next;
    }
    cout << "NULL" << nl << nl;
}

int main()
{
    // create original linked list
    node *head = (node *)(malloc(sizeof(node)));
    node *second = (node *)(malloc(sizeof(node)));
    node *third = (node *)(malloc(sizeof(node)));

    head->data = 10;
    second->data = 20;
    third->data = 30;

    head->next = second;
    second->next = third;
    third->next = NULL;

    cout << "\nOriginal linked list: ";
    print(head);

    // add value at first
    node *newF = (node *)(malloc(sizeof(node)));
    newF->data = 5;

    newF->next = head;
    head = newF;
    cout << "After add value at first: ";
    print(head);

    // add value at middle
    node *newM = (node *)(malloc(sizeof(node)));
    newM->data = 25;

    newM->next = second->next;
    second->next = newM;

    cout << "After add value at middle: ";
    print(head);

    // add value at last
    node *newL = (node *)(malloc(sizeof(node)));
    newL->data = 35;

    newL->next = NULL;
    third->next = newL;
    cout << "After add value at last: ";
    print(head);

    // delete value at first
    node *temp = head;
    head = head->next;
    free(temp);
    cout << "After delete first value: ";
    print(head);

    // delete value add middle
    node *prev = NULL;
    node *current = head;
    while (current != NULL && current->data != 25)
    {
        prev = current;
        current = current->next;
    }

    if (current != NULL)
    {
        prev->next = current->next;
        free(current);
    }
    cout << "After delete value at middle: ";
    print(head);

    // delete last value
    prev = NULL;
    current = head;
    while (current->next != NULL)
    {
        prev = current;
        current = current->next;
    }
    prev->next = NULL;
    free(current);
    cout << "After delete last value: ";
    print(head);

    return 0;
}