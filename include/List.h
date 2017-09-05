#ifndef MP2_LAB6_QUEUE_LISTS_LIST_H
#define MP2_LAB6_QUEUE_LISTS_LIST_H

#include "Node.h"

class List
{
protected:
    Node *D;
    int* L;
    int start;
    int end;
    int size;
public:
    explicit List(int s=1);
    List(List &a);
    void AddStart(Node A);
    void AddEnd(Node A);
    void GetStart();
    void GetEnd();
    void GetAll();
};


#endif //MP2_LAB6_QUEUE_LISTS_LIST_H
