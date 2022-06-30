#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *insert(struct node *head,int data){
    struct node *link, *temp;
    link=(struct node *)malloc(sizeof(struct node));
    link->data=data;

    if(head==NULL){
        head=link;
    }

    if(temp==NULL){
        temp=link;
    }
    else{
        temp->next=link;
        temp=link;
    }
    return head;
}

struct node *pop(struct node *head){
    int data;
    struct node *temp;
    if(head==NULL){
        printf("EMPTY QUEUE");
    }else{
        temp= head;
        data = temp->data;
        printf("%d is popped ",data);
        head= temp->next;
        free(temp);
    }
    return head;
}

int main(){
    struct node *head;
    head=insert(head,10);
    insert(head,20);
    insert(head,30);
    insert(head,40);
    
    head=pop(head);
    head=pop(head);
    head=pop(head);
    return 0;
}