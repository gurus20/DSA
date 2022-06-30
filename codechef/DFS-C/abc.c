//doubly linked list
#include<stdio.h>
#include<stdlib.h>

struct Node{
struct Node* prev;
	int data;
	struct Node* next;
};

struct Node *head ;

void Insert(int data){
	struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
	new_node->data  = data;
	new_node->prev = NULL;
	new_node->next = head;
	head = new_node;
}
//lets check its doubly list or not
// actually because mne kuch kiya hi nhi abhi
//shayad y tarika sahi ho 
// bol naah

//ok 
//b
void Print(){
  struct Node *temp;
  temp=head;
      
      print("%d",temp->prev->data);
	while(temp != NULL){
		printf("%d=> ",temp->data);
		temp = temp->next;
	}
	printf("\n");
}

int main(void){
	head = NULL;		// declared head as NULL
	Insert(10);
	Insert(20);
	Insert(30);
	Insert(40);
	Insert(50);
	
	Print();
	return 0;
}