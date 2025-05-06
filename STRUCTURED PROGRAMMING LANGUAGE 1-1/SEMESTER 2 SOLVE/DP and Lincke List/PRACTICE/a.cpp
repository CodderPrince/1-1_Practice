#include <iostream>
using namespace std;

// Define a Node structure
struct Node
{
    int data;
    Node *next;

    // Constructor to initialize data and next pointer
    Node(int value) : data(value), next(nullptr) {}
};

// Class representing a linked list
class LinkedList
{
private:
    Node *head; // Pointer to the head of the linked list

public:
    // Constructor to initialize an empty linked list
    LinkedList() : head(nullptr) {}

    // Function to add a new node at the beginning of the linked list
    void addAtBeginning(int value)
    {
        Node *newNode = new Node(value);
        newNode->next = head;
        head = newNode;
    }

    // Function to add a new node at the end of the linked list
    void addAtEnd(int value)
    {
        Node *newNode = new Node(value);
        if (head == nullptr)
        {
            head = newNode;
            return;
        }

        Node *current = head;
        while (current->next != nullptr)
        {
            current = current->next;
        }
        current->next = newNode;
    }

    // Function to add a new node at the middle of the linked list
    void addAtMiddle(int value, int position)
    {
        Node *newNode = new Node(value);
        if (head == nullptr || position <= 1)
        {
            newNode->next = head;
            head = newNode;
            return;
        }

        Node *current = head;
        for (int i = 1; i < position - 1 && current != nullptr; ++i)
        {
            current = current->next;
        }

        if (current != nullptr)
        {
            newNode->next = current->next;
            current->next = newNode;
        }
    }

    // Function to display all nodes in the linked list
    void display()
    {
        Node *current = head;
        while (current != nullptr)
        {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
};

int main()
{
    LinkedList myList;

    // Add nodes at the beginning
    myList.addAtBeginning(3);
    myList.addAtBeginning(2);
    myList.addAtBeginning(1);

    // Display the linked list
    cout << "Linked list after adding nodes at the beginning: ";
    myList.display();

    // Add nodes at the end
    myList.addAtEnd(4);
    myList.addAtEnd(5);

    // Display the linked list
    cout << "Linked list after adding nodes at the end: ";
    myList.display();

    // Add a node in the middle
    myList.addAtMiddle(10, 3);

    // Display the linked list
    cout << "Linked list after adding a node in the middle: ";
    myList.display();

    return 0;
}
