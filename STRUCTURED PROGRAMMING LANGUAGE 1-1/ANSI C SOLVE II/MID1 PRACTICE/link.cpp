#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node *next;
};

int main()
{
    // Create a linked list with three nodes
    Node *head = new Node{10, nullptr};
    Node *second = new Node{20, nullptr};
    Node *third = new Node{30, nullptr};

    head->next = second;
    second->next = third;

    // Print the original linked list
    cout << "Original linked list: ";
    Node *current = head;
    while (current != nullptr)
    {
        cout << current->data << " -> ";
        current = current->next;
    }
    cout << "NULL" << endl;

    // Add a new node at the beginning of the linked list
    Node *new_head = new Node{5, nullptr};
    new_head->next = head;
    head = new_head;

    // Print the linked list after adding a node at the beginning
    cout << "Linked list after adding a node at the beginning: ";
    current = head;
    while (current != nullptr)
    {
        cout << current->data << " -> ";
        current = current->next;
    }
    cout << "NULL" << endl;

    // Add a new node after the second node
    Node *new_node = new Node{25, nullptr};
    new_node->next = second->next;
    second->next = new_node;

    // Print the linked list after adding a node after the second node
    cout << "Linked list after adding a node after the second node: ";
    current = head;
    while (current != nullptr)
    {
        cout << current->data << " -> ";
        current = current->next;
    }
    cout << "NULL" << endl;

    // Delete the first node from the linked list
    Node *temp = head;
    head = head->next;
    delete temp;

    // Print the linked list after deleting the first node
    cout << "Linked list after deleting the first node: ";
    current = head;
    while (current != nullptr)
    {
        cout << current->data << " -> ";
        current = current->next;
    }
    cout << "NULL" << endl;

    // Delete the last node from the linked list
    Node *prev = nullptr;
    current = head;
    while (current->next != nullptr)
    {
        prev = current;
        current = current->next;
    }
    prev->next = nullptr;
    delete current;

    // Print the linked list after deleting the last node
    cout << "Linked list after deleting the last node: ";
    current = head;
    while (current != nullptr)
    {
        cout << current->data << " -> ";
        current = current->next;
    }
    cout << "NULL" << endl;

    return 0;
}