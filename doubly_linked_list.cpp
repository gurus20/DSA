#include <iostream>
using namespace std;

struct node {
    int data;
    struct node *next;
    struct node *prev;
};

struct node *insert(struct node *head, int data){
    struct node *link = (struct node *) malloc(sizeof(struct node));

    link -> data = data;
    link -> next = NULL;
    link -> prev = NULL;

    if (head == NULL)
        head = link;

    else {

    }
    

}

int main(){
    return 0;
}