/*#include <stdio.h>
int main()
{
    int m[2];
    int *p = m;
    m[0] = 100;
    m[1] = 200;
    printf("%d %d", ++*p, *p);
}*/
/*
A linked list is a linear data structure which the elements are not stored
in contiguous memory location.
Linked list is openly used in dynamic memory allocation.
Linked list also uesd in queue and stacks.

typedef struct node
{
    int data;
    struct node *next;
} Node;

Node *head = NULL;

Node *first = (Node*)(malloc(sizeof(int)));
Node *second = (Node*)(malloc(sizeof(int)));
Node *third = (Node*)(malloc(sizeof(int)));

first -> data = 10;
second -> data = 20;
third -> data = 30;

head = first;
first=second;
second=third;
third=null;

*/
/*
#include<stdio.h>
int main()
{
    int *ptr = (int *)(malloc(10*sizeof(int)));
    if(ptr==null)
    {
        false
    }
    for(int i=0; i<10; i++)
    {
        ptr[i]=i+1;
    }
    printf("%d ",ptr[i]);
}
*/
/*
struct node
{
    int data;
    struct node *next;
};
int data;
struct node *next;
struct node *prev;

each node has some data and pointer node in bot next and previous
this type of linked list traversal data in both forward and previous

each node has some data a pointer to indicates the next node.
this linked list is allows to traversal data in one direction only

circular

singly linked list
doubly linked list
circular linked list

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
*/
/*
#include <stdio.h>
int main()
{
    int const *p = 5;
     *p = *p + 10;

    printf("%d\n", *p);
}*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Allocate memory using malloc()
    int *ptr1 = (int *)malloc(1 * sizeof(int));
    if (ptr1 == NULL)
    {
        perror("malloc failed");
        return 1;
    }

    // Allocate memory using calloc()
    int *ptr2 = (int *)calloc(1, sizeof(int));
    if (ptr2 == NULL)
    {
        perror("calloc failed");
        return 1;
    }

    // Check the values of the allocated memory
    printf("Value pointed to by ptr1: %d\n", *ptr1);
    printf("Value pointed to by ptr2: %d\n", *ptr2);

    // Free the allocated memory
    free(ptr1);
    free(ptr2);

    return 0;
}
