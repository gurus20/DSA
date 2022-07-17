#include <bits/stdc++.h>
using namespace std;

#define MAX 10

struct Node{
    int data;
    Node *next;
};

struct Node *add_node(struct Node *head, int data){
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
    struct Node *current;

    new_node -> data = data;
    new_node -> next = NULL;

    if (head == NULL){
        head = new_node;
    }

    if (current == NULL) 
        current = head;

    else {
        current -> next = new_node;
        current = new_node;
    }

    return current;
}

void printList(struct Node *head){
    struct Node *temp = head;
    while (temp != NULL){
        cout << temp -> data << " -> ";
        temp = temp -> next;
    }
}

int main(){
    struct Node *head = NULL;
    head = add_node(head, 10);
    add_node(head, 20);
    add_node(head, 30);
    add_node(head, 40);
    add_node(head, 50);
    
    printList(head);

    return 0;
}