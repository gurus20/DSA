#include <bits/stdc++.h>
using namespace std;

struct node {
    int data;
    struct node *next;
};

struct node *insert(struct node *head, int data){
    struct node *link = (struct node *) malloc(sizeof(struct node));
    struct node *current;

    link -> data = data;
    link -> next = NULL;

    if (head == NULL)
        head = link;
    
    if (current == NULL)
        current = head;

    else {
        current -> next = link;
        current = link;
    }
    return link;
}

void printList(struct node *head){
    struct node *temp = head;

    while (temp != NULL){
        cout << temp -> data << "->";
        temp = temp -> next;
    }
}

void deleteNode(struct node *head, int data){
    struct node *temp = head;

    while (temp != NULL){
        if (temp -> data == data){
            struct node* delnode = temp;
            temp = temp -> next
        }
        temp = temp -> next;
    }
}

int main(){
    struct node *head;
    head = insert(head, 10);


    return 0;
}
