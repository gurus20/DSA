#include <bits/stdc++.h>
using namespace std;

struct node {
    int data;
    struct node *next;
};

int count = 10;

struct node *insert(struct node *head, int data) {
    struct node *link = (struct node *) malloc(sizeof(struct node));
    struct node *current;
    // cout << current << " 2" << endl;
    cout << endl;

    link -> data = data;
    link -> next = NULL;

    if (head == NULL){
        head = link;
        cout << head << endl;
    }

    
    if (current == NULL){
        current = head;
    }
    else {
        cout << current << endl;
        current -> next = link;
        current = link;
        cout << current << " 1" << endl;
        cout << current -> next << " 2" << endl;

    }

    return current;
}

void printList(struct node *head){
    struct node *temp = head;

    while (temp != NULL){
        cout << temp -> data << "->";
        temp = temp -> next;
    }
}

// void deleteNode(struct node *head, int data){
//     struct node *temp = head;

//     while (temp != NULL){
//         if (temp -> data == data){
//             struct node* delnode = temp;
//             temp = temp -> next
//         }
//         temp = temp -> next;
//     }
// }

int main(){
    struct node *head = NULL;
    head = insert(head, 10);

    // insert(head, 20);

    // insert(head, 30);
    // insert(head, 40);
    // insert(head, 50);
    // insert(head, 60);

    // printList(head);

    return 0;
}
