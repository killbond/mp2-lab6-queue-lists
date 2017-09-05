#include "../include/Node.h"

Node::Node()
{
    this->data = 0;
}


Node::Node(Node &n)
{
    this->data = n.data;
};


Node * Node::operator=(const Node &n)
{
    if (this == &n) throw 1;
    this->data = n.data;
    return this;
};


Node Node::operator+(const Node &n)
{
    Node newNode;
    newNode.data = this->data + n.data;
    return newNode;
};


Node Node::operator-(const Node &n)
{
    Node newNode;
    newNode.data = this->data - n.data;
    return newNode;
}

Node Node::operator*(const Node &n)
{
    Node newNode;
    newNode.data = this->data * n.data;
    return newNode;
}

Node Node::operator/(const Node &n)
{
    Node newNode;
    newNode.data = this->data / n.data;
    return newNode;
}

bool Node::operator==(const Node &n)
{
    return (this->data == n.data);
}

Node::Node(int n)
{
    this->data = n;
};

istream& operator>>(istream &in, Node &v)
{
    in >> v.data;
    return in;
}

ostream& operator<<(ostream &out, Node &v)
{
    out << v.getData();
    return out;
}

int Node::getData()
{
    return this->data;
} 