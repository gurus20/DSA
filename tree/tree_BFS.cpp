#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;
};

Node *addNode(int data)
{
    Node *node = new Node();

    node->data = data;
    node->left = NULL;
    node->right = NULL;

    return node;
}

int height(Node *root)
{
    if (root == NULL)
        return 0;
    
    else
    {
        int l = height(root->left);
        int r = height(root->right);

        if (l > r){
            return l + 1;
        }
        else{
            return r + 1;
        }
    }
}

void printCurrentLevel(Node *root, int level){
    if (root == NULL)
        return ;
        
    if (level == 1)
        cout << root -> data << " ";
    
    else if (level > 1){
        printCurrentLevel(root->left, level-1);
        printCurrentLevel(root->right, level-1);
    }
}

void TreeBFS(Node *root){
    int h = height(root);
    for(int i = 1; i <= h; i++)
        printCurrentLevel(root, i);
}

int main()
{
    Node *root;
    root = addNode(10);
    root->left = addNode(20);
    root->right = addNode(30);
    root->left->left = addNode(40);
    root->left->right = addNode(50);
    root->right->right = addNode(60);

    TreeBFS(root);

    return 0;
}