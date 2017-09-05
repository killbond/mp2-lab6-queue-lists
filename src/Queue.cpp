#include "../include/Queue.h"

void Queue::push(Node a)
{
    this->AddStart(a);
}

void Queue::pop()
{
    this->GetEnd();
}

Queue::Queue(int s)
{
    L = new int[s];
    D = new Node[s];
    start = 0;
    end = 0;
    size = s;
    for (int i = 0; i < size; i++)
        L[i] = -1;
}