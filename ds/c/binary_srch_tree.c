#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *right;
    struct node *left;    
};

struct node *create(){
   struct node *parent;
   struct node *root;
   int data;
   scanf("%d",&data);

   if(data==-1){
       return NULL;
   } else {
       parent=(struct node *)malloc(sizeof(struct node));
       
       if(parent==NULL){
           parent=root;
       parent->data=data;
       }

       if(data < parent->data){
           parent->left=create();
       }
       if(data > parent->data){
           parent->right=create();
       }
   }
   return parent;
}

void preorder(struct node *root){
    if(root==NULL){
        return ;
    }
    printf("%d",root->data);
    preorder(root->left);
    preorder(root->right);
}

int main(){
    struct node *root=create();
    preorder(root);
    return 0;
}