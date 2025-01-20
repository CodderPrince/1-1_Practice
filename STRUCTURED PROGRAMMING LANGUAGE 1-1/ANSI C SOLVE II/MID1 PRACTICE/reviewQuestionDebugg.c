// ALL REVIEW QUESTION DEBUGGING

/*#include <stdio.h>

int main()
{
    FILE *fileptr = fopen("example.txt","r");
    fclose(fileptr);
}*/
/*struct point
{
    int x;
    int y;
};

int main()
{
    struct point p1 = {3, 4};
    int z = p1.x + p1.y;
    struct point *ptr = &z;
    printf("%d\n", *ptr);
}*/

/*int add(int a, int b)
{
    return a + b;
}
int main()
{
    int (*funcPtr)(int, int) = add;
    int result = funcPtr(3, 4);
    printf("%d\n", result);
}*/
/*struct node *head = NULL;
int arr[5] = {23, 56, 12, 45, 87};
// int (*m)[5]=&arr;
// printf("%d\n",(*m)[2]);
int *m[5];
m[0] = &arr[3];
m[3] = &arr[4];
m[4] = &arr[2];

printf("%d\n", *m[0]);
printf("%d\n", *m[4]);
printf("%d\n", *m[3]);

int *p = arr;
printf("%d\n", *p);
int x = 10;
int *ptr = &x;
printf("%d\n", ptr);
}*/

/*struct node
{
    int data;
    struct node *next;
};*/

/*#include <stdio.h>

This function takes an array of pointers to integers as its first parameter.
void searchA(int *m[], int x)
{
    printf("Value: %d\n", *m[0]);
}
int main()
{
    int num = 14;
    int *p = &num;//14
    int *arr[] = {p};
    searchA(arr, num);
}*/

#include <stdio.h>

// This function takes an array of pointers to pointers to integers as its first parameter.
void searchB(int **m[], int x)
{
    printf("Value1: %d\n", **m[0]);
}
int main()
{
    int num = 14;
    int *p = &num;

    int **arr[] = {&p};
    searchB(arr, num);
}
// int name[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
// printf("%d\n", name + 10);
// printf("%d\n", *(name + 10));

/*int x = 10, y = 10;
int *p1 = &x, *p2 = &y;
printf("%d\n", (*p1)++);
printf("%d\n", --(*p2));
printf("%d\n", (*p1) + (*p2)--);
printf("%d\n", ++(*p2) - *p1);*/
// What is the output of the following code?

/*#include <stdio.h>
int f(char *p);
int main()
{
    char str[] = "ANSI";
    printf("%d\n", f(str));
}
int f(char *p)
{
    char *q = p;
    while (*++p)
        ;
    return (p - q);
}*/

#include <stdio.h>

int main()
{
    int i, *ip;
    ip = calloc(4, sizeof(int));
    for (i = 0; i < 4; i++)
        *ip++ = i * i;
    for (i = 0; i < 4; i++)
        printf("%d\n", *--ip);
}
