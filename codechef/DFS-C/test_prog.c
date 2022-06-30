#include<stdio.h>
#include<stdlib.h>
struct node
{
  int data;
  struct node *left ;
  struct node * right ;
};
struct node * create()
{
  struct  node * parent ;
  printf("enter element and (-1 for null )  :");
  int x;
  scanf("%d",&x);
  //
  if(x == -1)
  return NULL;



  parent = (struct node *)malloc(sizeof(struct node));
  parent -> data = x;

  // enter the left sub child
  printf("enter the left sub child of  %d\n",x);
  parent -> left = create();

  //enter the right sub child
  printf("enter the right sub child of %d\n",x);
  parent -> right = create ();

  return parent ;
}

void preorder_traversal(struct node *parent )
{
  if(parent == NULL)
  return ;
  printf("%d    ",parent->data);
  preorder_traversal(parent-> left );
  preorder_traversal(parent -> right);
}

int main()
{
  struct node *root ;
  root = create();
  printf("preorder traversal is =\n");
  preorder_traversal(root);
  return 0;
}