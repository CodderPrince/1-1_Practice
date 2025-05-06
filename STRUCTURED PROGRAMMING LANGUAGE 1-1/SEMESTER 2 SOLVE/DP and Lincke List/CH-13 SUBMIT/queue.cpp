/*
Write a program to implement
an queue using a linked list.
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl endl

#define CAPACITY 5
int OurQue[CAPACITY];
int front = 0, rear = -1, totalItem = 0;

bool isFull()
{
    if (totalItem == CAPACITY)
    {
        return true;
    }
    return false;
}

bool isEmpty()
{
    if (totalItem == 0)
    {
        return true;
    }
    return false;
}

void Enque(int item)
{
    if (isFull())
    {
        cout << "Sorry, the queue is full!\n\n";
        return;
    }
    rear = (rear + 1) % CAPACITY;
    OurQue[rear] = item;
    totalItem++;
}

int Deque()
{
    if (isEmpty())
    {
        cout << "Sorry, the queue is empty!\n\n";
        return -1;
    }

    int frontItem = OurQue[front];
    OurQue[front] = -1;
    front = (front + 1) % CAPACITY;
    totalItem--;
    return frontItem;
}

void printQue()
{
    cout << "Queue: ";
    for (int i = 0; i < CAPACITY; i++)
    {
        cout << OurQue[i] << " ";
    }
    cout << nl << nl;
}

int main()
{
    cout << "\n**Implement Queue**\n";
    Enque(10);
    Enque(20);
    Enque(30);
    Enque(40);
    printQue();

    Enque(50);
    printQue();

    Enque(60);
    printQue();

    Deque();
    printQue();

    Enque(60);
    printQue();

    return 0;
}