#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

typedef struct Node node;

void insertAt(node **head, int val)  
{
    node *n = (node *)malloc(sizeof(node));
    n->data = val;
    n->next = NULL;

    if (*head == NULL)
    {
        *head = n;
        return;
    }

    node *temp = *head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = temp->next->next;
}
void insertAtpoistion(node **head, int val, int p)
{
    node *n = (node *)malloc(sizeof(node));
    n->data = val;
    if (p == 0)
    {
        n->next = *head;
        *head = n;
        return;
    }
    node *temp = *head;
    for (int i = 1; i < p; i++)
    {
        temp = temp->next;
    }
    n->next = temp->next->next;
    temp->next = n;
}

void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        printf("%d-->", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main()
{
    node *head = NULL;

    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        int num;
        scanf("%d", &num);
        insertAt(&head, num);
    }

    display(head);
    int num, pos;
    scanf("%d %d", &num, &pos);
    insertAtpoistion(&head, num, pos);
    display(head);

    return 0;
}