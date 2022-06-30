#include<stdio.h>
#include<stdlib.h>

struct node{
    struct node* prev;
    int data;
    struct node* next;
};

struct node *insert(struct node*head,int data){
    struct node *temp,*new_node;
    new_node=(struct node*)malloc(sizeof(struct node));
    new_node->data=data;
    
    if(head==NULL){
        head=new_node;
    }
    if(temp==NULL){
        temp=new_node;
    }
    else{
        temp->next=new_node;
        new_node->next=head;
        new_node->prev=temp;
        temp=new_node;
        head->prev=temp;
    }
    return head;
}

void print(struct node *head){
    struct node *temp;
    temp=head;

    do{
        printf("%d=>",temp->data);
        temp=temp->next;
    }while(temp!=head);
    printf("%da",temp->next->data);
    temp=temp->next;
    printf("%da",temp->prev->data);
    
}

int main(void){
    struct node* head = NULL;
    head=insert(head,10);
    insert(head,20);
    insert(head,30);
    insert(head,40);
    print(head);
    return 0;
}