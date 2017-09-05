#ifndef MP2_LAB6_QUEUE_LISTS_QUEUE_H
#define MP2_LAB6_QUEUE_LISTS_QUEUE_H


#include "List.h"

class Queue :public List
{
public:
    explicit Queue(int s);
    void push(Node a);
    void pop();
};


#endif //MP2_LAB6_QUEUE_LISTS_QUEUE_H
