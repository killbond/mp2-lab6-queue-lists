#include <iostream>
#include "../include/List.h"

using namespace std;

List::List(int s)
{
    L = new int[s];
    D = new Node[s];
    start = 0;
    end = 0;
    size = s;
    for (int i = 0; i < size; i++)
        L[i] = -1;
}

List::List(List&a)
{
    start = a.start;
    end = a.end;
    size = a.size;
    L = new int[size];
    D = new Node[size];
    for (int i = 0; i < size; i++)
    {
        D[i] = a.D[i];
        L[i] = a.L[i];
    }
}

void List::AddStart(Node A)
{
    int c = -1;
    for (int i = 0; i < size; i++)
    {
        if (L[i] == -1)
        {
            c = i;
            break;
        }
    }
    if (c == -1) return;
    D[c] = A;
    L[c] = start;
    start = c;
    L[end] = start;
}

void List::AddEnd(Node A)
{
    int c = -1;
    for (int i = 0; i < size; i++)
    {
        if (L[i] == -1)
        {
            c = i;
            break;
        }
    }
    if (c == -1) return;
    D[c] = A;
    end = c;
    L[end-1] = c;
    L[end] = start;
}

void List::GetStart()
{
    Node k = D[start];
    D[start] = Node();
    int startOld = start;
    start = L[startOld];
    L[startOld] = -1;
    cout << k.getData();
}

void List::GetEnd()
{
    Node k = D[end];
    int cur = start;
    while (cur != end)
        cur = L[cur];
    D[end] = Node();
    L[end] = -1;
    L[end-1] = start;
    end = L[end-1];
    cout << k.getData();
}

void List::GetAll()
{
    for (int i = 0; i < size; i++)
        if (D[i].getData() != 0)
            cout << D[i].getData();
    cout << endl;
    for (int i = 0; i < size; i++)
        if (L[i] != -1)
            cout << L[i];
    cout << endl;
} 