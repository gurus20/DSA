#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node *next;
};

int isempty(struct node *top){
    if(top==NULL){
		return 1;
	}else{
		return 0;
	}
}

struct node *push(struct node *top,int x){
        struct node *new_node=(struct node *)malloc(sizeof(struct node));

		new_node->data=x;
		new_node->next=top;
		top=new_node;
		return top; 	
}

int pop(struct node *top){
	struct node *temp=top;
	int data=temp->data;
	top=temp->next;
	//free(temp);
	return data;
} 

void sort(struct node *top){
	int min=pop(top),temp;
	while(isempty(top)!=1){
	temp=pop(top);
	if(temp<min){
      min=temp;
	 }
	}
	struct node *s_top;
printf("%d",min);
}

int main(){
	int arr[8]={6,3,1,5,2,7,4,8};
	struct node *top;
	int i;
	//push element in stack
	for(i=0;i<8;i++){
		top=push(top,arr[i]);
	}
    sort(top);
	return 0;
}