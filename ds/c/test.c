#include <stdio.h>
#include <stdlib.h>

struct node{
  int data;
  struct node *next;
};

void insert(struct node* head_ref, int data){
  struct node* new_node = (struct node*)malloc(sizeof(struct node));
  new_node->data = data;
  new_node->next = head_ref;
  head_ref = new_node;
}

void print(struct node* head_ref){
    while(head_ref != NULL){
      printf("%d ",head_ref->data);
      head_ref = head_ref->next;
    }
    printf("\n");
}

int main(){
  struct node *head = NULL;
  insert(head, 10);
  insert(head, 20);
  insert(head, 30);
  // 30 20 10

  print(head);
  return 0;
}