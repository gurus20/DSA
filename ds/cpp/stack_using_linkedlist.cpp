#include <bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node *next;

};

int push(node **head, int data){
    node *link = new node();
    if (link == NULL){
        cout << "Stack Overflow" << endl; 
        return 0; 
    }

    link -> data = data;
    link -> next = *head; // attach existing list to node 

    *head = link; // set last node to head
    return (*head) -> data;
}

int pop(node **head){
    int data;
    if (head == NULL){
        return 0;
    }
    else{
        data = (*head) -> data;
        node *temp = *head;
        *head = (*head) -> next;
        delete temp;
    }
    return data;
}

int peak(node *head){
    return head -> data;
}

void printStack(node *head){
    node *temp = head;
    if (temp == NULL)
    {
        cout << "Stack Is Empty\n";
        return;
    }
    else 
    {
        while(temp != NULL){
            cout << temp -> data << " -> ";
            temp = temp -> next;
        }
    }
}

int main(){
    node *head = new node();
    cout << "Pushed : " << push(&head, 10) << endl;
    cout << "Pushed : " << push(&head, 20) << endl;
    cout << "Pushed : " << push(&head, 30) << endl;
    cout << "Pushed : " << push(&head, 40) << endl;
    cout << "Pushed : " << push(&head, 50) << endl;
    
    
    cout << "Popped : " << pop(&head) << endl;
    cout << "Popped : " << pop(&head) << endl;
    cout << "Popped : " << pop(&head) << endl;
    cout << "Popped : " << pop(&head) << endl;
    cout << "Popped : " << pop(&head) << endl;
    cout << "Popped : " << pop(&head) << endl;

    cout << "Peak : " << peak(head) << endl;
    printStack(head);
    return 0;
}
