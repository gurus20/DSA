#include <stdio.h>
#include <stdlib.h>

struct node
{
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
    else{
        parent=(struct node *)malloc(sizeof(struct node));
    parent->data=data;
    parent->left=create();
    parent->right=create();
    }
    return parent;
}
 
int main(){
    struct node *parent;
    parent = create();
    printf("%d ",parent->data);
    printf("%d ",parent->left->data);
    printf("%d ",parent->right->data);

}