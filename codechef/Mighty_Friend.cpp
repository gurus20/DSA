#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *left, *right;
};

Node *addNode(int data)
{
    Node *node = new Node();
    node->data = data;
    node->left = NULL;
    node->right = NULL;

    return node;
}

void printTree(Node *root)
{
    if (root == NULL)
    {
        return;
    }

    cout << root->data << "->";
    printTree(root->left);
    printTree(root->right);
}

void printCurrentLevel(Node *root, int level){
    if (root==NULL){
        return;
    }
    if (level == 1){
        cout <<root->data << " ";
    }
    else if (level > 1){
        printCurrentLevel(root->left, level-1);
        printCurrentLevel(root->right, level-1);
    }
}

int height(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    else
    {
        int leftHeight = height(root->left);
        int rightHeight = height(root->right);

        if (leftHeight > rightHeight)
        {
            return leftHeight + 1;
        }
        else
        {
            return rightHeight + 1;
        }
    }
}


void bfsTraversal(Node *root){
    int h = height(root);

    for(int i = 1; i <= h; i++){
        printCurrentLevel(root, i);
    }
}

int main()
{
    Node *root = new Node();
    root = addNode(1);
    root->left = addNode(2);
    root->right = addNode(3);
    root->left->left = addNode(4);
    root->left->right = addNode(5);

    printTree(root);
    cout << "\n";
    bfsTraversal(root);

    return 0;
}