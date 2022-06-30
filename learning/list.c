#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

struct node {
  int data;
  struct node *next;
};

struct node *head,*temp;

void insert(int data){
  struct node *link;
  link=malloc(sizeof(struct node));
  link->data=data;
  link->next=NULL;

  if (head==NULL){
    head=link;          
  }
  if (temp==NULL){
    temp=head;
  }
  else{
    temp->next=link;
    temp=link;
  }

}
void print(struct node *head){
  struct node *temp;
  temp=head;
  while(temp!=NULL){
    printf("%d=>",temp->data);
    temp=temp->next;
  }
}

int main(){
 insert(10);
 insert(20);
 insert(30);
 insert(40);
 insert(50);
 insert(60);
 print(head);
 return 0;
}
