#include <iostream>
#include "include/List.h"
#include "include/Queue.h"

using namespace std;

int main()
{
    Node b(2);
    Node c(3);
    Node d(4);

    Queue queue(10);

    queue.push(c);
    queue.push(d);
    queue.push(b);

    queue.pop();
    queue.pop();

    return 0;
}