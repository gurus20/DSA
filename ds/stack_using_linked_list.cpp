#include <bits/stdc++.h>
using namespace std;

#define MAX 10

struct node
{
    int data;
    node *next;

    node *push(int data)
    {
        node *node = (struct node *)malloc(sizeof(node));
        node->data = data;
        node->next = NULL;
        return node;
    }
};

int main()
{
    struct node *head;
    head->push(10);

    cout << head->data << endl;

    return 0;
}