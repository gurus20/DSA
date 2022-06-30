#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *left;
    struct node *right;
};

struct node *newnode(){
    struct node *temp;
    temp=(struct node *)malloc(sizeof(struct node));
    return temp;
}

void preorder(struct node *root){

    if(root!=NULL){
        printf("%d=>",root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

int main(){                                                         
    struct node *root=NULL;
    
    root=newnode();
    root->data=10;
    root->left=newnode();
    root->left->data=20;
    root->left->left=newnode();
    root->left->left->data=30;
    root->left->right=newnode();
    root->left->right->data=40;


    preorder(root);
    return 0;
}