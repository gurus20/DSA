#include <stdio.h>
#include <stdlib.h>

struct node 
{
    int data;
    struct node *prev;
    struct node *next;
};
    struct node *current=NULL;
    
struct node *insert(struct node *head, int data){
    struct node *link;
    link=(struct node *)malloc(sizeof(struct node));
  
    link->data=data;
    link->next=NULL;

    if(head==NULL){
        head=link;
        head->prev=NULL;
    }
    
    if(current==NULL){
        current=head;    
    } 
    else {
        current->next=link;
        link->prev=current;
        current=link;
      }
   return head;
    }

void print(struct node *head){
    struct node *current;
    current=head;
    
    while(current!=NULL){
        printf("%d=>",current->data);
        current=current->next;
    }
}
    

int main(){
    struct node *head=NULL;
    head=insert(head,10);
    insert(head,20);
    insert(head,30);
    insert(head,40);
    insert(head,50);
    insert(head,60);
    print(head);
    return 0;
}