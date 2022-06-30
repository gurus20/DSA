#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *left;
    struct node *right;
};

struct node *create(){
    struct node *parent;
    
    int data;
    scanf("%d",&data);

    if(data==-1){
        return NULL ;
    }
    
    parent=(struct node *)malloc(sizeof(struct node));
        parent->data=data;
        parent->left=create();
        parent->right=create();
    
    return parent;
}

void preorder(struct node *root){

    if(root==NULL){
        return ;
    }
        printf("%d=>",root->data);
        preorder(root->left);
        preorder(root->right);
    
}

int main(){
struct node *root;
    root=create();
    preorder(root);
    return 0;
}