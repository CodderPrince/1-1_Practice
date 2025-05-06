#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} Node;

int main()
{
    Node *a = NULL;
    Node *b = NULL;
    Node *c = NULL;

    a = (Node *)(malloc(sizeof(Node)));
    b = (Node *)(malloc(sizeof(Node)));
    c = (Node *)(malloc(sizeof(Node)));

    a->data = 10;
    b->data = 20;
    c->data = 30;

    a->next = b;
    b->next = c;
    c->next = NULL;

    // Traverse and print the linked list
    printf("\nOriginal linked list:\n");
    Node *current = a;
    while (current != NULL)
    {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("\n\n");

    // Add a value in the middle
    Node *newNode = (Node *)(malloc(sizeof(Node)));
    newNode->data = 25;

    newNode->next = b->next;
    b->next = newNode;

    // Traverse and print the modified linked list
    printf("Linked list after adding a value in the middle:\n");
    current = a;
    while (current != NULL)
    {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("\n\n");

    // Add a value at the end
    Node *lastNode = (Node *)(malloc(sizeof(Node)));
    lastNode->data = 40;
    lastNode->next = NULL;

    c->next = lastNode;

    // Traverse and print the final linked list
    printf("Linked list after adding a value at the end:\n");
    current = a;
    while (current != NULL)
    {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("\n\n");

    // Free the allocated memory
    free(a);
    free(b);
    free(c);
    free(newNode);
    free(lastNode);

    return 0;
}
