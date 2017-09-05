#ifndef MP2_LAB6_QUEUE_LISTS_NODE_H
#define MP2_LAB6_QUEUE_LISTS_NODE_H

#include <iostream>

using namespace std;

class Node
{
protected:
    int data;
public:
    Node();
    Node(Node &n);
    explicit Node(int n);
    Node * operator=(const Node &n);
    Node operator+(const Node &n);
    Node operator-(const Node &n);
    Node operator*(const Node &n);
    Node operator/(const Node &n);
    bool operator==(const Node &n);
    friend istream& operator>>(istream &in, Node &v);
    int getData();
};


#endif //MP2_LAB6_QUEUE_LISTS_NODE_H
