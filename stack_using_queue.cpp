#include <bits/stdc++.h>
using namespace std;

class MyQueue
{
public:
    stack<int> s;

    MyQueue()
    {
    }

    void push(int x)
    {
        s.push(x);
    }

    int pop()
    {
        s.
    }

    int peek()
    {
    }

    bool empty()
    {
    }
};

int main()
{
    MyQueue myQueue;
    myQueue.push(1); // queue is: [1]
    myQueue.push(2); // queue is: [1, 2] (leftmost is front of the queue)
    myQueue.peek();  // return 1
    myQueue.pop();   // return 1, queue is [2]
    myQueue.empty(); // return false
    return 0;
}