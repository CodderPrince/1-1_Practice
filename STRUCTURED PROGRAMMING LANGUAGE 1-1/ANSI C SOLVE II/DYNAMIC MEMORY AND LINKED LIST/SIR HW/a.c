// A simple C program to build a linked list

#include <stdio.h>
#include <stdlib.h>

// A structure to represent a node
struct Node
{
    int data;
    struct Node *next;
};

// A function to create a new node with given data
struct Node *createNode(int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// A function to add a new node at the beginning of the linked list
void addAtBeginning(struct Node **head, int data)
{
    struct Node *newNode = createNode(data);
    newNode->next = *head;
    *head = newNode;
}

// A function to add a new node at the end of the linked list
void addAtEnd(struct Node **head, int data)
{
    struct Node *newNode = createNode(data);
    if (*head == NULL)
    {
        *head = newNode;
        return;
    }
    struct Node *last = *head;
    while (last->next != NULL)
    {
        last = last->next;
    }
    last->next = newNode;
}

// A function to add a new node after a given node in the linked list
void addAfter(struct Node *prevNode, int data)
{
    if (prevNode == NULL)
    {
        printf("The given previous node cannot be NULL\n");
        return;
    }
    struct Node *newNode = createNode(data);
    newNode->next = prevNode->next;
    prevNode->next = newNode;
}

// A function to display all the nodes in the linked list
void display(struct Node *head)
{
    struct Node *temp = head;
    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// A main function to test the above functions
int main()
{
    struct Node *head = NULL;

    // Add nodes at the beginning
    addAtBeginning(&head, 10);
    addAtBeginning(&head, 20);
    addAtBeginning(&head, 30);

    // Display the linked list
    printf("The linked list after adding nodes at the beginning is:\n");
    display(head);

    // Add nodes at the end
    addAtEnd(&head, 40);
    addAtEnd(&head, 50);
    addAtEnd(&head, 60);

    // Display the linked list
    printf("The linked list after adding nodes at the end is:\n");
    display(head);

    // Add nodes after a given node
    addAfter(head->next, 25);
    addAfter(head->next->next->next, 45);
    addAfter(head->next->next->next->next->next, 55);

    // Display the linked list
    printf("The linked list after adding nodes after a given node is:\n");
    display(head);

    return 0;
}
