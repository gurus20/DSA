#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *left;
    struct node *right;
};

struct node *create(struct node *current){
    struct node *parent;
    int data;
    scanf("%d",&data);

    if(data==-1){
        return NULL;
    }
    else{
        parent=(struct node *)malloc(sizeof(struct node));
        parent->data=data;
        if(data<current->data){
            parent->left=create(parent);
        }
        else{
            parent->right=create(parent);
        }
    }
    return parent;
}

int main(){
    struct node *parent;
    parent = create(parent);
    printf("%d ",parent->data);
    printf("%d ",parent->left->data);
    printf("%d ",parent->right->data);
    return 0;
}